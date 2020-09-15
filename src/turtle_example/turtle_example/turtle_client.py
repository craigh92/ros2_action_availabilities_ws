from tkinter import *
import os
import sys
import time
import math
from typing import Dict, Any
from enum import Enum
from PIL import ImageTk, PngImagePlugin
from PIL import Image as PILImage
from threading import Thread
import rclpy
from rclpy.node import Node
from rclpy.task import Future

#TODO put TK GUI stuff into its own file

class TurtleImage:
    """
    A Turtle image that will be placed on the canvas that is given in the ctor.
    The turtle can be moved around the canvas with the move() method.
    """

    def __init__(self, canvas : Canvas):
        self.__turtle_file = self.__find_file("turtle_example/turtle.png")
        self.__canvas = canvas
        self.__pilImage : PngImagePlugin.PngImageFile = PILImage.open(self.__turtle_file)
        self.__pilTkImage : ImageTk.PhotoImage = ImageTk.PhotoImage(self.__pilImage)
        self.__turtle_id : int = canvas.create_image(100,100, image=self.__pilTkImage)
        self.__is_moving = False
        self.__cancel_requested = False
        self.__current_angle = 0

    def move(self, dest_x : int, dest_y :int, speed : float = 0.1):
        self.__is_moving = True
        delay_ms = math.floor(1/speed)
        current_x, current_y = self.__canvas.coords(self.__turtle_id)

        delta_x = 1 if current_x < dest_x else -1 if current_x > dest_x else 0
        delta_y = 1 if current_y < dest_y else -1 if current_y > dest_y else 0
        angle = 90 + math.atan2(delta_y,-delta_x) * 180 / math.pi

        if self.__current_angle != angle:
            self.__rotate(angle)

        if (delta_x, delta_y) != (0, 0):
            self.__canvas.move(self.__turtle_id, delta_x, delta_y)

        if ((current_x, current_y) != (dest_x, dest_y)) and not self.__cancel_requested:
            self.__canvas.after(delay_ms, self.move, dest_x, dest_y, speed)
        else:
            self.__is_moving = False
            self.__cancel_requested = False

    @property
    def is_moving(self) -> bool:
        return self.__is_moving

    def cancel_move(self):
        self.__cancel_requested = True

    def __find_file(self, pathname : str) -> str:
        """
        Searches PYTHON_PATH and returns absolute file path of file.
        """
        for dirname in sys.path:
            candidate = os.path.join(dirname, pathname)
            if os.path.isfile(candidate):
                return candidate
        raise Exception("Can't find file {}".format(pathname))

    def __replace_image(self, new_image : ImageTk.PhotoImage):
        self.__canvas.itemconfig(self.__turtle_id, image = new_image)

    def __rotate(self, angle : float):
        self.__pilImage = PILImage.open(self.__turtle_file)
        self.__pilImage = self.__pilImage.rotate(angle)
        self.__pilTkImage = ImageTk.PhotoImage(self.__pilImage)
        self.__replace_image(self.__pilTkImage)
        self.__current_angle = angle
        

class TurtleCanvas:
    """
    A cyan canvas with a turtle in it.
    Clicking on the canvas moves the turtle
    """
    def __init__(self, master : Widget, enable_click_callback : bool = True):
        self.__canvas = Canvas(master=master, bg='cyan')
        self.__turtle = TurtleImage(self.__canvas)
        if enable_click_callback:
            self.__canvas.bind("<Button-1>", self.__click_callback)

    def __click_callback(self, event):
        if not self.__turtle.is_moving:
            self.__turtle.move(event.x, event.y, speed=0.1)
        else:
            self.__turtle.cancel_move()
    
    def pack(self):
        self.__canvas.pack()

class TkGUI:
    def __init__(self):
        self.root = Tk()
        self.frame = Frame(master=self.root, width=500, height=500)
        self.frame.pack()
        self.canvas = TurtleCanvas(master=self.frame)
        self.canvas.pack()

    def start(self):
        self.root.mainloop()

class RosBackend:
    def __init__(self, future : Future):
        rclpy.init()
        self.node = Node("turtle_example_{}".format(os.getpid()))
        self.future = future

    def spin_until_future_complete(self):
        rclpy.spin_until_future_complete(self.node, self.future, timeout_sec=sys.maxsize)

def main():

    done = Future()
    ros = RosBackend(done)
    rosthread = Thread(target = ros.spin_until_future_complete)
    rosthread.start()

    gui = TkGUI()
    gui.start()

    print("shutting down ros...")
    done.set_result(True)
    rosthread.join()

if __name__ == '__main__':
    main()
