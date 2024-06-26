#ifndef _ROS_scbdriver_LinearActuatorControlArray_h
#define _ROS_scbdriver_LinearActuatorControlArray_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "scbdriver/LinearActuatorControl.h"

namespace scbdriver
{

  class LinearActuatorControlArray : public ros::Msg
  {
    public:
      uint32_t actuators_length;
      typedef scbdriver::LinearActuatorControl _actuators_type;
      _actuators_type st_actuators;
      _actuators_type * actuators;

    LinearActuatorControlArray():
      actuators_length(0), st_actuators(), actuators(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->actuators_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->actuators_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->actuators_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->actuators_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->actuators_length);
      for( uint32_t i = 0; i < actuators_length; i++){
      offset += this->actuators[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t actuators_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      actuators_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      actuators_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      actuators_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->actuators_length);
      if(actuators_lengthT > actuators_length)
        this->actuators = (scbdriver::LinearActuatorControl*)realloc(this->actuators, actuators_lengthT * sizeof(scbdriver::LinearActuatorControl));
      actuators_length = actuators_lengthT;
      for( uint32_t i = 0; i < actuators_length; i++){
      offset += this->st_actuators.deserialize(inbuffer + offset);
        memcpy( &(this->actuators[i]), &(this->st_actuators), sizeof(scbdriver::LinearActuatorControl));
      }
     return offset;
    }

    virtual const char * getType() override { return "scbdriver/LinearActuatorControlArray"; };
    virtual const char * getMD5() override { return "9dd2f2a1c6947ac9a26290cf77454ae9"; };

  };

}
#endif
