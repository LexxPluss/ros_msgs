#ifndef _ROS_SERVICE_FindRobot_h
#define _ROS_SERVICE_FindRobot_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

static const char FINDROBOT[] = "lexxauto_msgs/FindRobot";

  class FindRobotRequest : public ros::Msg
  {
    public:
      typedef bool _enable_type;
      _enable_type enable;

    FindRobotRequest():
      enable(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_enable;
      u_enable.real = this->enable;
      *(outbuffer + offset + 0) = (u_enable.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->enable);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_enable;
      u_enable.base = 0;
      u_enable.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->enable = u_enable.real;
      offset += sizeof(this->enable);
     return offset;
    }

    const char * getType(){ return FINDROBOT; };
    const char * getMD5(){ return "8c1211af706069c994c06e00eb59ac9e"; };

  };

  class FindRobotResponse : public ros::Msg
  {
    public:

    FindRobotResponse()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
     return offset;
    }

    const char * getType(){ return FINDROBOT; };
    const char * getMD5(){ return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class FindRobot {
    public:
    typedef FindRobotRequest Request;
    typedef FindRobotResponse Response;
  };

}
#endif
