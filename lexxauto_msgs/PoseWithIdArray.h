#ifndef _ROS_lexxauto_msgs_PoseWithIdArray_h
#define _ROS_lexxauto_msgs_PoseWithIdArray_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "lexxauto_msgs/PoseWithId.h"

namespace lexxauto_msgs
{

  class PoseWithIdArray : public ros::Msg
  {
    public:
      uint32_t poses_length;
      typedef lexxauto_msgs::PoseWithId _poses_type;
      _poses_type st_poses;
      _poses_type * poses;

    PoseWithIdArray():
      poses_length(0), st_poses(), poses(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->poses_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->poses_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->poses_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->poses_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->poses_length);
      for( uint32_t i = 0; i < poses_length; i++){
      offset += this->poses[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t poses_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      poses_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      poses_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      poses_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->poses_length);
      if(poses_lengthT > poses_length)
        this->poses = (lexxauto_msgs::PoseWithId*)realloc(this->poses, poses_lengthT * sizeof(lexxauto_msgs::PoseWithId));
      poses_length = poses_lengthT;
      for( uint32_t i = 0; i < poses_length; i++){
      offset += this->st_poses.deserialize(inbuffer + offset);
        memcpy( &(this->poses[i]), &(this->st_poses), sizeof(lexxauto_msgs::PoseWithId));
      }
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/PoseWithIdArray"; };
    virtual const char * getMD5() override { return "de4081d7deefbbd3407b4bbcc69effb3"; };

  };

}
#endif
