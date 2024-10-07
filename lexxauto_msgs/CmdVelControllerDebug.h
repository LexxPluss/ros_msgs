#ifndef _ROS_lexxauto_msgs_CmdVelControllerDebug_h
#define _ROS_lexxauto_msgs_CmdVelControllerDebug_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "geometry_msgs/Twist.h"
#include "lexxauto_msgs/CmdVelControllerSideState.h"

namespace lexxauto_msgs
{

  class CmdVelControllerDebug : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef geometry_msgs::Twist _cmd_vel_raw_type;
      _cmd_vel_raw_type cmd_vel_raw;
      typedef geometry_msgs::Twist _cmd_vel_filtered_type;
      _cmd_vel_filtered_type cmd_vel_filtered;
      typedef lexxauto_msgs::CmdVelControllerSideState _right_state_type;
      _right_state_type right_state;
      typedef lexxauto_msgs::CmdVelControllerSideState _left_state_type;
      _left_state_type left_state;

    CmdVelControllerDebug():
      header(),
      cmd_vel_raw(),
      cmd_vel_filtered(),
      right_state(),
      left_state()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->cmd_vel_raw.serialize(outbuffer + offset);
      offset += this->cmd_vel_filtered.serialize(outbuffer + offset);
      offset += this->right_state.serialize(outbuffer + offset);
      offset += this->left_state.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->cmd_vel_raw.deserialize(inbuffer + offset);
      offset += this->cmd_vel_filtered.deserialize(inbuffer + offset);
      offset += this->right_state.deserialize(inbuffer + offset);
      offset += this->left_state.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/CmdVelControllerDebug"; };
    virtual const char * getMD5() override { return "923b9fa67593bf8536935aac96986cc0"; };

  };

}
#endif
