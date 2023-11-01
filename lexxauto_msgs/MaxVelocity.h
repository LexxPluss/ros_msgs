#ifndef _ROS_lexxauto_msgs_MaxVelocity_h
#define _ROS_lexxauto_msgs_MaxVelocity_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class MaxVelocity : public ros::Msg
  {
    public:
      typedef double _forward_linear_x_type;
      _forward_linear_x_type forward_linear_x;
      typedef double _backward_linear_x_type;
      _backward_linear_x_type backward_linear_x;
      typedef double _side_linear_x_type;
      _side_linear_x_type side_linear_x;
      typedef double _angular_z_type;
      _angular_z_type angular_z;

    MaxVelocity():
      forward_linear_x(0),
      backward_linear_x(0),
      side_linear_x(0),
      angular_z(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_forward_linear_x;
      u_forward_linear_x.real = this->forward_linear_x;
      *(outbuffer + offset + 0) = (u_forward_linear_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_forward_linear_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_forward_linear_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_forward_linear_x.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_forward_linear_x.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_forward_linear_x.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_forward_linear_x.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_forward_linear_x.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->forward_linear_x);
      union {
        double real;
        uint64_t base;
      } u_backward_linear_x;
      u_backward_linear_x.real = this->backward_linear_x;
      *(outbuffer + offset + 0) = (u_backward_linear_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_backward_linear_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_backward_linear_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_backward_linear_x.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_backward_linear_x.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_backward_linear_x.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_backward_linear_x.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_backward_linear_x.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->backward_linear_x);
      union {
        double real;
        uint64_t base;
      } u_side_linear_x;
      u_side_linear_x.real = this->side_linear_x;
      *(outbuffer + offset + 0) = (u_side_linear_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_side_linear_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_side_linear_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_side_linear_x.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_side_linear_x.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_side_linear_x.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_side_linear_x.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_side_linear_x.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->side_linear_x);
      union {
        double real;
        uint64_t base;
      } u_angular_z;
      u_angular_z.real = this->angular_z;
      *(outbuffer + offset + 0) = (u_angular_z.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_angular_z.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_angular_z.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_angular_z.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_angular_z.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_angular_z.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_angular_z.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_angular_z.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->angular_z);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_forward_linear_x;
      u_forward_linear_x.base = 0;
      u_forward_linear_x.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_forward_linear_x.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_forward_linear_x.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_forward_linear_x.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_forward_linear_x.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_forward_linear_x.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_forward_linear_x.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_forward_linear_x.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->forward_linear_x = u_forward_linear_x.real;
      offset += sizeof(this->forward_linear_x);
      union {
        double real;
        uint64_t base;
      } u_backward_linear_x;
      u_backward_linear_x.base = 0;
      u_backward_linear_x.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_backward_linear_x.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_backward_linear_x.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_backward_linear_x.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_backward_linear_x.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_backward_linear_x.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_backward_linear_x.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_backward_linear_x.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->backward_linear_x = u_backward_linear_x.real;
      offset += sizeof(this->backward_linear_x);
      union {
        double real;
        uint64_t base;
      } u_side_linear_x;
      u_side_linear_x.base = 0;
      u_side_linear_x.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_side_linear_x.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_side_linear_x.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_side_linear_x.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_side_linear_x.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_side_linear_x.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_side_linear_x.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_side_linear_x.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->side_linear_x = u_side_linear_x.real;
      offset += sizeof(this->side_linear_x);
      union {
        double real;
        uint64_t base;
      } u_angular_z;
      u_angular_z.base = 0;
      u_angular_z.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_angular_z.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_angular_z.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_angular_z.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_angular_z.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_angular_z.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_angular_z.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_angular_z.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->angular_z = u_angular_z.real;
      offset += sizeof(this->angular_z);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/MaxVelocity"; };
    virtual const char * getMD5() override { return "832a00bfb36fc0a4b3a7f6a82365c9bf"; };

  };

}
#endif
