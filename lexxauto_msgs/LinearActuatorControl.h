#ifndef _ROS_lexxauto_msgs_LinearActuatorControl_h
#define _ROS_lexxauto_msgs_LinearActuatorControl_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class LinearActuatorControl : public ros::Msg
  {
    public:
      typedef int8_t _direction_type;
      _direction_type direction;
      typedef uint8_t _power_type;
      _power_type power;

    LinearActuatorControl():
      direction(0),
      power(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int8_t real;
        uint8_t base;
      } u_direction;
      u_direction.real = this->direction;
      *(outbuffer + offset + 0) = (u_direction.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->direction);
      *(outbuffer + offset + 0) = (this->power >> (8 * 0)) & 0xFF;
      offset += sizeof(this->power);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int8_t real;
        uint8_t base;
      } u_direction;
      u_direction.base = 0;
      u_direction.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->direction = u_direction.real;
      offset += sizeof(this->direction);
      this->power =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->power);
     return offset;
    }

    const char * getType(){ return "lexxauto_msgs/LinearActuatorControl"; };
    const char * getMD5(){ return "07ae5d1c86d16578e22a86f4c57e0189"; };

  };

}
#endif
