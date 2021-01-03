# pcl_test


**Compile the package**

```
cd pcl_ws/src
git clone https://github.com/arjunskumar/pcl_test.git
cd .. && catkin_make
source devel/setup.bash
```

**Launch the package**

```
roslaunch pcl_test pcl_test.launch
```

**Play the ROSbag**

```
rosbag play -l  lobby_lidar.bag 
```