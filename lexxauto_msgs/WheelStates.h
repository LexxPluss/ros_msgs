#ifndef _ROS_lexxauto_msgs_WheelStates_h
#define _ROS_lexxauto_msgs_WheelStates_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "lexxauto_msgs/WheelState.h"

namespace lexxauto_msgs
{

  class WheelStates : public ros::Msg
  {
    public:
      typedef lexxauto_msgs::WheelState _right_type;
      _right_type right;
      typedef lexxauto_msgs::WheelState _left_type;
      _left_type left;

    WheelStates():
      right(),
      left()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->right.serialize(outbuffer + offset);
      offset += this->left.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->right.deserialize(inbuffer + offset);
      offset += this->left.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "lexxauto_msgs/WheelStates"; };
    const char * getMD5(){ return "08fc97e0f413337bd7f82c2d7ff62067"; };

  };

}
#endif
