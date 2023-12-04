from setuptools import find_packages
from setuptools import setup

setup(
    name='gesture_interface',
    version='0.0.0',
    packages=find_packages(
        include=('gesture_interface', 'gesture_interface.*')),
)
