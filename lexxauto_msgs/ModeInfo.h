#ifndef _ROS_lexxauto_msgs_ModeInfo_h
#define _ROS_lexxauto_msgs_ModeInfo_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class ModeInfo : public ros::Msg
  {
    public:
      typedef const char* _type_type;
      _type_type type;
      typedef const char* _description_type;
      _description_type description;
      typedef int32_t _estimated_sec_type;
      _estimated_sec_type estimated_sec;
      typedef uint32_t _elapsed_sec_type;
      _elapsed_sec_type elapsed_sec;

    ModeInfo():
      type(""),
      description(""),
      estimated_sec(0),
      elapsed_sec(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      uint32_t length_type = strlen(this->type);
      varToArr(outbuffer + offset, length_type);
      offset += 4;
      memcpy(outbuffer + offset, this->type, length_type);
      offset += length_type;
      uint32_t length_description = strlen(this->description);
      varToArr(outbuffer + offset, length_description);
      offset += 4;
      memcpy(outbuffer + offset, this->description, length_description);
      offset += length_description;
      union {
        int32_t real;
        uint32_t base;
      } u_estimated_sec;
      u_estimated_sec.real = this->estimated_sec;
      *(outbuffer + offset + 0) = (u_estimated_sec.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_estimated_sec.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_estimated_sec.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_estimated_sec.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->estimated_sec);
      *(outbuffer + offset + 0) = (this->elapsed_sec >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->elapsed_sec >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->elapsed_sec >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->elapsed_sec >> (8 * 3)) & 0xFF;
      offset += sizeof(this->elapsed_sec);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
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
      uint32_t length_description;
      arrToVar(length_description, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_description; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_description-1]=0;
      this->description = (char *)(inbuffer + offset-1);
      offset += length_description;
      union {
        int32_t real;
        uint32_t base;
      } u_estimated_sec;
      u_estimated_sec.base = 0;
      u_estimated_sec.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_estimated_sec.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_estimated_sec.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_estimated_sec.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->estimated_sec = u_estimated_sec.real;
      offset += sizeof(this->estimated_sec);
      this->elapsed_sec =  ((uint32_t) (*(inbuffer + offset)));
      this->elapsed_sec |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->elapsed_sec |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->elapsed_sec |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->elapsed_sec);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/ModeInfo"; };
    virtual const char * getMD5() override { return "8f5b88f99aeef8b57a109cdc812c0c58"; };

  };

}
#endif
