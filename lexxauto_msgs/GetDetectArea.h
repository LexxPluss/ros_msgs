#ifndef _ROS_SERVICE_GetDetectArea_h
#define _ROS_SERVICE_GetDetectArea_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

static const char GETDETECTAREA[] = "lexxauto_msgs/GetDetectArea";

  class GetDetectAreaRequest : public ros::Msg
  {
    public:
      typedef const char* _area_name_type;
      _area_name_type area_name;

    GetDetectAreaRequest():
      area_name("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      uint32_t length_area_name = strlen(this->area_name);
      varToArr(outbuffer + offset, length_area_name);
      offset += 4;
      memcpy(outbuffer + offset, this->area_name, length_area_name);
      offset += length_area_name;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t length_area_name;
      arrToVar(length_area_name, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_area_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_area_name-1]=0;
      this->area_name = (char *)(inbuffer + offset-1);
      offset += length_area_name;
     return offset;
    }

    virtual const char * getType() override { return GETDETECTAREA; };
    virtual const char * getMD5() override { return "a2d7ccf8e5de29f456d5e1df798f949b"; };

  };

  class GetDetectAreaResponse : public ros::Msg
  {
    public:
      typedef uint16_t _count_type;
      _count_type count;

    GetDetectAreaResponse():
      count(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->count >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->count >> (8 * 1)) & 0xFF;
      offset += sizeof(this->count);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->count =  ((uint16_t) (*(inbuffer + offset)));
      this->count |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->count);
     return offset;
    }

    virtual const char * getType() override { return GETDETECTAREA; };
    virtual const char * getMD5() override { return "fc61a3bbca4151f48faa118eae33fa03"; };

  };

  class GetDetectArea {
    public:
    typedef GetDetectAreaRequest Request;
    typedef GetDetectAreaResponse Response;
  };

}
#endif
