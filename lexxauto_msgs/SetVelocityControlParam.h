#ifndef _ROS_SERVICE_SetVelocityControlParam_h
#define _ROS_SERVICE_SetVelocityControlParam_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

static const char SETVELOCITYCONTROLPARAM[] = "lexxauto_msgs/SetVelocityControlParam";

  class SetVelocityControlParamRequest : public ros::Msg
  {
    public:
      typedef uint8_t _param_type_type;
      _param_type_type param_type;
      typedef double _value_type;
      _value_type value;
      enum { PARAM_TYPE_ACCELERATION = 1   };
      enum { PARAM_TYPE_DECELERATION_SOLO = 2 };
      enum { PARAM_TYPE_DECELERATION_CART = 3 };
      enum { PARAM_TYPE_ACCELERATION_SOLO = 4 };
      enum { PARAM_TYPE_ACCELERATION_CART = 5 };

    SetVelocityControlParamRequest():
      param_type(0),
      value(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->param_type >> (8 * 0)) & 0xFF;
      offset += sizeof(this->param_type);
      union {
        double real;
        uint64_t base;
      } u_value;
      u_value.real = this->value;
      *(outbuffer + offset + 0) = (u_value.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_value.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_value.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_value.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_value.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_value.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_value.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_value.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->value);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->param_type =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->param_type);
      union {
        double real;
        uint64_t base;
      } u_value;
      u_value.base = 0;
      u_value.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_value.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_value.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_value.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_value.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_value.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_value.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_value.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->value = u_value.real;
      offset += sizeof(this->value);
     return offset;
    }

    virtual const char * getType() override { return SETVELOCITYCONTROLPARAM; };
    virtual const char * getMD5() override { return "e448d1b60d9dbd4640601d7c59eb85ab"; };

  };

  class SetVelocityControlParamResponse : public ros::Msg
  {
    public:
      typedef bool _success_type;
      _success_type success;

    SetVelocityControlParamResponse():
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

    virtual const char * getType() override { return SETVELOCITYCONTROLPARAM; };
    virtual const char * getMD5() override { return "358e233cde0c8a8bcfea4ce193f8fc15"; };

  };

  class SetVelocityControlParam {
    public:
    typedef SetVelocityControlParamRequest Request;
    typedef SetVelocityControlParamResponse Response;
  };

}
#endif
