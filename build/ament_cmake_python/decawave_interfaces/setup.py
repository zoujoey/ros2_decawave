from setuptools import find_packages
from setuptools import setup

setup(
    name='decawave_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('decawave_interfaces', 'decawave_interfaces.*')),
)
