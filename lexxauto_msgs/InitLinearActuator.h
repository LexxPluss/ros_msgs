#ifndef _ROS_SERVICE_InitLinearActuator_h
#define _ROS_SERVICE_InitLinearActuator_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

static const char INITLINEARACTUATOR[] = "lexxauto_msgs/InitLinearActuator";

  class InitLinearActuatorRequest : public ros::Msg
  {
    public:

    InitLinearActuatorRequest()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
     return offset;
    }

    virtual const char * getType() override { return INITLINEARACTUATOR; };
    virtual const char * getMD5() override { return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class InitLinearActuatorResponse : public ros::Msg
  {
    public:
      typedef bool _success_type;
      _success_type success;

    InitLinearActuatorResponse():
      success(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_success;
      u_success.real = this->success;
      *(outbuffer + offset + 0) = (u_success.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->success);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_success;
      u_success.base = 0;
      u_success.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->success = u_success.real;
      offset += sizeof(this->success);
     return offset;
    }

    virtual const char * getType() override { return INITLINEARACTUATOR; };
    virtual const char * getMD5() override { return "358e233cde0c8a8bcfea4ce193f8fc15"; };

  };

  class InitLinearActuator {
    public:
    typedef InitLinearActuatorRequest Request;
    typedef InitLinearActuatorResponse Response;
  };

}
#endif
