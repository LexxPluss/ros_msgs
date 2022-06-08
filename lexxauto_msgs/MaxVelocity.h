#ifndef _ROS_lexxauto_msgs_MaxVelocity_h
#define _ROS_lexxauto_msgs_MaxVelocity_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class MaxVelocity : public ros::Msg
  {
    public:
      typedef float _forward_linear_x_type;
      _forward_linear_x_type forward_linear_x;
      typedef float _backward_linear_x_type;
      _backward_linear_x_type backward_linear_x;
      typedef float _side_linear_x_type;
      _side_linear_x_type side_linear_x;
      typedef float _angular_z_type;
      _angular_z_type angular_z;

    MaxVelocity():
      forward_linear_x(0),
      backward_linear_x(0),
      side_linear_x(0),
      angular_z(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += serializeAvrFloat64(outbuffer + offset, this->forward_linear_x);
      offset += serializeAvrFloat64(outbuffer + offset, this->backward_linear_x);
      offset += serializeAvrFloat64(outbuffer + offset, this->side_linear_x);
      offset += serializeAvrFloat64(outbuffer + offset, this->angular_z);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->forward_linear_x));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->backward_linear_x));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->side_linear_x));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->angular_z));
     return offset;
    }

    const char * getType(){ return "lexxauto_msgs/MaxVelocity"; };
    const char * getMD5(){ return "832a00bfb36fc0a4b3a7f6a82365c9bf"; };

  };

}
#endif
