#include <iostream>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>

int main(int argc, char** argv){
    pcl::PointCloud<pcl::PointXYZ> cloud;
    // create point cloud
    
    cloud.width = 5;
    cloud.height = 1;
    cloud.is_dense = false;

    cloud.points.resize(cloud.width*cloud.height);
    // write point cloud data randomly 
    
    /* size_t is an unsigned integer data type 
    which can assign only 0 and greater than 0 integer values.*/
    for(size_t i = 0; i < cloud.points.size(); i++)
    {
        cloud.points[i].x = 1024*rand()/(RAND_MAX+1.0f); 
        cloud.points[i].y = 1024*rand()/(RAND_MAX+1.0f);
        cloud.points[i].z = 1024*rand()/(RAND_MAX+1.0f);
    }

    // save the point cloud
    pcl::io::savePCDFileASCII("test_pcd.pcd", cloud);

    std::cerr<<"Saved " <<cloud.points.size()<<" data points"
             <<" to test_pcd.pcd"<<std::endl;
    for(size_t i= 0; i < cloud.points.size();i++){
        std::cerr<<" "<<cloud.points[i].x<< " "<<cloud.points[i].y
                 <<" "<<cloud.points[i].z<<std::endl;
    }
    return 0;
}