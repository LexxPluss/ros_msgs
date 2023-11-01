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
      typedef double _coriolis_l_type;
      _coriolis_l_type coriolis_l;
      typedef double _coriolis_r_type;
      _coriolis_r_type coriolis_r;
      typedef double _center_l_type;
      _center_l_type center_l;
      typedef double _center_r_type;
      _center_r_type center_r;
      typedef double _resistance_l_type;
      _resistance_l_type resistance_l;
      typedef double _resistance_r_type;
      _resistance_r_type resistance_r;
      typedef bool _is_static_l_type;
      _is_static_l_type is_static_l;
      typedef bool _is_static_r_type;
      _is_static_r_type is_static_r;
      typedef double _input_force_l_type;
      _input_force_l_type input_force_l;
      typedef double _input_force_r_type;
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

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->wheel_state_right.serialize(outbuffer + offset);
      offset += this->wheel_state_left.serialize(outbuffer + offset);
      offset += this->robot_state.serialize(outbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_coriolis_l;
      u_coriolis_l.real = this->coriolis_l;
      *(outbuffer + offset + 0) = (u_coriolis_l.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_coriolis_l.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_coriolis_l.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_coriolis_l.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_coriolis_l.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_coriolis_l.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_coriolis_l.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_coriolis_l.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->coriolis_l);
      union {
        double real;
        uint64_t base;
      } u_coriolis_r;
      u_coriolis_r.real = this->coriolis_r;
      *(outbuffer + offset + 0) = (u_coriolis_r.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_coriolis_r.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_coriolis_r.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_coriolis_r.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_coriolis_r.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_coriolis_r.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_coriolis_r.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_coriolis_r.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->coriolis_r);
      union {
        double real;
        uint64_t base;
      } u_center_l;
      u_center_l.real = this->center_l;
      *(outbuffer + offset + 0) = (u_center_l.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_center_l.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_center_l.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_center_l.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_center_l.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_center_l.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_center_l.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_center_l.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->center_l);
      union {
        double real;
        uint64_t base;
      } u_center_r;
      u_center_r.real = this->center_r;
      *(outbuffer + offset + 0) = (u_center_r.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_center_r.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_center_r.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_center_r.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_center_r.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_center_r.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_center_r.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_center_r.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->center_r);
      union {
        double real;
        uint64_t base;
      } u_resistance_l;
      u_resistance_l.real = this->resistance_l;
      *(outbuffer + offset + 0) = (u_resistance_l.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_resistance_l.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_resistance_l.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_resistance_l.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_resistance_l.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_resistance_l.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_resistance_l.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_resistance_l.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->resistance_l);
      union {
        double real;
        uint64_t base;
      } u_resistance_r;
      u_resistance_r.real = this->resistance_r;
      *(outbuffer + offset + 0) = (u_resistance_r.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_resistance_r.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_resistance_r.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_resistance_r.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_resistance_r.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_resistance_r.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_resistance_r.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_resistance_r.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->resistance_r);
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
      union {
        double real;
        uint64_t base;
      } u_input_force_l;
      u_input_force_l.real = this->input_force_l;
      *(outbuffer + offset + 0) = (u_input_force_l.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_input_force_l.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_input_force_l.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_input_force_l.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_input_force_l.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_input_force_l.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_input_force_l.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_input_force_l.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->input_force_l);
      union {
        double real;
        uint64_t base;
      } u_input_force_r;
      u_input_force_r.real = this->input_force_r;
      *(outbuffer + offset + 0) = (u_input_force_r.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_input_force_r.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_input_force_r.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_input_force_r.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_input_force_r.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_input_force_r.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_input_force_r.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_input_force_r.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->input_force_r);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->wheel_state_right.deserialize(inbuffer + offset);
      offset += this->wheel_state_left.deserialize(inbuffer + offset);
      offset += this->robot_state.deserialize(inbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_coriolis_l;
      u_coriolis_l.base = 0;
      u_coriolis_l.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_coriolis_l.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_coriolis_l.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_coriolis_l.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_coriolis_l.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_coriolis_l.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_coriolis_l.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_coriolis_l.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->coriolis_l = u_coriolis_l.real;
      offset += sizeof(this->coriolis_l);
      union {
        double real;
        uint64_t base;
      } u_coriolis_r;
      u_coriolis_r.base = 0;
      u_coriolis_r.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_coriolis_r.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_coriolis_r.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_coriolis_r.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_coriolis_r.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_coriolis_r.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_coriolis_r.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_coriolis_r.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->coriolis_r = u_coriolis_r.real;
      offset += sizeof(this->coriolis_r);
      union {
        double real;
        uint64_t base;
      } u_center_l;
      u_center_l.base = 0;
      u_center_l.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_center_l.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_center_l.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_center_l.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_center_l.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_center_l.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_center_l.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_center_l.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->center_l = u_center_l.real;
      offset += sizeof(this->center_l);
      union {
        double real;
        uint64_t base;
      } u_center_r;
      u_center_r.base = 0;
      u_center_r.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_center_r.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_center_r.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_center_r.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_center_r.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_center_r.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_center_r.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_center_r.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->center_r = u_center_r.real;
      offset += sizeof(this->center_r);
      union {
        double real;
        uint64_t base;
      } u_resistance_l;
      u_resistance_l.base = 0;
      u_resistance_l.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_resistance_l.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_resistance_l.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_resistance_l.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_resistance_l.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_resistance_l.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_resistance_l.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_resistance_l.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->resistance_l = u_resistance_l.real;
      offset += sizeof(this->resistance_l);
      union {
        double real;
        uint64_t base;
      } u_resistance_r;
      u_resistance_r.base = 0;
      u_resistance_r.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_resistance_r.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_resistance_r.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_resistance_r.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_resistance_r.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_resistance_r.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_resistance_r.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_resistance_r.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->resistance_r = u_resistance_r.real;
      offset += sizeof(this->resistance_r);
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
      union {
        double real;
        uint64_t base;
      } u_input_force_l;
      u_input_force_l.base = 0;
      u_input_force_l.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_input_force_l.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_input_force_l.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_input_force_l.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_input_force_l.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_input_force_l.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_input_force_l.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_input_force_l.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->input_force_l = u_input_force_l.real;
      offset += sizeof(this->input_force_l);
      union {
        double real;
        uint64_t base;
      } u_input_force_r;
      u_input_force_r.base = 0;
      u_input_force_r.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_input_force_r.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_input_force_r.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_input_force_r.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_input_force_r.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_input_force_r.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_input_force_r.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_input_force_r.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->input_force_r = u_input_force_r.real;
      offset += sizeof(this->input_force_r);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/TorqueSimInfo"; };
    virtual const char * getMD5() override { return "96ab28c9bfd3d7b2ac420a56f65b821f"; };

  };

}
#endif
