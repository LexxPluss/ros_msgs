#ifndef _ROS_lexxauto_msgs_RobotState_h
#define _ROS_lexxauto_msgs_RobotState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class RobotState : public ros::Msg
  {
    public:
      typedef double _pos_x_type;
      _pos_x_type pos_x;
      typedef double _pos_y_type;
      _pos_y_type pos_y;
      typedef double _pos_z_type;
      _pos_z_type pos_z;
      typedef double _yaw_type;
      _yaw_type yaw;
      typedef double _vx_type;
      _vx_type vx;
      typedef double _wz_type;
      _wz_type wz;

    RobotState():
      pos_x(0),
      pos_y(0),
      pos_z(0),
      yaw(0),
      vx(0),
      wz(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_pos_x;
      u_pos_x.real = this->pos_x;
      *(outbuffer + offset + 0) = (u_pos_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pos_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pos_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pos_x.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pos_x.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pos_x.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pos_x.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pos_x.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pos_x);
      union {
        double real;
        uint64_t base;
      } u_pos_y;
      u_pos_y.real = this->pos_y;
      *(outbuffer + offset + 0) = (u_pos_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pos_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pos_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pos_y.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pos_y.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pos_y.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pos_y.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pos_y.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pos_y);
      union {
        double real;
        uint64_t base;
      } u_pos_z;
      u_pos_z.real = this->pos_z;
      *(outbuffer + offset + 0) = (u_pos_z.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pos_z.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pos_z.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pos_z.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pos_z.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pos_z.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pos_z.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pos_z.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pos_z);
      union {
        double real;
        uint64_t base;
      } u_yaw;
      u_yaw.real = this->yaw;
      *(outbuffer + offset + 0) = (u_yaw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_yaw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_yaw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_yaw.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_yaw.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_yaw.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_yaw.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_yaw.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->yaw);
      union {
        double real;
        uint64_t base;
      } u_vx;
      u_vx.real = this->vx;
      *(outbuffer + offset + 0) = (u_vx.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_vx.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_vx.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_vx.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_vx.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_vx.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_vx.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_vx.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->vx);
      union {
        double real;
        uint64_t base;
      } u_wz;
      u_wz.real = this->wz;
      *(outbuffer + offset + 0) = (u_wz.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_wz.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_wz.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_wz.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_wz.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_wz.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_wz.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_wz.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->wz);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_pos_x;
      u_pos_x.base = 0;
      u_pos_x.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pos_x.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pos_x.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pos_x.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_pos_x.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_pos_x.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_pos_x.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_pos_x.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->pos_x = u_pos_x.real;
      offset += sizeof(this->pos_x);
      union {
        double real;
        uint64_t base;
      } u_pos_y;
      u_pos_y.base = 0;
      u_pos_y.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pos_y.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pos_y.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pos_y.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_pos_y.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_pos_y.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_pos_y.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_pos_y.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->pos_y = u_pos_y.real;
      offset += sizeof(this->pos_y);
      union {
        double real;
        uint64_t base;
      } u_pos_z;
      u_pos_z.base = 0;
      u_pos_z.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pos_z.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pos_z.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pos_z.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_pos_z.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_pos_z.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_pos_z.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_pos_z.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->pos_z = u_pos_z.real;
      offset += sizeof(this->pos_z);
      union {
        double real;
        uint64_t base;
      } u_yaw;
      u_yaw.base = 0;
      u_yaw.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_yaw.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_yaw.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_yaw.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_yaw.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_yaw.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_yaw.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_yaw.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->yaw = u_yaw.real;
      offset += sizeof(this->yaw);
      union {
        double real;
        uint64_t base;
      } u_vx;
      u_vx.base = 0;
      u_vx.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_vx.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_vx.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_vx.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_vx.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_vx.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_vx.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_vx.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->vx = u_vx.real;
      offset += sizeof(this->vx);
      union {
        double real;
        uint64_t base;
      } u_wz;
      u_wz.base = 0;
      u_wz.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_wz.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_wz.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_wz.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_wz.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_wz.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_wz.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_wz.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->wz = u_wz.real;
      offset += sizeof(this->wz);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/RobotState"; };
    virtual const char * getMD5() override { return "510b841965c74a408745583080c8b5c5"; };

  };

}
#endif
