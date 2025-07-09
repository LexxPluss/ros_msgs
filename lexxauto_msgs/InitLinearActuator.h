#ifndef _ROS_SERVICE_InitLinearActuator_h
#define _ROS_SERVICE_InitLinearActuator_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Int8MultiArray.h"

namespace lexxauto_msgs
{

static const char INITLINEARACTUATOR[] = "lexxauto_msgs/InitLinearActuator";

  class InitLinearActuatorRequest : public ros::Msg
  {
    public:
      typedef std_msgs::Int8MultiArray _directions_type;
      _directions_type directions;
      enum { INIT_LOW =  -1 };
      enum { NO_INIT =  0 };
      enum { INIT_HIGH =  1 };

    InitLinearActuatorRequest():
      directions()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->directions.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->directions.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return INITLINEARACTUATOR; };
    virtual const char * getMD5() override { return "c409acec6c1290e3cc6088b72b0428b6"; };

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
