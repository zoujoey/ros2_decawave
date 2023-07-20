from setuptools import setup

package_name = 'decawave_test_controller'

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
    maintainer='root',
    maintainer_email='root@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "decawave_pub1 = decawave_test_controller.decawave_pub1:main",
            "decawave_sub1 = decawave_test_controller.decawave_sub1:main",
            "decawave_pub2 = decawave_test_controller.decawave_pub2:main",
            "decawave_sub2 = decawave_test_controller.decawave_sub2:main",
            "decawave_pub3 = decawave_test_controller.decawave_pub3:main",
            "decawave_sub3 = decawave_test_controller.decawave_sub3:main"
        ],
    },
)
