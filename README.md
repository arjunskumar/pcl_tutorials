# pcl_tutorials 


```
Theme used -  Readthedocs
PCL version - 1.9.1
OS - Ubuntu 20.04

```


### Install PCL 1.9 on Ubuntu 20.04

[Install the Dependancies]()
```
sudo apt-get update
sudo apt-get install git build-essential linux-libc-dev 
sudo apt-get install cmake cmake-gui 
sudo apt-get install libusb-1.0-0-dev libusb-dev libudev-dev 
sudo apt-get install mpi-default-dev openmpi-bin openmpi-common 
sudo apt-get install libflann1.9 libflann-dev 
sudo apt-get install libeigen3-dev 
sudo apt-get install libboost-all-dev 
sudo apt-get install libvtk6.3-qt libvtk6.3 libvtk6-dev 
sudo apt-get install libqhull* libgtest-dev 
sudo apt-get install freeglut3-dev pkg-config 
sudo apt-get install libxmu-dev libxi-dev 
sudo apt-get install mono-complete 
sudo apt-get install openjdk-8-jdk openjdk-8-jre
```

[Download PCL 1.9.1](https://github.com/PointCloudLibrary/pcl/archive/pcl-1.9.1.zip)

```
unzip pcl-1.9.1.zip
cd pcl-1.9.1
mkdir release && cd release 
cmake -DCMAKE_BUILD_TYPE=None -DCMAKE_INSTALL_PREFIX=/usr \
-DBUILD_GPU=ON-DBUILD_apps=ON -DBUILD_examples=ON \ 
-DCMAKE_INSTALL_PREFIX=/usr .. 
make -j16

sudo make install
sudo apt-get install -y pcl-tools
```


### Install PCL 1.8 on Ubuntu 18.04
```
sudo apt-get install -y libpcl-dev 
```
