#pragma once

#include <pcl_conversions/pcl_conversions.h>
#include <pcl/point_types.h>
#include <pcl/conversions.h>
#include <pcl_ros/transforms.h>

#include <pcl/filters/voxel_grid.h>

#include <ros/ros.h>
#include <sensor_msgs/PointCloud2.h>

class PclTestCore
{
    private:
        ros::Subscriber sub_point_cloud_;
        ros::Publisher pub_filtered_points_;
        void pc_callback(const sensor_msgs::PointCloud2ConstPtr& in_cloud);

    public:
        PclTestCore(ros::NodeHandle &nh);
        ~PclTestCore();
};

