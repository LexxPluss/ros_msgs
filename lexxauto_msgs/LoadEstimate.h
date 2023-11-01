#ifndef _ROS_SERVICE_LoadEstimate_h
#define _ROS_SERVICE_LoadEstimate_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

static const char LOADESTIMATE[] = "lexxauto_msgs/LoadEstimate";

  class LoadEstimateRequest : public ros::Msg
  {
    public:
      typedef bool _estimate_type;
      _estimate_type estimate;

    LoadEstimateRequest():
      estimate(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_estimate;
      u_estimate.real = this->estimate;
      *(outbuffer + offset + 0) = (u_estimate.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->estimate);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_estimate;
      u_estimate.base = 0;
      u_estimate.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->estimate = u_estimate.real;
      offset += sizeof(this->estimate);
     return offset;
    }

    virtual const char * getType() override { return LOADESTIMATE; };
    virtual const char * getMD5() override { return "21d6e6219bb24519cf50e59f608b3c8e"; };

  };

  class LoadEstimateResponse : public ros::Msg
  {
    public:
      typedef bool _success_type;
      _success_type success;

    LoadEstimateResponse():
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

    virtual const char * getType() override { return LOADESTIMATE; };
    virtual const char * getMD5() override { return "358e233cde0c8a8bcfea4ce193f8fc15"; };

  };

  class LoadEstimate {
    public:
    typedef LoadEstimateRequest Request;
    typedef LoadEstimateResponse Response;
  };

}
#endif
