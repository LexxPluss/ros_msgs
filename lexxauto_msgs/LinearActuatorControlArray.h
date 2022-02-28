#ifndef _ROS_lexxauto_msgs_LinearActuatorControlArray_h
#define _ROS_lexxauto_msgs_LinearActuatorControlArray_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "lexxauto_msgs/LinearActuatorControl.h"

namespace lexxauto_msgs
{

  class LinearActuatorControlArray : public ros::Msg
  {
    public:
      uint32_t actuators_length;
      typedef lexxauto_msgs::LinearActuatorControl _actuators_type;
      _actuators_type st_actuators;
      _actuators_type * actuators;

    LinearActuatorControlArray():
      actuators_length(0), actuators(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
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

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t actuators_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      actuators_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      actuators_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      actuators_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->actuators_length);
      if(actuators_lengthT > actuators_length)
        this->actuators = (lexxauto_msgs::LinearActuatorControl*)realloc(this->actuators, actuators_lengthT * sizeof(lexxauto_msgs::LinearActuatorControl));
      actuators_length = actuators_lengthT;
      for( uint32_t i = 0; i < actuators_length; i++){
      offset += this->st_actuators.deserialize(inbuffer + offset);
        memcpy( &(this->actuators[i]), &(this->st_actuators), sizeof(lexxauto_msgs::LinearActuatorControl));
      }
     return offset;
    }

    const char * getType(){ return "lexxauto_msgs/LinearActuatorControlArray"; };
    const char * getMD5(){ return "9dd2f2a1c6947ac9a26290cf77454ae9"; };

  };

}
#endif
