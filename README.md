# installopencv3.2ubuntu
How to install OpenCV in Ubuntu for C/C++, Python and Java

## updating ubuntu

$ sudo apt-get update
$ sudo apt-get upgrade

## install dependencies

$ sudo apt-get install cmake git libgtk2.0-dev pkg-config libavcodec-dev libavformat-dev libswscale-dev

$ sudo apt-get install python3.5-dev python3-numpy libtbb2 libtbb-dev 

$ sudo apt-get install libjpeg-dev libpng-dev libtiff5-dev libjasper-dev libdc1394-22-dev libeigen3-dev libtheora-dev libvorbis-dev libxvidcore-dev libx264-dev sphinx-common libtbb-dev yasm libfaac-dev libopencore-amrnb-dev libopencore-amrwb-dev libopenexr-dev libgstreamer-plugins-base1.0-dev libavutil-dev libavfilter-dev  libavresample-dev

## install java support

$ sudo add-apt-repository ppa:webupd8team/java
$ sudo apt-get update
$ sudo apt-get install oracle-java8-installer

$ sudo nano /etc/environment

JAVA_HOME="/usr/lib/jvm/java-8-oracle"

$ source /etc/environment

$ echo $JAVA_HOME

$ sudo apt-get install ant

## getting OpenCV

$ sudo -s

$ cd /opt

$ /opt$ git clone https://github.com/Itseez/opencv.git

$ /opt$ git clone https://github.com/Itseez/opencv_contrib.git

## install OpenCV

$ /opt/opencv$ mkdir release

$ 
