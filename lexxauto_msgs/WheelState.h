#ifndef _ROS_lexxauto_msgs_WheelState_h
#define _ROS_lexxauto_msgs_WheelState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class WheelState : public ros::Msg
  {
    public:
      typedef float _eff_input_type;
      _eff_input_type eff_input;
      typedef float _pos_state_type;
      _pos_state_type pos_state;
      typedef float _vel_state_type;
      _vel_state_type vel_state;
      typedef float _eff_state_type;
      _eff_state_type eff_state;

    WheelState():
      eff_input(0),
      pos_state(0),
      vel_state(0),
      eff_state(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += serializeAvrFloat64(outbuffer + offset, this->eff_input);
      offset += serializeAvrFloat64(outbuffer + offset, this->pos_state);
      offset += serializeAvrFloat64(outbuffer + offset, this->vel_state);
      offset += serializeAvrFloat64(outbuffer + offset, this->eff_state);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->eff_input));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->pos_state));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->vel_state));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->eff_state));
     return offset;
    }

    const char * getType(){ return "lexxauto_msgs/WheelState"; };
    const char * getMD5(){ return "99443b445525cf30c997e36848e9e34b"; };

  };

}
#endif
