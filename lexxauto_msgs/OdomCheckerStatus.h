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
      typedef double _odom_vxdt_type;
      _odom_vxdt_type odom_vxdt;
      typedef double _odom_wzdt_type;
      _odom_wzdt_type odom_wzdt;
      typedef double _imu_error_wz_type;
      _imu_error_wz_type imu_error_wz;
      typedef double _imu_error_ax_type;
      _imu_error_ax_type imu_error_ax;
      typedef double _imu_error_ay_type;
      _imu_error_ay_type imu_error_ay;
      typedef bool _has_invalid_field_type;
      _has_invalid_field_type has_invalid_field;
      typedef bool _has_large_odom_vxdt_type;
      _has_large_odom_vxdt_type has_large_odom_vxdt;
      typedef bool _has_large_odom_wzdt_type;
      _has_large_odom_wzdt_type has_large_odom_wzdt;
      typedef bool _has_large_imu_error_wz_type;
      _has_large_imu_error_wz_type has_large_imu_error_wz;
      typedef bool _has_large_imu_error_ax_type;
      _has_large_imu_error_ax_type has_large_imu_error_ax;
      typedef bool _has_large_imu_error_ay_type;
      _has_large_imu_error_ay_type has_large_imu_error_ay;
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

    OdomCheckerStatus():
      header(),
      odom_vxdt(0),
      odom_wzdt(0),
      imu_error_wz(0),
      imu_error_ax(0),
      imu_error_ay(0),
      has_invalid_field(0),
      has_large_odom_vxdt(0),
      has_large_odom_wzdt(0),
      has_large_imu_error_wz(0),
      has_large_imu_error_ax(0),
      has_large_imu_error_ay(0),
      has_motor_driver_error(0),
      imu_raw(),
      imu_filtered(),
      odom_raw(),
      odom_filtered()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
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
        bool real;
        uint8_t base;
      } u_has_invalid_field;
      u_has_invalid_field.real = this->has_invalid_field;
      *(outbuffer + offset + 0) = (u_has_invalid_field.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->has_invalid_field);
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
      } u_has_motor_driver_error;
      u_has_motor_driver_error.real = this->has_motor_driver_error;
      *(outbuffer + offset + 0) = (u_has_motor_driver_error.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->has_motor_driver_error);
      offset += this->imu_raw.serialize(outbuffer + offset);
      offset += this->imu_filtered.serialize(outbuffer + offset);
      offset += this->odom_raw.serialize(outbuffer + offset);
      offset += this->odom_filtered.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
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
      } u_has_motor_driver_error;
      u_has_motor_driver_error.base = 0;
      u_has_motor_driver_error.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->has_motor_driver_error = u_has_motor_driver_error.real;
      offset += sizeof(this->has_motor_driver_error);
      offset += this->imu_raw.deserialize(inbuffer + offset);
      offset += this->imu_filtered.deserialize(inbuffer + offset);
      offset += this->odom_raw.deserialize(inbuffer + offset);
      offset += this->odom_filtered.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/OdomCheckerStatus"; };
    virtual const char * getMD5() override { return "2cd17ad2c322ae70ff5c149d138458de"; };

  };

}
#endif
