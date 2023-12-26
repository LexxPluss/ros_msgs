#ifndef _ROS_lexxauto_msgs_GoalLinkArray_h
#define _ROS_lexxauto_msgs_GoalLinkArray_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "lexxauto_msgs/GoalLink.h"

namespace lexxauto_msgs
{

  class GoalLinkArray : public ros::Msg
  {
    public:
      uint32_t goal_links_length;
      typedef lexxauto_msgs::GoalLink _goal_links_type;
      _goal_links_type st_goal_links;
      _goal_links_type * goal_links;

    GoalLinkArray():
      goal_links_length(0), st_goal_links(), goal_links(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->goal_links_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->goal_links_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->goal_links_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->goal_links_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->goal_links_length);
      for( uint32_t i = 0; i < goal_links_length; i++){
      offset += this->goal_links[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t goal_links_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      goal_links_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      goal_links_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      goal_links_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->goal_links_length);
      if(goal_links_lengthT > goal_links_length)
        this->goal_links = (lexxauto_msgs::GoalLink*)realloc(this->goal_links, goal_links_lengthT * sizeof(lexxauto_msgs::GoalLink));
      goal_links_length = goal_links_lengthT;
      for( uint32_t i = 0; i < goal_links_length; i++){
      offset += this->st_goal_links.deserialize(inbuffer + offset);
        memcpy( &(this->goal_links[i]), &(this->st_goal_links), sizeof(lexxauto_msgs::GoalLink));
      }
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/GoalLinkArray"; };
    virtual const char * getMD5() override { return "0097414b4896a5bcfbf29e5de13e2130"; };

  };

}
#endif
