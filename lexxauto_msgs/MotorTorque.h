#ifndef _ROS_lexxauto_msgs_MotorTorque_h
#define _ROS_lexxauto_msgs_MotorTorque_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace lexxauto_msgs
{

  class MotorTorque : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef float _torque_right_type;
      _torque_right_type torque_right;
      typedef float _torque_left_type;
      _torque_left_type torque_left;

    MotorTorque():
      header(),
      torque_right(0),
      torque_left(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += serializeAvrFloat64(outbuffer + offset, this->torque_right);
      offset += serializeAvrFloat64(outbuffer + offset, this->torque_left);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->torque_right));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->torque_left));
     return offset;
    }

    const char * getType(){ return "lexxauto_msgs/MotorTorque"; };
    const char * getMD5(){ return "158c6b7898104d490d30b44b6795ed08"; };

  };

}
#endif
