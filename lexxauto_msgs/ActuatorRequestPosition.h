#ifndef _ROS_lexxauto_msgs_ActuatorRequestPosition_h
#define _ROS_lexxauto_msgs_ActuatorRequestPosition_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace lexxauto_msgs
{

  class ActuatorRequestPosition : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef uint8_t _actuator_num_type;
      _actuator_num_type actuator_num;
      typedef int8_t _mode_type;
      _mode_type mode;
      typedef int8_t _is_connect_type;
      _is_connect_type is_connect;
      uint32_t value_length;
      typedef int32_t _value_type;
      _value_type st_value;
      _value_type * value;
      enum { MODE_INITIALIZE = -1 };
      enum { MODE_STOP = 0 };
      enum { MODE_POSITION = 1 };
      enum { MODE_LOCATION = 2 };
      enum { MODE_ENCODER = 3 };
      enum { MODE_CURRENT = 4 };
      enum { IS_CONNECT_AUTO = 0 };
      enum { IS_CONNECT_CONNECT = 1 };
      enum { IS_CONNECT_DISCONNECT = 2 };

    ActuatorRequestPosition():
      header(),
      actuator_num(0),
      mode(0),
      is_connect(0),
      value_length(0), st_value(), value(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->actuator_num >> (8 * 0)) & 0xFF;
      offset += sizeof(this->actuator_num);
      union {
        int8_t real;
        uint8_t base;
      } u_mode;
      u_mode.real = this->mode;
      *(outbuffer + offset + 0) = (u_mode.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->mode);
      union {
        int8_t real;
        uint8_t base;
      } u_is_connect;
      u_is_connect.real = this->is_connect;
      *(outbuffer + offset + 0) = (u_is_connect.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->is_connect);
      *(outbuffer + offset + 0) = (this->value_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->value_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->value_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->value_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->value_length);
      for( uint32_t i = 0; i < value_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_valuei;
      u_valuei.real = this->value[i];
      *(outbuffer + offset + 0) = (u_valuei.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_valuei.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_valuei.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_valuei.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->value[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      this->actuator_num =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->actuator_num);
      union {
        int8_t real;
        uint8_t base;
      } u_mode;
      u_mode.base = 0;
      u_mode.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->mode = u_mode.real;
      offset += sizeof(this->mode);
      union {
        int8_t real;
        uint8_t base;
      } u_is_connect;
      u_is_connect.base = 0;
      u_is_connect.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->is_connect = u_is_connect.real;
      offset += sizeof(this->is_connect);
      uint32_t value_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      value_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      value_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      value_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->value_length);
      if(value_lengthT > value_length)
        this->value = (int32_t*)realloc(this->value, value_lengthT * sizeof(int32_t));
      value_length = value_lengthT;
      for( uint32_t i = 0; i < value_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_value;
      u_st_value.base = 0;
      u_st_value.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_value.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_value.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_value.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_value = u_st_value.real;
      offset += sizeof(this->st_value);
        memcpy( &(this->value[i]), &(this->st_value), sizeof(int32_t));
      }
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/ActuatorRequestPosition"; };
    virtual const char * getMD5() override { return "d02f5c0a46e2ba61b02a0897110bda24"; };

  };

}
#endif
