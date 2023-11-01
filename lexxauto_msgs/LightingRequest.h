#ifndef _ROS_lexxauto_msgs_LightingRequest_h
#define _ROS_lexxauto_msgs_LightingRequest_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class LightingRequest : public ros::Msg
  {
    public:
      typedef const char* _pattern_type;
      _pattern_type pattern;
      typedef const char* _type_type;
      _type_type type;

    LightingRequest():
      pattern(""),
      type("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      uint32_t length_pattern = strlen(this->pattern);
      varToArr(outbuffer + offset, length_pattern);
      offset += 4;
      memcpy(outbuffer + offset, this->pattern, length_pattern);
      offset += length_pattern;
      uint32_t length_type = strlen(this->type);
      varToArr(outbuffer + offset, length_type);
      offset += 4;
      memcpy(outbuffer + offset, this->type, length_type);
      offset += length_type;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t length_pattern;
      arrToVar(length_pattern, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_pattern; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_pattern-1]=0;
      this->pattern = (char *)(inbuffer + offset-1);
      offset += length_pattern;
      uint32_t length_type;
      arrToVar(length_type, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_type; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_type-1]=0;
      this->type = (char *)(inbuffer + offset-1);
      offset += length_type;
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/LightingRequest"; };
    virtual const char * getMD5() override { return "33da5c156b45872ce299a1538c123a22"; };

  };

}
#endif
