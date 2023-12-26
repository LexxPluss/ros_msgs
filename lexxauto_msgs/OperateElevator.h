#ifndef _ROS_lexxauto_msgs_OperateElevator_h
#define _ROS_lexxauto_msgs_OperateElevator_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class OperateElevator : public ros::Msg
  {
    public:
      typedef const char* _action_name_type;
      _action_name_type action_name;
      typedef const char* _value_type;
      _value_type value;

    OperateElevator():
      action_name(""),
      value("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      uint32_t length_action_name = strlen(this->action_name);
      varToArr(outbuffer + offset, length_action_name);
      offset += 4;
      memcpy(outbuffer + offset, this->action_name, length_action_name);
      offset += length_action_name;
      uint32_t length_value = strlen(this->value);
      varToArr(outbuffer + offset, length_value);
      offset += 4;
      memcpy(outbuffer + offset, this->value, length_value);
      offset += length_value;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t length_action_name;
      arrToVar(length_action_name, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_action_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_action_name-1]=0;
      this->action_name = (char *)(inbuffer + offset-1);
      offset += length_action_name;
      uint32_t length_value;
      arrToVar(length_value, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_value; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_value-1]=0;
      this->value = (char *)(inbuffer + offset-1);
      offset += length_value;
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/OperateElevator"; };
    virtual const char * getMD5() override { return "ab4174e7a84da33453a7b302c5bc2704"; };

  };

}
#endif
