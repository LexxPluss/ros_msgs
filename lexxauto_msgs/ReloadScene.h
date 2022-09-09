#ifndef _ROS_SERVICE_ReloadScene_h
#define _ROS_SERVICE_ReloadScene_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

static const char RELOADSCENE[] = "lexxauto_msgs/ReloadScene";

  class ReloadSceneRequest : public ros::Msg
  {
    public:

    ReloadSceneRequest()
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

    const char * getType(){ return RELOADSCENE; };
    const char * getMD5(){ return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class ReloadSceneResponse : public ros::Msg
  {
    public:
      typedef bool _result_type;
      _result_type result;

    ReloadSceneResponse():
      result(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_result;
      u_result.real = this->result;
      *(outbuffer + offset + 0) = (u_result.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->result);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_result;
      u_result.base = 0;
      u_result.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->result = u_result.real;
      offset += sizeof(this->result);
     return offset;
    }

    const char * getType(){ return RELOADSCENE; };
    const char * getMD5(){ return "eb13ac1f1354ccecb7941ee8fa2192e8"; };

  };

  class ReloadScene {
    public:
    typedef ReloadSceneRequest Request;
    typedef ReloadSceneResponse Response;
  };

}
#endif
