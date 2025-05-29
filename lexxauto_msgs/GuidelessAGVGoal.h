#ifndef _ROS_lexxauto_msgs_GuidelessAGVGoal_h
#define _ROS_lexxauto_msgs_GuidelessAGVGoal_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "geometry_msgs/Pose.h"

namespace lexxauto_msgs
{

  class GuidelessAGVGoal : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef int32_t _id_type;
      _id_type id;
      uint32_t poses_length;
      typedef geometry_msgs::Pose _poses_type;
      _poses_type st_poses;
      _poses_type * poses;
      typedef bool _allow_backward_type;
      _allow_backward_type allow_backward;

    GuidelessAGVGoal():
      header(),
      id(0),
      poses_length(0), st_poses(), poses(nullptr),
      allow_backward(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        int32_t real;
        uint32_t base;
      } u_id;
      u_id.real = this->id;
      *(outbuffer + offset + 0) = (u_id.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_id.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_id.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_id.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->id);
      *(outbuffer + offset + 0) = (this->poses_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->poses_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->poses_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->poses_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->poses_length);
      for( uint32_t i = 0; i < poses_length; i++){
      offset += this->poses[i].serialize(outbuffer + offset);
      }
      union {
        bool real;
        uint8_t base;
      } u_allow_backward;
      u_allow_backward.real = this->allow_backward;
      *(outbuffer + offset + 0) = (u_allow_backward.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->allow_backward);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        int32_t real;
        uint32_t base;
      } u_id;
      u_id.base = 0;
      u_id.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_id.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_id.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_id.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->id = u_id.real;
      offset += sizeof(this->id);
      uint32_t poses_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      poses_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      poses_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      poses_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->poses_length);
      if(poses_lengthT > poses_length)
        this->poses = (geometry_msgs::Pose*)realloc(this->poses, poses_lengthT * sizeof(geometry_msgs::Pose));
      poses_length = poses_lengthT;
      for( uint32_t i = 0; i < poses_length; i++){
      offset += this->st_poses.deserialize(inbuffer + offset);
        memcpy( &(this->poses[i]), &(this->st_poses), sizeof(geometry_msgs::Pose));
      }
      union {
        bool real;
        uint8_t base;
      } u_allow_backward;
      u_allow_backward.base = 0;
      u_allow_backward.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->allow_backward = u_allow_backward.real;
      offset += sizeof(this->allow_backward);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/GuidelessAGVGoal"; };
    virtual const char * getMD5() override { return "4bcde006e72dec5ccf6a17cf61ad065e"; };

  };

}
#endif
