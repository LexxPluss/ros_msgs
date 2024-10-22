#ifndef _ROS_lexxauto_msgs_OdomCheckerStatus_h
#define _ROS_lexxauto_msgs_OdomCheckerStatus_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "sensor_msgs/Imu.h"
#include "geometry_msgs/Twist.h"

namespace lexxauto_msgs
{

  class OdomCheckerStatus : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef double _odom_diff_vx_type;
      _odom_diff_vx_type odom_diff_vx;
      typedef double _odom_diff_wz_type;
      _odom_diff_wz_type odom_diff_wz;
      typedef double _odom_vxdt_type;
      _odom_vxdt_type odom_vxdt;
      typedef double _odom_wzdt_type;
      _odom_wzdt_type odom_wzdt;
      typedef double _amcl_error_x_type;
      _amcl_error_x_type amcl_error_x;
      typedef double _amcl_error_y_type;
      _amcl_error_y_type amcl_error_y;
      typedef double _amcl_error_yaw_type;
      _amcl_error_yaw_type amcl_error_yaw;
      typedef double _imu_error_wz_type;
      _imu_error_wz_type imu_error_wz;
      typedef double _imu_error_ax_type;
      _imu_error_ax_type imu_error_ax;
      typedef double _imu_error_ay_type;
      _imu_error_ay_type imu_error_ay;
      typedef double _ax_from_odom_type;
      _ax_from_odom_type ax_from_odom;
      typedef double _ay_from_odom_type;
      _ay_from_odom_type ay_from_odom;
      typedef double _left_wheel_acc_type;
      _left_wheel_acc_type left_wheel_acc;
      typedef double _right_wheel_acc_type;
      _right_wheel_acc_type right_wheel_acc;
      typedef double _left_wheel_jerk_type;
      _left_wheel_jerk_type left_wheel_jerk;
      typedef double _right_wheel_jerk_type;
      _right_wheel_jerk_type right_wheel_jerk;
      typedef bool _has_invalid_field_type;
      _has_invalid_field_type has_invalid_field;
      typedef bool _has_large_odom_diff_vx_type;
      _has_large_odom_diff_vx_type has_large_odom_diff_vx;
      typedef bool _has_large_odom_diff_wz_type;
      _has_large_odom_diff_wz_type has_large_odom_diff_wz;
      typedef bool _has_large_odom_vxdt_type;
      _has_large_odom_vxdt_type has_large_odom_vxdt;
      typedef bool _has_large_odom_wzdt_type;
      _has_large_odom_wzdt_type has_large_odom_wzdt;
      typedef bool _has_large_amcl_error_x_type;
      _has_large_amcl_error_x_type has_large_amcl_error_x;
      typedef bool _has_large_amcl_error_y_type;
      _has_large_amcl_error_y_type has_large_amcl_error_y;
      typedef bool _has_large_amcl_error_yaw_type;
      _has_large_amcl_error_yaw_type has_large_amcl_error_yaw;
      typedef bool _has_large_imu_error_wz_type;
      _has_large_imu_error_wz_type has_large_imu_error_wz;
      typedef bool _has_large_imu_error_ax_type;
      _has_large_imu_error_ax_type has_large_imu_error_ax;
      typedef bool _has_large_imu_error_ay_type;
      _has_large_imu_error_ay_type has_large_imu_error_ay;
      typedef bool _has_large_left_wheel_acc_type;
      _has_large_left_wheel_acc_type has_large_left_wheel_acc;
      typedef bool _has_large_right_wheel_acc_type;
      _has_large_right_wheel_acc_type has_large_right_wheel_acc;
      typedef bool _has_large_wheel_resistance_type;
      _has_large_wheel_resistance_type has_large_wheel_resistance;
      typedef bool _has_wheel_stuck_type;
      _has_wheel_stuck_type has_wheel_stuck;
      typedef bool _has_motor_driver_error_type;
      _has_motor_driver_error_type has_motor_driver_error;
      typedef sensor_msgs::Imu _imu_raw_type;
      _imu_raw_type imu_raw;
      typedef sensor_msgs::Imu _imu_filtered_type;
      _imu_filtered_type imu_filtered;
      typedef geometry_msgs::Twist _odom_raw_type;
      _odom_raw_type odom_raw;
      typedef geometry_msgs::Twist _odom_filtered_type;
      _odom_filtered_type odom_filtered;
      typedef double _left_velocity_raw_type;
      _left_velocity_raw_type left_velocity_raw;
      typedef double _left_velocity_filtered_type;
      _left_velocity_filtered_type left_velocity_filtered;
      typedef double _right_velocity_raw_type;
      _right_velocity_raw_type right_velocity_raw;
      typedef double _right_velocity_filtered_type;
      _right_velocity_filtered_type right_velocity_filtered;

    OdomCheckerStatus():
      header(),
      odom_diff_vx(0),
      odom_diff_wz(0),
      odom_vxdt(0),
      odom_wzdt(0),
      amcl_error_x(0),
      amcl_error_y(0),
      amcl_error_yaw(0),
      imu_error_wz(0),
      imu_error_ax(0),
      imu_error_ay(0),
      ax_from_odom(0),
      ay_from_odom(0),
      left_wheel_acc(0),
      right_wheel_acc(0),
      left_wheel_jerk(0),
      right_wheel_jerk(0),
      has_invalid_field(0),
      has_large_odom_diff_vx(0),
      has_large_odom_diff_wz(0),
      has_large_odom_vxdt(0),
      has_large_odom_wzdt(0),
      has_large_amcl_error_x(0),
      has_large_amcl_error_y(0),
      has_large_amcl_error_yaw(0),
      has_large_imu_error_wz(0),
      has_large_imu_error_ax(0),
      has_large_imu_error_ay(0),
      has_large_left_wheel_acc(0),
      has_large_right_wheel_acc(0),
      has_large_wheel_resistance(0),
      has_wheel_stuck(0),
      has_motor_driver_error(0),
      imu_raw(),
      imu_filtered(),
      odom_raw(),
      odom_filtered(),
      left_velocity_raw(0),
      left_velocity_filtered(0),
      right_velocity_raw(0),
      right_velocity_filtered(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_odom_diff_vx;
      u_odom_diff_vx.real = this->odom_diff_vx;
      *(outbuffer + offset + 0) = (u_odom_diff_vx.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_odom_diff_vx.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_odom_diff_vx.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_odom_diff_vx.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_odom_diff_vx.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_odom_diff_vx.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_odom_diff_vx.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_odom_diff_vx.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->odom_diff_vx);
      union {
        double real;
        uint64_t base;
      } u_odom_diff_wz;
      u_odom_diff_wz.real = this->odom_diff_wz;
      *(outbuffer + offset + 0) = (u_odom_diff_wz.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_odom_diff_wz.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_odom_diff_wz.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_odom_diff_wz.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_odom_diff_wz.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_odom_diff_wz.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_odom_diff_wz.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_odom_diff_wz.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->odom_diff_wz);
      union {
        double real;
        uint64_t base;
      } u_odom_vxdt;
      u_odom_vxdt.real = this->odom_vxdt;
      *(outbuffer + offset + 0) = (u_odom_vxdt.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_odom_vxdt.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_odom_vxdt.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_odom_vxdt.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_odom_vxdt.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_odom_vxdt.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_odom_vxdt.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_odom_vxdt.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->odom_vxdt);
      union {
        double real;
        uint64_t base;
      } u_odom_wzdt;
      u_odom_wzdt.real = this->odom_wzdt;
      *(outbuffer + offset + 0) = (u_odom_wzdt.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_odom_wzdt.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_odom_wzdt.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_odom_wzdt.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_odom_wzdt.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_odom_wzdt.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_odom_wzdt.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_odom_wzdt.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->odom_wzdt);
      union {
        double real;
        uint64_t base;
      } u_amcl_error_x;
      u_amcl_error_x.real = this->amcl_error_x;
      *(outbuffer + offset + 0) = (u_amcl_error_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_amcl_error_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_amcl_error_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_amcl_error_x.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_amcl_error_x.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_amcl_error_x.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_amcl_error_x.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_amcl_error_x.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->amcl_error_x);
      union {
        double real;
        uint64_t base;
      } u_amcl_error_y;
      u_amcl_error_y.real = this->amcl_error_y;
      *(outbuffer + offset + 0) = (u_amcl_error_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_amcl_error_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_amcl_error_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_amcl_error_y.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_amcl_error_y.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_amcl_error_y.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_amcl_error_y.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_amcl_error_y.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->amcl_error_y);
      union {
        double real;
        uint64_t base;
      } u_amcl_error_yaw;
      u_amcl_error_yaw.real = this->amcl_error_yaw;
      *(outbuffer + offset + 0) = (u_amcl_error_yaw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_amcl_error_yaw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_amcl_error_yaw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_amcl_error_yaw.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_amcl_error_yaw.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_amcl_error_yaw.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_amcl_error_yaw.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_amcl_error_yaw.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->amcl_error_yaw);
      union {
        double real;
        uint64_t base;
      } u_imu_error_wz;
      u_imu_error_wz.real = this->imu_error_wz;
      *(outbuffer + offset + 0) = (u_imu_error_wz.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_imu_error_wz.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_imu_error_wz.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_imu_error_wz.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_imu_error_wz.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_imu_error_wz.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_imu_error_wz.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_imu_error_wz.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->imu_error_wz);
      union {
        double real;
        uint64_t base;
      } u_imu_error_ax;
      u_imu_error_ax.real = this->imu_error_ax;
      *(outbuffer + offset + 0) = (u_imu_error_ax.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_imu_error_ax.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_imu_error_ax.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_imu_error_ax.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_imu_error_ax.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_imu_error_ax.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_imu_error_ax.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_imu_error_ax.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->imu_error_ax);
      union {
        double real;
        uint64_t base;
      } u_imu_error_ay;
      u_imu_error_ay.real = this->imu_error_ay;
      *(outbuffer + offset + 0) = (u_imu_error_ay.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_imu_error_ay.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_imu_error_ay.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_imu_error_ay.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_imu_error_ay.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_imu_error_ay.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_imu_error_ay.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_imu_error_ay.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->imu_error_ay);
      union {
        double real;
        uint64_t base;
      } u_ax_from_odom;
      u_ax_from_odom.real = this->ax_from_odom;
      *(outbuffer + offset + 0) = (u_ax_from_odom.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ax_from_odom.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ax_from_odom.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ax_from_odom.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_ax_from_odom.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_ax_from_odom.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_ax_from_odom.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_ax_from_odom.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->ax_from_odom);
      union {
        double real;
        uint64_t base;
      } u_ay_from_odom;
      u_ay_from_odom.real = this->ay_from_odom;
      *(outbuffer + offset + 0) = (u_ay_from_odom.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ay_from_odom.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ay_from_odom.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ay_from_odom.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_ay_from_odom.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_ay_from_odom.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_ay_from_odom.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_ay_from_odom.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->ay_from_odom);
      union {
        double real;
        uint64_t base;
      } u_left_wheel_acc;
      u_left_wheel_acc.real = this->left_wheel_acc;
      *(outbuffer + offset + 0) = (u_left_wheel_acc.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_left_wheel_acc.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_left_wheel_acc.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_left_wheel_acc.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_left_wheel_acc.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_left_wheel_acc.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_left_wheel_acc.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_left_wheel_acc.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->left_wheel_acc);
      union {
        double real;
        uint64_t base;
      } u_right_wheel_acc;
      u_right_wheel_acc.real = this->right_wheel_acc;
      *(outbuffer + offset + 0) = (u_right_wheel_acc.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_right_wheel_acc.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_right_wheel_acc.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_right_wheel_acc.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_right_wheel_acc.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_right_wheel_acc.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_right_wheel_acc.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_right_wheel_acc.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->right_wheel_acc);
      union {
        double real;
        uint64_t base;
      } u_left_wheel_jerk;
      u_left_wheel_jerk.real = this->left_wheel_jerk;
      *(outbuffer + offset + 0) = (u_left_wheel_jerk.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_left_wheel_jerk.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_left_wheel_jerk.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_left_wheel_jerk.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_left_wheel_jerk.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_left_wheel_jerk.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_left_wheel_jerk.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_left_wheel_jerk.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->left_wheel_jerk);
      union {
        double real;
        uint64_t base;
      } u_right_wheel_jerk;
      u_right_wheel_jerk.real = this->right_wheel_jerk;
      *(outbuffer + offset + 0) = (u_right_wheel_jerk.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_right_wheel_jerk.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_right_wheel_jerk.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_right_wheel_jerk.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_right_wheel_jerk.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_right_wheel_jerk.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_right_wheel_jerk.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_right_wheel_jerk.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->right_wheel_jerk);
      union {
        bool real;
        uint8_t base;
      } u_has_invalid_field;
      u_has_invalid_field.real = this->has_invalid_field;
      *(outbuffer + offset + 0) = (u_has_invalid_field.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->has_invalid_field);
      union {
        bool real;
        uint8_t base;
      } u_has_large_odom_diff_vx;
      u_has_large_odom_diff_vx.real = this->has_large_odom_diff_vx;
      *(outbuffer + offset + 0) = (u_has_large_odom_diff_vx.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->has_large_odom_diff_vx);
      union {
        bool real;
        uint8_t base;
      } u_has_large_odom_diff_wz;
      u_has_large_odom_diff_wz.real = this->has_large_odom_diff_wz;
      *(outbuffer + offset + 0) = (u_has_large_odom_diff_wz.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->has_large_odom_diff_wz);
      union {
        bool real;
        uint8_t base;
      } u_has_large_odom_vxdt;
      u_has_large_odom_vxdt.real = this->has_large_odom_vxdt;
      *(outbuffer + offset + 0) = (u_has_large_odom_vxdt.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->has_large_odom_vxdt);
      union {
        bool real;
        uint8_t base;
      } u_has_large_odom_wzdt;
      u_has_large_odom_wzdt.real = this->has_large_odom_wzdt;
      *(outbuffer + offset + 0) = (u_has_large_odom_wzdt.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->has_large_odom_wzdt);
      union {
        bool real;
        uint8_t base;
      } u_has_large_amcl_error_x;
      u_has_large_amcl_error_x.real = this->has_large_amcl_error_x;
      *(outbuffer + offset + 0) = (u_has_large_amcl_error_x.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->has_large_amcl_error_x);
      union {
        bool real;
        uint8_t base;
      } u_has_large_amcl_error_y;
      u_has_large_amcl_error_y.real = this->has_large_amcl_error_y;
      *(outbuffer + offset + 0) = (u_has_large_amcl_error_y.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->has_large_amcl_error_y);
      union {
        bool real;
        uint8_t base;
      } u_has_large_amcl_error_yaw;
      u_has_large_amcl_error_yaw.real = this->has_large_amcl_error_yaw;
      *(outbuffer + offset + 0) = (u_has_large_amcl_error_yaw.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->has_large_amcl_error_yaw);
      union {
        bool real;
        uint8_t base;
      } u_has_large_imu_error_wz;
      u_has_large_imu_error_wz.real = this->has_large_imu_error_wz;
      *(outbuffer + offset + 0) = (u_has_large_imu_error_wz.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->has_large_imu_error_wz);
      union {
        bool real;
        uint8_t base;
      } u_has_large_imu_error_ax;
      u_has_large_imu_error_ax.real = this->has_large_imu_error_ax;
      *(outbuffer + offset + 0) = (u_has_large_imu_error_ax.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->has_large_imu_error_ax);
      union {
        bool real;
        uint8_t base;
      } u_has_large_imu_error_ay;
      u_has_large_imu_error_ay.real = this->has_large_imu_error_ay;
      *(outbuffer + offset + 0) = (u_has_large_imu_error_ay.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->has_large_imu_error_ay);
      union {
        bool real;
        uint8_t base;
      } u_has_large_left_wheel_acc;
      u_has_large_left_wheel_acc.real = this->has_large_left_wheel_acc;
      *(outbuffer + offset + 0) = (u_has_large_left_wheel_acc.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->has_large_left_wheel_acc);
      union {
        bool real;
        uint8_t base;
      } u_has_large_right_wheel_acc;
      u_has_large_right_wheel_acc.real = this->has_large_right_wheel_acc;
      *(outbuffer + offset + 0) = (u_has_large_right_wheel_acc.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->has_large_right_wheel_acc);
      union {
        bool real;
        uint8_t base;
      } u_has_large_wheel_resistance;
      u_has_large_wheel_resistance.real = this->has_large_wheel_resistance;
      *(outbuffer + offset + 0) = (u_has_large_wheel_resistance.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->has_large_wheel_resistance);
      union {
        bool real;
        uint8_t base;
      } u_has_wheel_stuck;
      u_has_wheel_stuck.real = this->has_wheel_stuck;
      *(outbuffer + offset + 0) = (u_has_wheel_stuck.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->has_wheel_stuck);
      union {
        bool real;
        uint8_t base;
      } u_has_motor_driver_error;
      u_has_motor_driver_error.real = this->has_motor_driver_error;
      *(outbuffer + offset + 0) = (u_has_motor_driver_error.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->has_motor_driver_error);
      offset += this->imu_raw.serialize(outbuffer + offset);
      offset += this->imu_filtered.serialize(outbuffer + offset);
      offset += this->odom_raw.serialize(outbuffer + offset);
      offset += this->odom_filtered.serialize(outbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_left_velocity_raw;
      u_left_velocity_raw.real = this->left_velocity_raw;
      *(outbuffer + offset + 0) = (u_left_velocity_raw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_left_velocity_raw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_left_velocity_raw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_left_velocity_raw.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_left_velocity_raw.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_left_velocity_raw.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_left_velocity_raw.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_left_velocity_raw.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->left_velocity_raw);
      union {
        double real;
        uint64_t base;
      } u_left_velocity_filtered;
      u_left_velocity_filtered.real = this->left_velocity_filtered;
      *(outbuffer + offset + 0) = (u_left_velocity_filtered.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_left_velocity_filtered.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_left_velocity_filtered.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_left_velocity_filtered.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_left_velocity_filtered.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_left_velocity_filtered.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_left_velocity_filtered.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_left_velocity_filtered.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->left_velocity_filtered);
      union {
        double real;
        uint64_t base;
      } u_right_velocity_raw;
      u_right_velocity_raw.real = this->right_velocity_raw;
      *(outbuffer + offset + 0) = (u_right_velocity_raw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_right_velocity_raw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_right_velocity_raw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_right_velocity_raw.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_right_velocity_raw.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_right_velocity_raw.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_right_velocity_raw.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_right_velocity_raw.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->right_velocity_raw);
      union {
        double real;
        uint64_t base;
      } u_right_velocity_filtered;
      u_right_velocity_filtered.real = this->right_velocity_filtered;
      *(outbuffer + offset + 0) = (u_right_velocity_filtered.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_right_velocity_filtered.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_right_velocity_filtered.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_right_velocity_filtered.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_right_velocity_filtered.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_right_velocity_filtered.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_right_velocity_filtered.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_right_velocity_filtered.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->right_velocity_filtered);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_odom_diff_vx;
      u_odom_diff_vx.base = 0;
      u_odom_diff_vx.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_odom_diff_vx.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_odom_diff_vx.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_odom_diff_vx.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_odom_diff_vx.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_odom_diff_vx.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_odom_diff_vx.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_odom_diff_vx.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->odom_diff_vx = u_odom_diff_vx.real;
      offset += sizeof(this->odom_diff_vx);
      union {
        double real;
        uint64_t base;
      } u_odom_diff_wz;
      u_odom_diff_wz.base = 0;
      u_odom_diff_wz.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_odom_diff_wz.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_odom_diff_wz.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_odom_diff_wz.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_odom_diff_wz.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_odom_diff_wz.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_odom_diff_wz.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_odom_diff_wz.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->odom_diff_wz = u_odom_diff_wz.real;
      offset += sizeof(this->odom_diff_wz);
      union {
        double real;
        uint64_t base;
      } u_odom_vxdt;
      u_odom_vxdt.base = 0;
      u_odom_vxdt.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_odom_vxdt.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_odom_vxdt.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_odom_vxdt.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_odom_vxdt.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_odom_vxdt.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_odom_vxdt.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_odom_vxdt.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->odom_vxdt = u_odom_vxdt.real;
      offset += sizeof(this->odom_vxdt);
      union {
        double real;
        uint64_t base;
      } u_odom_wzdt;
      u_odom_wzdt.base = 0;
      u_odom_wzdt.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_odom_wzdt.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_odom_wzdt.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_odom_wzdt.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_odom_wzdt.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_odom_wzdt.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_odom_wzdt.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_odom_wzdt.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->odom_wzdt = u_odom_wzdt.real;
      offset += sizeof(this->odom_wzdt);
      union {
        double real;
        uint64_t base;
      } u_amcl_error_x;
      u_amcl_error_x.base = 0;
      u_amcl_error_x.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_amcl_error_x.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_amcl_error_x.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_amcl_error_x.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_amcl_error_x.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_amcl_error_x.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_amcl_error_x.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_amcl_error_x.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->amcl_error_x = u_amcl_error_x.real;
      offset += sizeof(this->amcl_error_x);
      union {
        double real;
        uint64_t base;
      } u_amcl_error_y;
      u_amcl_error_y.base = 0;
      u_amcl_error_y.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_amcl_error_y.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_amcl_error_y.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_amcl_error_y.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_amcl_error_y.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_amcl_error_y.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_amcl_error_y.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_amcl_error_y.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->amcl_error_y = u_amcl_error_y.real;
      offset += sizeof(this->amcl_error_y);
      union {
        double real;
        uint64_t base;
      } u_amcl_error_yaw;
      u_amcl_error_yaw.base = 0;
      u_amcl_error_yaw.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_amcl_error_yaw.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_amcl_error_yaw.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_amcl_error_yaw.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_amcl_error_yaw.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_amcl_error_yaw.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_amcl_error_yaw.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_amcl_error_yaw.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->amcl_error_yaw = u_amcl_error_yaw.real;
      offset += sizeof(this->amcl_error_yaw);
      union {
        double real;
        uint64_t base;
      } u_imu_error_wz;
      u_imu_error_wz.base = 0;
      u_imu_error_wz.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_imu_error_wz.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_imu_error_wz.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_imu_error_wz.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_imu_error_wz.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_imu_error_wz.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_imu_error_wz.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_imu_error_wz.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->imu_error_wz = u_imu_error_wz.real;
      offset += sizeof(this->imu_error_wz);
      union {
        double real;
        uint64_t base;
      } u_imu_error_ax;
      u_imu_error_ax.base = 0;
      u_imu_error_ax.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_imu_error_ax.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_imu_error_ax.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_imu_error_ax.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_imu_error_ax.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_imu_error_ax.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_imu_error_ax.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_imu_error_ax.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->imu_error_ax = u_imu_error_ax.real;
      offset += sizeof(this->imu_error_ax);
      union {
        double real;
        uint64_t base;
      } u_imu_error_ay;
      u_imu_error_ay.base = 0;
      u_imu_error_ay.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_imu_error_ay.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_imu_error_ay.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_imu_error_ay.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_imu_error_ay.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_imu_error_ay.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_imu_error_ay.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_imu_error_ay.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->imu_error_ay = u_imu_error_ay.real;
      offset += sizeof(this->imu_error_ay);
      union {
        double real;
        uint64_t base;
      } u_ax_from_odom;
      u_ax_from_odom.base = 0;
      u_ax_from_odom.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ax_from_odom.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ax_from_odom.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ax_from_odom.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_ax_from_odom.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_ax_from_odom.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_ax_from_odom.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_ax_from_odom.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->ax_from_odom = u_ax_from_odom.real;
      offset += sizeof(this->ax_from_odom);
      union {
        double real;
        uint64_t base;
      } u_ay_from_odom;
      u_ay_from_odom.base = 0;
      u_ay_from_odom.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ay_from_odom.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ay_from_odom.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ay_from_odom.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_ay_from_odom.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_ay_from_odom.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_ay_from_odom.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_ay_from_odom.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->ay_from_odom = u_ay_from_odom.real;
      offset += sizeof(this->ay_from_odom);
      union {
        double real;
        uint64_t base;
      } u_left_wheel_acc;
      u_left_wheel_acc.base = 0;
      u_left_wheel_acc.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_left_wheel_acc.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_left_wheel_acc.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_left_wheel_acc.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_left_wheel_acc.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_left_wheel_acc.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_left_wheel_acc.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_left_wheel_acc.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->left_wheel_acc = u_left_wheel_acc.real;
      offset += sizeof(this->left_wheel_acc);
      union {
        double real;
        uint64_t base;
      } u_right_wheel_acc;
      u_right_wheel_acc.base = 0;
      u_right_wheel_acc.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_right_wheel_acc.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_right_wheel_acc.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_right_wheel_acc.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_right_wheel_acc.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_right_wheel_acc.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_right_wheel_acc.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_right_wheel_acc.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->right_wheel_acc = u_right_wheel_acc.real;
      offset += sizeof(this->right_wheel_acc);
      union {
        double real;
        uint64_t base;
      } u_left_wheel_jerk;
      u_left_wheel_jerk.base = 0;
      u_left_wheel_jerk.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_left_wheel_jerk.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_left_wheel_jerk.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_left_wheel_jerk.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_left_wheel_jerk.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_left_wheel_jerk.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_left_wheel_jerk.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_left_wheel_jerk.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->left_wheel_jerk = u_left_wheel_jerk.real;
      offset += sizeof(this->left_wheel_jerk);
      union {
        double real;
        uint64_t base;
      } u_right_wheel_jerk;
      u_right_wheel_jerk.base = 0;
      u_right_wheel_jerk.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_right_wheel_jerk.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_right_wheel_jerk.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_right_wheel_jerk.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_right_wheel_jerk.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_right_wheel_jerk.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_right_wheel_jerk.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_right_wheel_jerk.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->right_wheel_jerk = u_right_wheel_jerk.real;
      offset += sizeof(this->right_wheel_jerk);
      union {
        bool real;
        uint8_t base;
      } u_has_invalid_field;
      u_has_invalid_field.base = 0;
      u_has_invalid_field.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->has_invalid_field = u_has_invalid_field.real;
      offset += sizeof(this->has_invalid_field);
      union {
        bool real;
        uint8_t base;
      } u_has_large_odom_diff_vx;
      u_has_large_odom_diff_vx.base = 0;
      u_has_large_odom_diff_vx.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->has_large_odom_diff_vx = u_has_large_odom_diff_vx.real;
      offset += sizeof(this->has_large_odom_diff_vx);
      union {
        bool real;
        uint8_t base;
      } u_has_large_odom_diff_wz;
      u_has_large_odom_diff_wz.base = 0;
      u_has_large_odom_diff_wz.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->has_large_odom_diff_wz = u_has_large_odom_diff_wz.real;
      offset += sizeof(this->has_large_odom_diff_wz);
      union {
        bool real;
        uint8_t base;
      } u_has_large_odom_vxdt;
      u_has_large_odom_vxdt.base = 0;
      u_has_large_odom_vxdt.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->has_large_odom_vxdt = u_has_large_odom_vxdt.real;
      offset += sizeof(this->has_large_odom_vxdt);
      union {
        bool real;
        uint8_t base;
      } u_has_large_odom_wzdt;
      u_has_large_odom_wzdt.base = 0;
      u_has_large_odom_wzdt.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->has_large_odom_wzdt = u_has_large_odom_wzdt.real;
      offset += sizeof(this->has_large_odom_wzdt);
      union {
        bool real;
        uint8_t base;
      } u_has_large_amcl_error_x;
      u_has_large_amcl_error_x.base = 0;
      u_has_large_amcl_error_x.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->has_large_amcl_error_x = u_has_large_amcl_error_x.real;
      offset += sizeof(this->has_large_amcl_error_x);
      union {
        bool real;
        uint8_t base;
      } u_has_large_amcl_error_y;
      u_has_large_amcl_error_y.base = 0;
      u_has_large_amcl_error_y.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->has_large_amcl_error_y = u_has_large_amcl_error_y.real;
      offset += sizeof(this->has_large_amcl_error_y);
      union {
        bool real;
        uint8_t base;
      } u_has_large_amcl_error_yaw;
      u_has_large_amcl_error_yaw.base = 0;
      u_has_large_amcl_error_yaw.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->has_large_amcl_error_yaw = u_has_large_amcl_error_yaw.real;
      offset += sizeof(this->has_large_amcl_error_yaw);
      union {
        bool real;
        uint8_t base;
      } u_has_large_imu_error_wz;
      u_has_large_imu_error_wz.base = 0;
      u_has_large_imu_error_wz.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->has_large_imu_error_wz = u_has_large_imu_error_wz.real;
      offset += sizeof(this->has_large_imu_error_wz);
      union {
        bool real;
        uint8_t base;
      } u_has_large_imu_error_ax;
      u_has_large_imu_error_ax.base = 0;
      u_has_large_imu_error_ax.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->has_large_imu_error_ax = u_has_large_imu_error_ax.real;
      offset += sizeof(this->has_large_imu_error_ax);
      union {
        bool real;
        uint8_t base;
      } u_has_large_imu_error_ay;
      u_has_large_imu_error_ay.base = 0;
      u_has_large_imu_error_ay.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->has_large_imu_error_ay = u_has_large_imu_error_ay.real;
      offset += sizeof(this->has_large_imu_error_ay);
      union {
        bool real;
        uint8_t base;
      } u_has_large_left_wheel_acc;
      u_has_large_left_wheel_acc.base = 0;
      u_has_large_left_wheel_acc.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->has_large_left_wheel_acc = u_has_large_left_wheel_acc.real;
      offset += sizeof(this->has_large_left_wheel_acc);
      union {
        bool real;
        uint8_t base;
      } u_has_large_right_wheel_acc;
      u_has_large_right_wheel_acc.base = 0;
      u_has_large_right_wheel_acc.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->has_large_right_wheel_acc = u_has_large_right_wheel_acc.real;
      offset += sizeof(this->has_large_right_wheel_acc);
      union {
        bool real;
        uint8_t base;
      } u_has_large_wheel_resistance;
      u_has_large_wheel_resistance.base = 0;
      u_has_large_wheel_resistance.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->has_large_wheel_resistance = u_has_large_wheel_resistance.real;
      offset += sizeof(this->has_large_wheel_resistance);
      union {
        bool real;
        uint8_t base;
      } u_has_wheel_stuck;
      u_has_wheel_stuck.base = 0;
      u_has_wheel_stuck.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->has_wheel_stuck = u_has_wheel_stuck.real;
      offset += sizeof(this->has_wheel_stuck);
      union {
        bool real;
        uint8_t base;
      } u_has_motor_driver_error;
      u_has_motor_driver_error.base = 0;
      u_has_motor_driver_error.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->has_motor_driver_error = u_has_motor_driver_error.real;
      offset += sizeof(this->has_motor_driver_error);
      offset += this->imu_raw.deserialize(inbuffer + offset);
      offset += this->imu_filtered.deserialize(inbuffer + offset);
      offset += this->odom_raw.deserialize(inbuffer + offset);
      offset += this->odom_filtered.deserialize(inbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_left_velocity_raw;
      u_left_velocity_raw.base = 0;
      u_left_velocity_raw.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_left_velocity_raw.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_left_velocity_raw.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_left_velocity_raw.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_left_velocity_raw.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_left_velocity_raw.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_left_velocity_raw.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_left_velocity_raw.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->left_velocity_raw = u_left_velocity_raw.real;
      offset += sizeof(this->left_velocity_raw);
      union {
        double real;
        uint64_t base;
      } u_left_velocity_filtered;
      u_left_velocity_filtered.base = 0;
      u_left_velocity_filtered.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_left_velocity_filtered.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_left_velocity_filtered.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_left_velocity_filtered.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_left_velocity_filtered.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_left_velocity_filtered.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_left_velocity_filtered.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_left_velocity_filtered.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->left_velocity_filtered = u_left_velocity_filtered.real;
      offset += sizeof(this->left_velocity_filtered);
      union {
        double real;
        uint64_t base;
      } u_right_velocity_raw;
      u_right_velocity_raw.base = 0;
      u_right_velocity_raw.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_right_velocity_raw.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_right_velocity_raw.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_right_velocity_raw.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_right_velocity_raw.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_right_velocity_raw.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_right_velocity_raw.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_right_velocity_raw.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->right_velocity_raw = u_right_velocity_raw.real;
      offset += sizeof(this->right_velocity_raw);
      union {
        double real;
        uint64_t base;
      } u_right_velocity_filtered;
      u_right_velocity_filtered.base = 0;
      u_right_velocity_filtered.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_right_velocity_filtered.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_right_velocity_filtered.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_right_velocity_filtered.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_right_velocity_filtered.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_right_velocity_filtered.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_right_velocity_filtered.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_right_velocity_filtered.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->right_velocity_filtered = u_right_velocity_filtered.real;
      offset += sizeof(this->right_velocity_filtered);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/OdomCheckerStatus"; };
    virtual const char * getMD5() override { return "101aea413fa2ad6c7ba55d24e78fe5d6"; };

  };

}
#endif
