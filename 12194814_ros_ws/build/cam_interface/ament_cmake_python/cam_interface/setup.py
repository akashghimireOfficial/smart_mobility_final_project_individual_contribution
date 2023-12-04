from setuptools import find_packages
from setuptools import setup

setup(
    name='cam_interface',
    version='0.0.0',
    packages=find_packages(
        include=('cam_interface', 'cam_interface.*')),
)
