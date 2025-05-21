#ifndef _ROS_lexxauto_msgs_WheelStates_h
#define _ROS_lexxauto_msgs_WheelStates_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "lexxauto_msgs/WheelState.h"

namespace lexxauto_msgs
{

  class WheelStates : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef lexxauto_msgs::WheelState _right_type;
      _right_type right;
      typedef lexxauto_msgs::WheelState _left_type;
      _left_type left;

    WheelStates():
      header(),
      right(),
      left()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->right.serialize(outbuffer + offset);
      offset += this->left.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->right.deserialize(inbuffer + offset);
      offset += this->left.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/WheelStates"; };
    virtual const char * getMD5() override { return "699c13fd47ff188ccd71a28b50b2a1ce"; };

  };

}
#endif
