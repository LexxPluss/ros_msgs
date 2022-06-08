#ifndef _ROS_lexxauto_msgs_RobotState_h
#define _ROS_lexxauto_msgs_RobotState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class RobotState : public ros::Msg
  {
    public:
      typedef float _pos_x_type;
      _pos_x_type pos_x;
      typedef float _pos_y_type;
      _pos_y_type pos_y;
      typedef float _pos_z_type;
      _pos_z_type pos_z;
      typedef float _yaw_type;
      _yaw_type yaw;
      typedef float _vx_type;
      _vx_type vx;
      typedef float _wz_type;
      _wz_type wz;

    RobotState():
      pos_x(0),
      pos_y(0),
      pos_z(0),
      yaw(0),
      vx(0),
      wz(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += serializeAvrFloat64(outbuffer + offset, this->pos_x);
      offset += serializeAvrFloat64(outbuffer + offset, this->pos_y);
      offset += serializeAvrFloat64(outbuffer + offset, this->pos_z);
      offset += serializeAvrFloat64(outbuffer + offset, this->yaw);
      offset += serializeAvrFloat64(outbuffer + offset, this->vx);
      offset += serializeAvrFloat64(outbuffer + offset, this->wz);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->pos_x));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->pos_y));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->pos_z));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->yaw));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->vx));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->wz));
     return offset;
    }

    const char * getType(){ return "lexxauto_msgs/RobotState"; };
    const char * getMD5(){ return "510b841965c74a408745583080c8b5c5"; };

  };

}
#endif
