#ifndef _ROS_SERVICE_Sounds_h
#define _ROS_SERVICE_Sounds_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

static const char SOUNDS[] = "lexxauto_msgs/Sounds";

  class SoundsRequest : public ros::Msg
  {
    public:
      uint32_t patterns_length;
      typedef char* _patterns_type;
      _patterns_type st_patterns;
      _patterns_type * patterns;
      typedef bool _repeat_type;
      _repeat_type repeat;
      typedef bool _interrupt_type;
      _interrupt_type interrupt;

    SoundsRequest():
      patterns_length(0), st_patterns(), patterns(nullptr),
      repeat(0),
      interrupt(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->patterns_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->patterns_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->patterns_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->patterns_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->patterns_length);
      for( uint32_t i = 0; i < patterns_length; i++){
      uint32_t length_patternsi = strlen(this->patterns[i]);
      varToArr(outbuffer + offset, length_patternsi);
      offset += 4;
      memcpy(outbuffer + offset, this->patterns[i], length_patternsi);
      offset += length_patternsi;
      }
      union {
        bool real;
        uint8_t base;
      } u_repeat;
      u_repeat.real = this->repeat;
      *(outbuffer + offset + 0) = (u_repeat.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->repeat);
      union {
        bool real;
        uint8_t base;
      } u_interrupt;
      u_interrupt.real = this->interrupt;
      *(outbuffer + offset + 0) = (u_interrupt.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->interrupt);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t patterns_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      patterns_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      patterns_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      patterns_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->patterns_length);
      if(patterns_lengthT > patterns_length)
        this->patterns = (char**)realloc(this->patterns, patterns_lengthT * sizeof(char*));
      patterns_length = patterns_lengthT;
      for( uint32_t i = 0; i < patterns_length; i++){
      uint32_t length_st_patterns;
      arrToVar(length_st_patterns, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_patterns; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_patterns-1]=0;
      this->st_patterns = (char *)(inbuffer + offset-1);
      offset += length_st_patterns;
        memcpy( &(this->patterns[i]), &(this->st_patterns), sizeof(char*));
      }
      union {
        bool real;
        uint8_t base;
      } u_repeat;
      u_repeat.base = 0;
      u_repeat.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->repeat = u_repeat.real;
      offset += sizeof(this->repeat);
      union {
        bool real;
        uint8_t base;
      } u_interrupt;
      u_interrupt.base = 0;
      u_interrupt.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->interrupt = u_interrupt.real;
      offset += sizeof(this->interrupt);
     return offset;
    }

    virtual const char * getType() override { return SOUNDS; };
    virtual const char * getMD5() override { return "59d77da1265dfe7cdc76a1ccea9308a1"; };

  };

  class SoundsResponse : public ros::Msg
  {
    public:
      typedef bool _success_type;
      _success_type success;

    SoundsResponse():
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

    virtual const char * getType() override { return SOUNDS; };
    virtual const char * getMD5() override { return "358e233cde0c8a8bcfea4ce193f8fc15"; };

  };

  class Sounds {
    public:
    typedef SoundsRequest Request;
    typedef SoundsResponse Response;
  };

}
#endif
