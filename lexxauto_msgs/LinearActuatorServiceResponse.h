#ifndef _ROS_lexxauto_msgs_LinearActuatorServiceResponse_h
#define _ROS_lexxauto_msgs_LinearActuatorServiceResponse_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class LinearActuatorServiceResponse : public ros::Msg
  {
    public:
      typedef uint8_t _mode_type;
      _mode_type mode;
      typedef bool _success_type;
      _success_type success;
      uint32_t detail_length;
      typedef uint8_t _detail_type;
      _detail_type st_detail;
      _detail_type * detail;
      typedef uint8_t _counter_type;
      _counter_type counter;

    LinearActuatorServiceResponse():
      mode(0),
      success(0),
      detail_length(0), st_detail(), detail(nullptr),
      counter(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->mode >> (8 * 0)) & 0xFF;
      offset += sizeof(this->mode);
      union {
        bool real;
        uint8_t base;
      } u_success;
      u_success.real = this->success;
      *(outbuffer + offset + 0) = (u_success.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->success);
      *(outbuffer + offset + 0) = (this->detail_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->detail_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->detail_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->detail_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->detail_length);
      for( uint32_t i = 0; i < detail_length; i++){
      *(outbuffer + offset + 0) = (this->detail[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->detail[i]);
      }
      *(outbuffer + offset + 0) = (this->counter >> (8 * 0)) & 0xFF;
      offset += sizeof(this->counter);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->mode =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->mode);
      union {
        bool real;
        uint8_t base;
      } u_success;
      u_success.base = 0;
      u_success.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->success = u_success.real;
      offset += sizeof(this->success);
      uint32_t detail_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      detail_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      detail_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      detail_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->detail_length);
      if(detail_lengthT > detail_length)
        this->detail = (uint8_t*)realloc(this->detail, detail_lengthT * sizeof(uint8_t));
      detail_length = detail_lengthT;
      for( uint32_t i = 0; i < detail_length; i++){
      this->st_detail =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_detail);
        memcpy( &(this->detail[i]), &(this->st_detail), sizeof(uint8_t));
      }
      this->counter =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->counter);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/LinearActuatorServiceResponse"; };
    virtual const char * getMD5() override { return "253174cef58f9f210a3effb82b62fed1"; };

  };

}
#endif
