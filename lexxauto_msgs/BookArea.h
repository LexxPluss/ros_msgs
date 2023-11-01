#ifndef _ROS_SERVICE_BookArea_h
#define _ROS_SERVICE_BookArea_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

static const char BOOKAREA[] = "lexxauto_msgs/BookArea";

  class BookAreaRequest : public ros::Msg
  {
    public:
      typedef int32_t _sync_id_type;
      _sync_id_type sync_id;

    BookAreaRequest():
      sync_id(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_sync_id;
      u_sync_id.real = this->sync_id;
      *(outbuffer + offset + 0) = (u_sync_id.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_sync_id.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_sync_id.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_sync_id.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->sync_id);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_sync_id;
      u_sync_id.base = 0;
      u_sync_id.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_sync_id.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_sync_id.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_sync_id.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->sync_id = u_sync_id.real;
      offset += sizeof(this->sync_id);
     return offset;
    }

    virtual const char * getType() override { return BOOKAREA; };
    virtual const char * getMD5() override { return "111cdf31bb21a92caec984ab9f39ae90"; };

  };

  class BookAreaResponse : public ros::Msg
  {
    public:
      typedef const char* _result_type;
      _result_type result;

    BookAreaResponse():
      result("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      uint32_t length_result = strlen(this->result);
      varToArr(outbuffer + offset, length_result);
      offset += 4;
      memcpy(outbuffer + offset, this->result, length_result);
      offset += length_result;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t length_result;
      arrToVar(length_result, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_result; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_result-1]=0;
      this->result = (char *)(inbuffer + offset-1);
      offset += length_result;
     return offset;
    }

    virtual const char * getType() override { return BOOKAREA; };
    virtual const char * getMD5() override { return "c22f2a1ed8654a0b365f1bb3f7ff2c0f"; };

  };

  class BookArea {
    public:
    typedef BookAreaRequest Request;
    typedef BookAreaResponse Response;
  };

}
#endif
