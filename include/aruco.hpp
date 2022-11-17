#pragma once
#include "ros/ros.h"
#include <vector>
#include "geometry_msgs/PointStamped.h"
#include "geometry_msgs/Pose.h"
#include "geometry_msgs/PoseStamped.h"
#include "line_follower_turtlebot/pos.h"

class Aruco{
public:
    double pose_x;
    double pose_y;
    double pose_z;

    double oruent_x;
    double oruent_y;
    double oruent_z;
    double oruent_w;
    uint32_t h_seq;
    int dir;
    void ArucoCallback(const geometry_msgs::PoseStampedPtr& msg);

    int stop();
};

