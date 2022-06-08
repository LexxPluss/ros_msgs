#ifndef _ROS_lexxauto_msgs_TorqueSimInfo_h
#define _ROS_lexxauto_msgs_TorqueSimInfo_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "lexxauto_msgs/WheelState.h"
#include "lexxauto_msgs/RobotState.h"

namespace lexxauto_msgs
{

  class TorqueSimInfo : public ros::Msg
  {
    public:
      typedef lexxauto_msgs::WheelState _wheel_state_right_type;
      _wheel_state_right_type wheel_state_right;
      typedef lexxauto_msgs::WheelState _wheel_state_left_type;
      _wheel_state_left_type wheel_state_left;
      typedef lexxauto_msgs::RobotState _robot_state_type;
      _robot_state_type robot_state;

    TorqueSimInfo():
      wheel_state_right(),
      wheel_state_left(),
      robot_state()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->wheel_state_right.serialize(outbuffer + offset);
      offset += this->wheel_state_left.serialize(outbuffer + offset);
      offset += this->robot_state.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->wheel_state_right.deserialize(inbuffer + offset);
      offset += this->wheel_state_left.deserialize(inbuffer + offset);
      offset += this->robot_state.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "lexxauto_msgs/TorqueSimInfo"; };
    const char * getMD5(){ return "ad228ffad01ef5ad94d19cc58d846593"; };

  };

}
#endif
