#ifndef _ROS_scbdriver_Battery_h
#define _ROS_scbdriver_Battery_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "sensor_msgs/BatteryState.h"
#include "sensor_msgs/Temperature.h"

namespace scbdriver
{

  class Battery : public ros::Msg
  {
    public:
      typedef sensor_msgs::BatteryState _state_type;
      _state_type state;
      uint32_t temps_length;
      typedef sensor_msgs::Temperature _temps_type;
      _temps_type st_temps;
      _temps_type * temps;
      typedef uint8_t _state_of_health_type;
      _state_of_health_type state_of_health;

    Battery():
      state(),
      temps_length(0), st_temps(), temps(nullptr),
      state_of_health(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->state.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->temps_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->temps_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->temps_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->temps_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->temps_length);
      for( uint32_t i = 0; i < temps_length; i++){
      offset += this->temps[i].serialize(outbuffer + offset);
      }
      *(outbuffer + offset + 0) = (this->state_of_health >> (8 * 0)) & 0xFF;
      offset += sizeof(this->state_of_health);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->state.deserialize(inbuffer + offset);
      uint32_t temps_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      temps_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      temps_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      temps_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->temps_length);
      if(temps_lengthT > temps_length)
        this->temps = (sensor_msgs::Temperature*)realloc(this->temps, temps_lengthT * sizeof(sensor_msgs::Temperature));
      temps_length = temps_lengthT;
      for( uint32_t i = 0; i < temps_length; i++){
      offset += this->st_temps.deserialize(inbuffer + offset);
        memcpy( &(this->temps[i]), &(this->st_temps), sizeof(sensor_msgs::Temperature));
      }
      this->state_of_health =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->state_of_health);
     return offset;
    }

    virtual const char * getType() override { return "scbdriver/Battery"; };
    virtual const char * getMD5() override { return "613e648de502c9f11fd29aa4bc7d095e"; };

  };

}
#endif
