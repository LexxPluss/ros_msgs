#ifndef _ROS_lexxauto_msgs_UpdateError_h
#define _ROS_lexxauto_msgs_UpdateError_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class UpdateError : public ros::Msg
  {
    public:
      typedef const char* _type_type;
      _type_type type;
      typedef bool _is_set_type;
      _is_set_type is_set;

    UpdateError():
      type(""),
      is_set(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      uint32_t length_type = strlen(this->type);
      varToArr(outbuffer + offset, length_type);
      offset += 4;
      memcpy(outbuffer + offset, this->type, length_type);
      offset += length_type;
      union {
        bool real;
        uint8_t base;
      } u_is_set;
      u_is_set.real = this->is_set;
      *(outbuffer + offset + 0) = (u_is_set.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->is_set);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t length_type;
      arrToVar(length_type, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_type; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_type-1]=0;
      this->type = (char *)(inbuffer + offset-1);
      offset += length_type;
      union {
        bool real;
        uint8_t base;
      } u_is_set;
      u_is_set.base = 0;
      u_is_set.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->is_set = u_is_set.real;
      offset += sizeof(this->is_set);
     return offset;
    }

    const char * getType(){ return "lexxauto_msgs/UpdateError"; };
    const char * getMD5(){ return "d2114010bf186d8281aec57dac529a31"; };

  };

}
#endif
