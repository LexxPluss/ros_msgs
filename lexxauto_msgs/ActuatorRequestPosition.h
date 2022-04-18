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
      uint32_t position_length;
      typedef int8_t _position_type;
      _position_type st_position;
      _position_type * position;

    ActuatorRequestPosition():
      header(),
      actuator_num(0),
      position_length(0), position(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->actuator_num >> (8 * 0)) & 0xFF;
      offset += sizeof(this->actuator_num);
      *(outbuffer + offset + 0) = (this->position_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->position_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->position_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->position_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->position_length);
      for( uint32_t i = 0; i < position_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_positioni;
      u_positioni.real = this->position[i];
      *(outbuffer + offset + 0) = (u_positioni.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->position[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      this->actuator_num =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->actuator_num);
      uint32_t position_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      position_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      position_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      position_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->position_length);
      if(position_lengthT > position_length)
        this->position = (int8_t*)realloc(this->position, position_lengthT * sizeof(int8_t));
      position_length = position_lengthT;
      for( uint32_t i = 0; i < position_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_st_position;
      u_st_position.base = 0;
      u_st_position.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_position = u_st_position.real;
      offset += sizeof(this->st_position);
        memcpy( &(this->position[i]), &(this->st_position), sizeof(int8_t));
      }
     return offset;
    }

    const char * getType(){ return "lexxauto_msgs/ActuatorRequestPosition"; };
    const char * getMD5(){ return "c95d6691ed668bfcd55ca8dfa1f1dbb5"; };

  };

}
#endif
