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
      typedef float _coriolis_l_type;
      _coriolis_l_type coriolis_l;
      typedef float _coriolis_r_type;
      _coriolis_r_type coriolis_r;
      typedef float _center_l_type;
      _center_l_type center_l;
      typedef float _center_r_type;
      _center_r_type center_r;
      typedef float _resistance_l_type;
      _resistance_l_type resistance_l;
      typedef float _resistance_r_type;
      _resistance_r_type resistance_r;
      typedef bool _is_static_l_type;
      _is_static_l_type is_static_l;
      typedef bool _is_static_r_type;
      _is_static_r_type is_static_r;
      typedef float _input_force_l_type;
      _input_force_l_type input_force_l;
      typedef float _input_force_r_type;
      _input_force_r_type input_force_r;

    TorqueSimInfo():
      wheel_state_right(),
      wheel_state_left(),
      robot_state(),
      coriolis_l(0),
      coriolis_r(0),
      center_l(0),
      center_r(0),
      resistance_l(0),
      resistance_r(0),
      is_static_l(0),
      is_static_r(0),
      input_force_l(0),
      input_force_r(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->wheel_state_right.serialize(outbuffer + offset);
      offset += this->wheel_state_left.serialize(outbuffer + offset);
      offset += this->robot_state.serialize(outbuffer + offset);
      offset += serializeAvrFloat64(outbuffer + offset, this->coriolis_l);
      offset += serializeAvrFloat64(outbuffer + offset, this->coriolis_r);
      offset += serializeAvrFloat64(outbuffer + offset, this->center_l);
      offset += serializeAvrFloat64(outbuffer + offset, this->center_r);
      offset += serializeAvrFloat64(outbuffer + offset, this->resistance_l);
      offset += serializeAvrFloat64(outbuffer + offset, this->resistance_r);
      union {
        bool real;
        uint8_t base;
      } u_is_static_l;
      u_is_static_l.real = this->is_static_l;
      *(outbuffer + offset + 0) = (u_is_static_l.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->is_static_l);
      union {
        bool real;
        uint8_t base;
      } u_is_static_r;
      u_is_static_r.real = this->is_static_r;
      *(outbuffer + offset + 0) = (u_is_static_r.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->is_static_r);
      offset += serializeAvrFloat64(outbuffer + offset, this->input_force_l);
      offset += serializeAvrFloat64(outbuffer + offset, this->input_force_r);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->wheel_state_right.deserialize(inbuffer + offset);
      offset += this->wheel_state_left.deserialize(inbuffer + offset);
      offset += this->robot_state.deserialize(inbuffer + offset);
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->coriolis_l));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->coriolis_r));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->center_l));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->center_r));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->resistance_l));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->resistance_r));
      union {
        bool real;
        uint8_t base;
      } u_is_static_l;
      u_is_static_l.base = 0;
      u_is_static_l.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->is_static_l = u_is_static_l.real;
      offset += sizeof(this->is_static_l);
      union {
        bool real;
        uint8_t base;
      } u_is_static_r;
      u_is_static_r.base = 0;
      u_is_static_r.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->is_static_r = u_is_static_r.real;
      offset += sizeof(this->is_static_r);
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->input_force_l));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->input_force_r));
     return offset;
    }

    const char * getType(){ return "lexxauto_msgs/TorqueSimInfo"; };
    const char * getMD5(){ return "96ab28c9bfd3d7b2ac420a56f65b821f"; };

  };

}
#endif
