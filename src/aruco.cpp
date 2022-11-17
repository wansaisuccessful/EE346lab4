#pragma once
#include "ros/ros.h"
#include <vector>
#include "geometry_msgs/PointStamped.h"
#include "geometry_msgs/Pose.h"
#include "geometry_msgs/PoseStamped.h"
#include "aruco.hpp"
#include "line_follower_turtlebot/pos.h"


void Aruco::ArucoCallback(const geometry_msgs::PoseStampedPtr& msg){
    this->h_seq = msg->header.seq;
    this->pose_x = msg->pose.position.x;
    this->pose_y = msg->pose.position.y;
    this->pose_z = msg->pose.position.z;
    this->oruent_x = msg->pose.orientation.x;
    this->oruent_y = msg->pose.orientation.y;
    this->oruent_z = msg->pose.orientation.z;
    this->oruent_w = msg->pose.orientation.w;
}


int Aruco::stop(){
    if (pose_x>0&&pose_z>=0.25) {
    Aruco::dir = 2;
  } else if (pose_x<=0&&pose_z>=0.25) {
    Aruco::dir = 0;
  } else {
    Aruco::dir = 4;
  }
  return Aruco::dir;
}
 


