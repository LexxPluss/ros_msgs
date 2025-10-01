#ifndef _ROS_lexxauto_msgs_VelocityControlParamTunerParam_h
#define _ROS_lexxauto_msgs_VelocityControlParamTunerParam_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class VelocityControlParamTunerParam : public ros::Msg
  {
    public:
      typedef double _max_acceleration_type;
      _max_acceleration_type max_acceleration;
      typedef double _max_deceleration_type;
      _max_deceleration_type max_deceleration;

    VelocityControlParamTunerParam():
      max_acceleration(0),
      max_deceleration(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_max_acceleration;
      u_max_acceleration.real = this->max_acceleration;
      *(outbuffer + offset + 0) = (u_max_acceleration.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_max_acceleration.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_max_acceleration.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_max_acceleration.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_max_acceleration.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_max_acceleration.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_max_acceleration.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_max_acceleration.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->max_acceleration);
      union {
        double real;
        uint64_t base;
      } u_max_deceleration;
      u_max_deceleration.real = this->max_deceleration;
      *(outbuffer + offset + 0) = (u_max_deceleration.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_max_deceleration.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_max_deceleration.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_max_deceleration.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_max_deceleration.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_max_deceleration.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_max_deceleration.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_max_deceleration.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->max_deceleration);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_max_acceleration;
      u_max_acceleration.base = 0;
      u_max_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_max_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_max_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_max_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_max_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_max_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_max_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_max_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->max_acceleration = u_max_acceleration.real;
      offset += sizeof(this->max_acceleration);
      union {
        double real;
        uint64_t base;
      } u_max_deceleration;
      u_max_deceleration.base = 0;
      u_max_deceleration.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_max_deceleration.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_max_deceleration.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_max_deceleration.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_max_deceleration.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_max_deceleration.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_max_deceleration.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_max_deceleration.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->max_deceleration = u_max_deceleration.real;
      offset += sizeof(this->max_deceleration);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/VelocityControlParamTunerParam"; };
    virtual const char * getMD5() override { return "6f0ef61e8b4b9b84a4401fd0c2aeacac"; };

  };

}
#endif
