#ifndef _ROS_lexxauto_msgs_GuidelessAGVGoalArray_h
#define _ROS_lexxauto_msgs_GuidelessAGVGoalArray_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "lexxauto_msgs/GuidelessAGVGoal.h"

namespace lexxauto_msgs
{

  class GuidelessAGVGoalArray : public ros::Msg
  {
    public:
      uint32_t goals_length;
      typedef lexxauto_msgs::GuidelessAGVGoal _goals_type;
      _goals_type st_goals;
      _goals_type * goals;

    GuidelessAGVGoalArray():
      goals_length(0), st_goals(), goals(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->goals_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->goals_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->goals_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->goals_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->goals_length);
      for( uint32_t i = 0; i < goals_length; i++){
      offset += this->goals[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t goals_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      goals_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      goals_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      goals_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->goals_length);
      if(goals_lengthT > goals_length)
        this->goals = (lexxauto_msgs::GuidelessAGVGoal*)realloc(this->goals, goals_lengthT * sizeof(lexxauto_msgs::GuidelessAGVGoal));
      goals_length = goals_lengthT;
      for( uint32_t i = 0; i < goals_length; i++){
      offset += this->st_goals.deserialize(inbuffer + offset);
        memcpy( &(this->goals[i]), &(this->st_goals), sizeof(lexxauto_msgs::GuidelessAGVGoal));
      }
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/GuidelessAGVGoalArray"; };
    virtual const char * getMD5() override { return "f3dd2d1b8aef134a7327add6a3a520ed"; };

  };

}
#endif
