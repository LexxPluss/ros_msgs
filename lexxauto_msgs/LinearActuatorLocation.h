#ifndef _ROS_SERVICE_LinearActuatorLocation_h
#define _ROS_SERVICE_LinearActuatorLocation_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/UInt8MultiArray.h"

namespace lexxauto_msgs
{

static const char LINEARACTUATORLOCATION[] = "lexxauto_msgs/LinearActuatorLocation";

  class LinearActuatorLocationRequest : public ros::Msg
  {
    public:
      typedef std_msgs::UInt8MultiArray _location_type;
      _location_type location;
      typedef std_msgs::UInt8MultiArray _power_type;
      _power_type power;

    LinearActuatorLocationRequest():
      location(),
      power()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->location.serialize(outbuffer + offset);
      offset += this->power.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->location.deserialize(inbuffer + offset);
      offset += this->power.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return LINEARACTUATORLOCATION; };
    virtual const char * getMD5() override { return "233717714d5d6ce08cc97deba21614e1"; };

  };

  class LinearActuatorLocationResponse : public ros::Msg
  {
    public:
      typedef bool _success_type;
      _success_type success;
      typedef std_msgs::UInt8MultiArray _detail_type;
      _detail_type detail;

    LinearActuatorLocationResponse():
      success(0),
      detail()
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
      offset += this->detail.serialize(outbuffer + offset);
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
      offset += this->detail.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return LINEARACTUATORLOCATION; };
    virtual const char * getMD5() override { return "db4cf476d2c9433365fff9e7dafab092"; };

  };

  class LinearActuatorLocation {
    public:
    typedef LinearActuatorLocationRequest Request;
    typedef LinearActuatorLocationResponse Response;
  };

}
#endif
