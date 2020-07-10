from setuptools import setup

package_name = 'action_availabilities'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='craig',
    maintainer_email='craig.hickman@ukaea.uk',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'cli_tool = action_availabilities.cli_tool:main',
            'hello_action_node = action_availabilities.hello_action_node:main',
            'hello_avlaction_node = action_availabilities.hello_avlaction_node:main'
        ],
    },
)
