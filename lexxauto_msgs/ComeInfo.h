#ifndef _ROS_lexxauto_msgs_ComeInfo_h
#define _ROS_lexxauto_msgs_ComeInfo_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class ComeInfo : public ros::Msg
  {
    public:
      typedef const char* _target_type;
      _target_type target;
      typedef const char* _arrival_slot_type;
      _arrival_slot_type arrival_slot;

    ComeInfo():
      target(""),
      arrival_slot("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      uint32_t length_target = strlen(this->target);
      varToArr(outbuffer + offset, length_target);
      offset += 4;
      memcpy(outbuffer + offset, this->target, length_target);
      offset += length_target;
      uint32_t length_arrival_slot = strlen(this->arrival_slot);
      varToArr(outbuffer + offset, length_arrival_slot);
      offset += 4;
      memcpy(outbuffer + offset, this->arrival_slot, length_arrival_slot);
      offset += length_arrival_slot;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t length_target;
      arrToVar(length_target, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_target; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_target-1]=0;
      this->target = (char *)(inbuffer + offset-1);
      offset += length_target;
      uint32_t length_arrival_slot;
      arrToVar(length_arrival_slot, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_arrival_slot; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_arrival_slot-1]=0;
      this->arrival_slot = (char *)(inbuffer + offset-1);
      offset += length_arrival_slot;
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/ComeInfo"; };
    virtual const char * getMD5() override { return "61e9bcae106bb1fab02f7fcce79c99a0"; };

  };

}
#endif
