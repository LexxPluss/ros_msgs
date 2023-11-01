#ifndef _ROS_lexxauto_msgs_MotorTorque_h
#define _ROS_lexxauto_msgs_MotorTorque_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace lexxauto_msgs
{

  class MotorTorque : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef double _torque_right_type;
      _torque_right_type torque_right;
      typedef double _torque_left_type;
      _torque_left_type torque_left;

    MotorTorque():
      header(),
      torque_right(0),
      torque_left(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_torque_right;
      u_torque_right.real = this->torque_right;
      *(outbuffer + offset + 0) = (u_torque_right.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_torque_right.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_torque_right.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_torque_right.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_torque_right.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_torque_right.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_torque_right.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_torque_right.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->torque_right);
      union {
        double real;
        uint64_t base;
      } u_torque_left;
      u_torque_left.real = this->torque_left;
      *(outbuffer + offset + 0) = (u_torque_left.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_torque_left.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_torque_left.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_torque_left.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_torque_left.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_torque_left.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_torque_left.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_torque_left.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->torque_left);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_torque_right;
      u_torque_right.base = 0;
      u_torque_right.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_torque_right.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_torque_right.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_torque_right.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_torque_right.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_torque_right.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_torque_right.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_torque_right.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->torque_right = u_torque_right.real;
      offset += sizeof(this->torque_right);
      union {
        double real;
        uint64_t base;
      } u_torque_left;
      u_torque_left.base = 0;
      u_torque_left.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_torque_left.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_torque_left.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_torque_left.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_torque_left.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_torque_left.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_torque_left.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_torque_left.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->torque_left = u_torque_left.real;
      offset += sizeof(this->torque_left);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/MotorTorque"; };
    virtual const char * getMD5() override { return "158c6b7898104d490d30b44b6795ed08"; };

  };

}
#endif
