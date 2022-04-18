#ifndef _ROS_lexxauto_msgs_ActuatorStatus_h
#define _ROS_lexxauto_msgs_ActuatorStatus_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "ros/time.h"

namespace lexxauto_msgs
{

  class ActuatorStatus : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef ros::Time _request_stamp_type;
      _request_stamp_type request_stamp;
      typedef uint8_t _actuator_num_type;
      _actuator_num_type actuator_num;
      typedef bool _move_complete_type;
      _move_complete_type move_complete;
      typedef bool _connect_type;
      _connect_type connect;
      uint32_t location_length;
      typedef uint8_t _location_type;
      _location_type st_location;
      _location_type * location;
      uint32_t position_length;
      typedef int8_t _position_type;
      _position_type st_position;
      _position_type * position;
      uint32_t power_length;
      typedef int8_t _power_type;
      _power_type st_power;
      _power_type * power;

    ActuatorStatus():
      header(),
      request_stamp(),
      actuator_num(0),
      move_complete(0),
      connect(0),
      location_length(0), location(NULL),
      position_length(0), position(NULL),
      power_length(0), power(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->request_stamp.sec >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->request_stamp.sec >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->request_stamp.sec >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->request_stamp.sec >> (8 * 3)) & 0xFF;
      offset += sizeof(this->request_stamp.sec);
      *(outbuffer + offset + 0) = (this->request_stamp.nsec >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->request_stamp.nsec >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->request_stamp.nsec >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->request_stamp.nsec >> (8 * 3)) & 0xFF;
      offset += sizeof(this->request_stamp.nsec);
      *(outbuffer + offset + 0) = (this->actuator_num >> (8 * 0)) & 0xFF;
      offset += sizeof(this->actuator_num);
      union {
        bool real;
        uint8_t base;
      } u_move_complete;
      u_move_complete.real = this->move_complete;
      *(outbuffer + offset + 0) = (u_move_complete.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->move_complete);
      union {
        bool real;
        uint8_t base;
      } u_connect;
      u_connect.real = this->connect;
      *(outbuffer + offset + 0) = (u_connect.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->connect);
      *(outbuffer + offset + 0) = (this->location_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->location_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->location_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->location_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->location_length);
      for( uint32_t i = 0; i < location_length; i++){
      *(outbuffer + offset + 0) = (this->location[i] >> (8 * 0)) & 0xFF;
      offset += sizeof(this->location[i]);
      }
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
      *(outbuffer + offset + 0) = (this->power_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->power_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->power_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->power_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->power_length);
      for( uint32_t i = 0; i < power_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_poweri;
      u_poweri.real = this->power[i];
      *(outbuffer + offset + 0) = (u_poweri.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->power[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      this->request_stamp.sec =  ((uint32_t) (*(inbuffer + offset)));
      this->request_stamp.sec |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->request_stamp.sec |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->request_stamp.sec |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->request_stamp.sec);
      this->request_stamp.nsec =  ((uint32_t) (*(inbuffer + offset)));
      this->request_stamp.nsec |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->request_stamp.nsec |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->request_stamp.nsec |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->request_stamp.nsec);
      this->actuator_num =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->actuator_num);
      union {
        bool real;
        uint8_t base;
      } u_move_complete;
      u_move_complete.base = 0;
      u_move_complete.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->move_complete = u_move_complete.real;
      offset += sizeof(this->move_complete);
      union {
        bool real;
        uint8_t base;
      } u_connect;
      u_connect.base = 0;
      u_connect.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->connect = u_connect.real;
      offset += sizeof(this->connect);
      uint32_t location_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      location_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      location_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      location_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->location_length);
      if(location_lengthT > location_length)
        this->location = (uint8_t*)realloc(this->location, location_lengthT * sizeof(uint8_t));
      location_length = location_lengthT;
      for( uint32_t i = 0; i < location_length; i++){
      this->st_location =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->st_location);
        memcpy( &(this->location[i]), &(this->st_location), sizeof(uint8_t));
      }
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
      uint32_t power_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      power_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      power_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      power_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->power_length);
      if(power_lengthT > power_length)
        this->power = (int8_t*)realloc(this->power, power_lengthT * sizeof(int8_t));
      power_length = power_lengthT;
      for( uint32_t i = 0; i < power_length; i++){
      union {
        int8_t real;
        uint8_t base;
      } u_st_power;
      u_st_power.base = 0;
      u_st_power.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->st_power = u_st_power.real;
      offset += sizeof(this->st_power);
        memcpy( &(this->power[i]), &(this->st_power), sizeof(int8_t));
      }
     return offset;
    }

    const char * getType(){ return "lexxauto_msgs/ActuatorStatus"; };
    const char * getMD5(){ return "b15198cf3625a339fedf1c3ff284febb"; };

  };

}
#endif
