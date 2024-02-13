#ifndef _ROS_lexxauto_msgs_DiffDriveEffortControllerDebug_h
#define _ROS_lexxauto_msgs_DiffDriveEffortControllerDebug_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "geometry_msgs/Twist.h"
#include "lexxauto_msgs/DiffDriveEffortControllerSideState.h"

namespace lexxauto_msgs
{

  class DiffDriveEffortControllerDebug : public ros::Msg
  {
    public:
      typedef geometry_msgs::Twist _cmd_vel_raw_type;
      _cmd_vel_raw_type cmd_vel_raw;
      typedef geometry_msgs::Twist _cmd_vel_filtered_type;
      _cmd_vel_filtered_type cmd_vel_filtered;
      typedef geometry_msgs::Twist _cmd_vel_scaled_type;
      _cmd_vel_scaled_type cmd_vel_scaled;
      typedef geometry_msgs::Twist _measured_twist_filtered_type;
      _measured_twist_filtered_type measured_twist_filtered;
      typedef lexxauto_msgs::DiffDriveEffortControllerSideState _right_state_type;
      _right_state_type right_state;
      typedef lexxauto_msgs::DiffDriveEffortControllerSideState _left_state_type;
      _left_state_type left_state;
      typedef double _adaptive_p_gain_type;
      _adaptive_p_gain_type adaptive_p_gain;
      typedef double _adaptive_ff_type;
      _adaptive_ff_type adaptive_ff;
      typedef double _adaptive_static_ff_type;
      _adaptive_static_ff_type adaptive_static_ff;
      typedef double _adaptive_wz_scale_type;
      _adaptive_wz_scale_type adaptive_wz_scale;
      typedef double _adaptive_max_torque_type;
      _adaptive_max_torque_type adaptive_max_torque;
      typedef double _adaptive_min_torque_type;
      _adaptive_min_torque_type adaptive_min_torque;
      typedef double _max_torque_type;
      _max_torque_type max_torque;
      typedef double _min_torque_type;
      _min_torque_type min_torque;
      typedef double _wz_scale_type;
      _wz_scale_type wz_scale;
      typedef double _p_gain_type;
      _p_gain_type p_gain;
      typedef double _i_gain_type;
      _i_gain_type i_gain;
      typedef double _i_max_type;
      _i_max_type i_max;
      typedef double _d_gain_type;
      _d_gain_type d_gain;
      typedef double _ff_type;
      _ff_type ff;
      typedef double _static_fric_type;
      _static_fric_type static_fric;

    DiffDriveEffortControllerDebug():
      cmd_vel_raw(),
      cmd_vel_filtered(),
      cmd_vel_scaled(),
      measured_twist_filtered(),
      right_state(),
      left_state(),
      adaptive_p_gain(0),
      adaptive_ff(0),
      adaptive_static_ff(0),
      adaptive_wz_scale(0),
      adaptive_max_torque(0),
      adaptive_min_torque(0),
      max_torque(0),
      min_torque(0),
      wz_scale(0),
      p_gain(0),
      i_gain(0),
      i_max(0),
      d_gain(0),
      ff(0),
      static_fric(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->cmd_vel_raw.serialize(outbuffer + offset);
      offset += this->cmd_vel_filtered.serialize(outbuffer + offset);
      offset += this->cmd_vel_scaled.serialize(outbuffer + offset);
      offset += this->measured_twist_filtered.serialize(outbuffer + offset);
      offset += this->right_state.serialize(outbuffer + offset);
      offset += this->left_state.serialize(outbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_adaptive_p_gain;
      u_adaptive_p_gain.real = this->adaptive_p_gain;
      *(outbuffer + offset + 0) = (u_adaptive_p_gain.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_adaptive_p_gain.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_adaptive_p_gain.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_adaptive_p_gain.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_adaptive_p_gain.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_adaptive_p_gain.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_adaptive_p_gain.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_adaptive_p_gain.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->adaptive_p_gain);
      union {
        double real;
        uint64_t base;
      } u_adaptive_ff;
      u_adaptive_ff.real = this->adaptive_ff;
      *(outbuffer + offset + 0) = (u_adaptive_ff.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_adaptive_ff.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_adaptive_ff.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_adaptive_ff.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_adaptive_ff.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_adaptive_ff.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_adaptive_ff.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_adaptive_ff.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->adaptive_ff);
      union {
        double real;
        uint64_t base;
      } u_adaptive_static_ff;
      u_adaptive_static_ff.real = this->adaptive_static_ff;
      *(outbuffer + offset + 0) = (u_adaptive_static_ff.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_adaptive_static_ff.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_adaptive_static_ff.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_adaptive_static_ff.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_adaptive_static_ff.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_adaptive_static_ff.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_adaptive_static_ff.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_adaptive_static_ff.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->adaptive_static_ff);
      union {
        double real;
        uint64_t base;
      } u_adaptive_wz_scale;
      u_adaptive_wz_scale.real = this->adaptive_wz_scale;
      *(outbuffer + offset + 0) = (u_adaptive_wz_scale.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_adaptive_wz_scale.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_adaptive_wz_scale.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_adaptive_wz_scale.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_adaptive_wz_scale.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_adaptive_wz_scale.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_adaptive_wz_scale.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_adaptive_wz_scale.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->adaptive_wz_scale);
      union {
        double real;
        uint64_t base;
      } u_adaptive_max_torque;
      u_adaptive_max_torque.real = this->adaptive_max_torque;
      *(outbuffer + offset + 0) = (u_adaptive_max_torque.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_adaptive_max_torque.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_adaptive_max_torque.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_adaptive_max_torque.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_adaptive_max_torque.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_adaptive_max_torque.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_adaptive_max_torque.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_adaptive_max_torque.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->adaptive_max_torque);
      union {
        double real;
        uint64_t base;
      } u_adaptive_min_torque;
      u_adaptive_min_torque.real = this->adaptive_min_torque;
      *(outbuffer + offset + 0) = (u_adaptive_min_torque.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_adaptive_min_torque.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_adaptive_min_torque.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_adaptive_min_torque.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_adaptive_min_torque.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_adaptive_min_torque.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_adaptive_min_torque.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_adaptive_min_torque.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->adaptive_min_torque);
      union {
        double real;
        uint64_t base;
      } u_max_torque;
      u_max_torque.real = this->max_torque;
      *(outbuffer + offset + 0) = (u_max_torque.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_max_torque.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_max_torque.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_max_torque.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_max_torque.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_max_torque.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_max_torque.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_max_torque.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->max_torque);
      union {
        double real;
        uint64_t base;
      } u_min_torque;
      u_min_torque.real = this->min_torque;
      *(outbuffer + offset + 0) = (u_min_torque.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_min_torque.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_min_torque.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_min_torque.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_min_torque.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_min_torque.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_min_torque.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_min_torque.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->min_torque);
      union {
        double real;
        uint64_t base;
      } u_wz_scale;
      u_wz_scale.real = this->wz_scale;
      *(outbuffer + offset + 0) = (u_wz_scale.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_wz_scale.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_wz_scale.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_wz_scale.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_wz_scale.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_wz_scale.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_wz_scale.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_wz_scale.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->wz_scale);
      union {
        double real;
        uint64_t base;
      } u_p_gain;
      u_p_gain.real = this->p_gain;
      *(outbuffer + offset + 0) = (u_p_gain.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_p_gain.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_p_gain.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_p_gain.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_p_gain.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_p_gain.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_p_gain.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_p_gain.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->p_gain);
      union {
        double real;
        uint64_t base;
      } u_i_gain;
      u_i_gain.real = this->i_gain;
      *(outbuffer + offset + 0) = (u_i_gain.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_i_gain.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_i_gain.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_i_gain.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_i_gain.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_i_gain.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_i_gain.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_i_gain.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->i_gain);
      union {
        double real;
        uint64_t base;
      } u_i_max;
      u_i_max.real = this->i_max;
      *(outbuffer + offset + 0) = (u_i_max.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_i_max.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_i_max.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_i_max.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_i_max.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_i_max.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_i_max.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_i_max.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->i_max);
      union {
        double real;
        uint64_t base;
      } u_d_gain;
      u_d_gain.real = this->d_gain;
      *(outbuffer + offset + 0) = (u_d_gain.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_d_gain.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_d_gain.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_d_gain.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_d_gain.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_d_gain.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_d_gain.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_d_gain.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->d_gain);
      union {
        double real;
        uint64_t base;
      } u_ff;
      u_ff.real = this->ff;
      *(outbuffer + offset + 0) = (u_ff.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ff.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ff.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ff.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_ff.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_ff.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_ff.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_ff.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->ff);
      union {
        double real;
        uint64_t base;
      } u_static_fric;
      u_static_fric.real = this->static_fric;
      *(outbuffer + offset + 0) = (u_static_fric.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_static_fric.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_static_fric.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_static_fric.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_static_fric.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_static_fric.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_static_fric.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_static_fric.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->static_fric);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->cmd_vel_raw.deserialize(inbuffer + offset);
      offset += this->cmd_vel_filtered.deserialize(inbuffer + offset);
      offset += this->cmd_vel_scaled.deserialize(inbuffer + offset);
      offset += this->measured_twist_filtered.deserialize(inbuffer + offset);
      offset += this->right_state.deserialize(inbuffer + offset);
      offset += this->left_state.deserialize(inbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_adaptive_p_gain;
      u_adaptive_p_gain.base = 0;
      u_adaptive_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_adaptive_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_adaptive_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_adaptive_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_adaptive_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_adaptive_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_adaptive_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_adaptive_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->adaptive_p_gain = u_adaptive_p_gain.real;
      offset += sizeof(this->adaptive_p_gain);
      union {
        double real;
        uint64_t base;
      } u_adaptive_ff;
      u_adaptive_ff.base = 0;
      u_adaptive_ff.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_adaptive_ff.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_adaptive_ff.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_adaptive_ff.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_adaptive_ff.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_adaptive_ff.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_adaptive_ff.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_adaptive_ff.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->adaptive_ff = u_adaptive_ff.real;
      offset += sizeof(this->adaptive_ff);
      union {
        double real;
        uint64_t base;
      } u_adaptive_static_ff;
      u_adaptive_static_ff.base = 0;
      u_adaptive_static_ff.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_adaptive_static_ff.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_adaptive_static_ff.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_adaptive_static_ff.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_adaptive_static_ff.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_adaptive_static_ff.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_adaptive_static_ff.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_adaptive_static_ff.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->adaptive_static_ff = u_adaptive_static_ff.real;
      offset += sizeof(this->adaptive_static_ff);
      union {
        double real;
        uint64_t base;
      } u_adaptive_wz_scale;
      u_adaptive_wz_scale.base = 0;
      u_adaptive_wz_scale.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_adaptive_wz_scale.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_adaptive_wz_scale.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_adaptive_wz_scale.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_adaptive_wz_scale.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_adaptive_wz_scale.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_adaptive_wz_scale.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_adaptive_wz_scale.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->adaptive_wz_scale = u_adaptive_wz_scale.real;
      offset += sizeof(this->adaptive_wz_scale);
      union {
        double real;
        uint64_t base;
      } u_adaptive_max_torque;
      u_adaptive_max_torque.base = 0;
      u_adaptive_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_adaptive_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_adaptive_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_adaptive_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_adaptive_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_adaptive_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_adaptive_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_adaptive_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->adaptive_max_torque = u_adaptive_max_torque.real;
      offset += sizeof(this->adaptive_max_torque);
      union {
        double real;
        uint64_t base;
      } u_adaptive_min_torque;
      u_adaptive_min_torque.base = 0;
      u_adaptive_min_torque.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_adaptive_min_torque.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_adaptive_min_torque.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_adaptive_min_torque.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_adaptive_min_torque.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_adaptive_min_torque.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_adaptive_min_torque.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_adaptive_min_torque.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->adaptive_min_torque = u_adaptive_min_torque.real;
      offset += sizeof(this->adaptive_min_torque);
      union {
        double real;
        uint64_t base;
      } u_max_torque;
      u_max_torque.base = 0;
      u_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->max_torque = u_max_torque.real;
      offset += sizeof(this->max_torque);
      union {
        double real;
        uint64_t base;
      } u_min_torque;
      u_min_torque.base = 0;
      u_min_torque.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_min_torque.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_min_torque.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_min_torque.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_min_torque.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_min_torque.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_min_torque.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_min_torque.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->min_torque = u_min_torque.real;
      offset += sizeof(this->min_torque);
      union {
        double real;
        uint64_t base;
      } u_wz_scale;
      u_wz_scale.base = 0;
      u_wz_scale.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_wz_scale.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_wz_scale.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_wz_scale.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_wz_scale.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_wz_scale.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_wz_scale.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_wz_scale.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->wz_scale = u_wz_scale.real;
      offset += sizeof(this->wz_scale);
      union {
        double real;
        uint64_t base;
      } u_p_gain;
      u_p_gain.base = 0;
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->p_gain = u_p_gain.real;
      offset += sizeof(this->p_gain);
      union {
        double real;
        uint64_t base;
      } u_i_gain;
      u_i_gain.base = 0;
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->i_gain = u_i_gain.real;
      offset += sizeof(this->i_gain);
      union {
        double real;
        uint64_t base;
      } u_i_max;
      u_i_max.base = 0;
      u_i_max.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_i_max.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_i_max.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_i_max.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_i_max.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_i_max.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_i_max.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_i_max.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->i_max = u_i_max.real;
      offset += sizeof(this->i_max);
      union {
        double real;
        uint64_t base;
      } u_d_gain;
      u_d_gain.base = 0;
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->d_gain = u_d_gain.real;
      offset += sizeof(this->d_gain);
      union {
        double real;
        uint64_t base;
      } u_ff;
      u_ff.base = 0;
      u_ff.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ff.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ff.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ff.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_ff.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_ff.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_ff.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_ff.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->ff = u_ff.real;
      offset += sizeof(this->ff);
      union {
        double real;
        uint64_t base;
      } u_static_fric;
      u_static_fric.base = 0;
      u_static_fric.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_static_fric.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_static_fric.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_static_fric.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_static_fric.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_static_fric.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_static_fric.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_static_fric.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->static_fric = u_static_fric.real;
      offset += sizeof(this->static_fric);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/DiffDriveEffortControllerDebug"; };
    virtual const char * getMD5() override { return "2430f1cdf6af8dc5c8e24ee6504cdddf"; };

  };

}
#endif
