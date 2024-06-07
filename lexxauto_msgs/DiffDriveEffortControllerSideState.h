#ifndef _ROS_lexxauto_msgs_DiffDriveEffortControllerSideState_h
#define _ROS_lexxauto_msgs_DiffDriveEffortControllerSideState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class DiffDriveEffortControllerSideState : public ros::Msg
  {
    public:
      typedef double _measured_timestamp_type;
      _measured_timestamp_type measured_timestamp;
      typedef double _measured_vel_raw_type;
      _measured_vel_raw_type measured_vel_raw;
      typedef double _measured_vel_filtered_type;
      _measured_vel_filtered_type measured_vel_filtered;
      typedef double _measured_eff_type;
      _measured_eff_type measured_eff;
      typedef double _measured_eff_nm_type;
      _measured_eff_nm_type measured_eff_nm;
      typedef double _measured_vel_for_pid_type;
      _measured_vel_for_pid_type measured_vel_for_pid;
      typedef double _cmd_vel_raw_type;
      _cmd_vel_raw_type cmd_vel_raw;
      typedef double _cmd_vel_filtered_type;
      _cmd_vel_filtered_type cmd_vel_filtered;
      typedef double _cmd_vel_scaled_type;
      _cmd_vel_scaled_type cmd_vel_scaled;
      typedef double _cmd_vel_for_pid_type;
      _cmd_vel_for_pid_type cmd_vel_for_pid;
      typedef double _p_eff_type;
      _p_eff_type p_eff;
      typedef double _i_eff_type;
      _i_eff_type i_eff;
      typedef double _d_eff_type;
      _d_eff_type d_eff;
      typedef double _ff_eff_type;
      _ff_eff_type ff_eff;
      typedef double _ff_static_fric_eff_type;
      _ff_static_fric_eff_type ff_static_fric_eff;
      typedef double _raw_cmd_eff_type;
      _raw_cmd_eff_type raw_cmd_eff;
      typedef double _cmd_eff_type;
      _cmd_eff_type cmd_eff;
      typedef double _cmd_eff_nm_type;
      _cmd_eff_nm_type cmd_eff_nm;

    DiffDriveEffortControllerSideState():
      measured_timestamp(0),
      measured_vel_raw(0),
      measured_vel_filtered(0),
      measured_eff(0),
      measured_eff_nm(0),
      measured_vel_for_pid(0),
      cmd_vel_raw(0),
      cmd_vel_filtered(0),
      cmd_vel_scaled(0),
      cmd_vel_for_pid(0),
      p_eff(0),
      i_eff(0),
      d_eff(0),
      ff_eff(0),
      ff_static_fric_eff(0),
      raw_cmd_eff(0),
      cmd_eff(0),
      cmd_eff_nm(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_measured_timestamp;
      u_measured_timestamp.real = this->measured_timestamp;
      *(outbuffer + offset + 0) = (u_measured_timestamp.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_measured_timestamp.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_measured_timestamp.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_measured_timestamp.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_measured_timestamp.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_measured_timestamp.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_measured_timestamp.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_measured_timestamp.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->measured_timestamp);
      union {
        double real;
        uint64_t base;
      } u_measured_vel_raw;
      u_measured_vel_raw.real = this->measured_vel_raw;
      *(outbuffer + offset + 0) = (u_measured_vel_raw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_measured_vel_raw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_measured_vel_raw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_measured_vel_raw.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_measured_vel_raw.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_measured_vel_raw.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_measured_vel_raw.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_measured_vel_raw.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->measured_vel_raw);
      union {
        double real;
        uint64_t base;
      } u_measured_vel_filtered;
      u_measured_vel_filtered.real = this->measured_vel_filtered;
      *(outbuffer + offset + 0) = (u_measured_vel_filtered.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_measured_vel_filtered.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_measured_vel_filtered.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_measured_vel_filtered.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_measured_vel_filtered.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_measured_vel_filtered.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_measured_vel_filtered.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_measured_vel_filtered.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->measured_vel_filtered);
      union {
        double real;
        uint64_t base;
      } u_measured_eff;
      u_measured_eff.real = this->measured_eff;
      *(outbuffer + offset + 0) = (u_measured_eff.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_measured_eff.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_measured_eff.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_measured_eff.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_measured_eff.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_measured_eff.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_measured_eff.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_measured_eff.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->measured_eff);
      union {
        double real;
        uint64_t base;
      } u_measured_eff_nm;
      u_measured_eff_nm.real = this->measured_eff_nm;
      *(outbuffer + offset + 0) = (u_measured_eff_nm.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_measured_eff_nm.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_measured_eff_nm.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_measured_eff_nm.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_measured_eff_nm.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_measured_eff_nm.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_measured_eff_nm.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_measured_eff_nm.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->measured_eff_nm);
      union {
        double real;
        uint64_t base;
      } u_measured_vel_for_pid;
      u_measured_vel_for_pid.real = this->measured_vel_for_pid;
      *(outbuffer + offset + 0) = (u_measured_vel_for_pid.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_measured_vel_for_pid.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_measured_vel_for_pid.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_measured_vel_for_pid.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_measured_vel_for_pid.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_measured_vel_for_pid.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_measured_vel_for_pid.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_measured_vel_for_pid.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->measured_vel_for_pid);
      union {
        double real;
        uint64_t base;
      } u_cmd_vel_raw;
      u_cmd_vel_raw.real = this->cmd_vel_raw;
      *(outbuffer + offset + 0) = (u_cmd_vel_raw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cmd_vel_raw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cmd_vel_raw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cmd_vel_raw.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_cmd_vel_raw.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_cmd_vel_raw.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_cmd_vel_raw.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_cmd_vel_raw.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->cmd_vel_raw);
      union {
        double real;
        uint64_t base;
      } u_cmd_vel_filtered;
      u_cmd_vel_filtered.real = this->cmd_vel_filtered;
      *(outbuffer + offset + 0) = (u_cmd_vel_filtered.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cmd_vel_filtered.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cmd_vel_filtered.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cmd_vel_filtered.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_cmd_vel_filtered.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_cmd_vel_filtered.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_cmd_vel_filtered.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_cmd_vel_filtered.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->cmd_vel_filtered);
      union {
        double real;
        uint64_t base;
      } u_cmd_vel_scaled;
      u_cmd_vel_scaled.real = this->cmd_vel_scaled;
      *(outbuffer + offset + 0) = (u_cmd_vel_scaled.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cmd_vel_scaled.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cmd_vel_scaled.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cmd_vel_scaled.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_cmd_vel_scaled.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_cmd_vel_scaled.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_cmd_vel_scaled.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_cmd_vel_scaled.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->cmd_vel_scaled);
      union {
        double real;
        uint64_t base;
      } u_cmd_vel_for_pid;
      u_cmd_vel_for_pid.real = this->cmd_vel_for_pid;
      *(outbuffer + offset + 0) = (u_cmd_vel_for_pid.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cmd_vel_for_pid.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cmd_vel_for_pid.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cmd_vel_for_pid.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_cmd_vel_for_pid.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_cmd_vel_for_pid.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_cmd_vel_for_pid.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_cmd_vel_for_pid.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->cmd_vel_for_pid);
      union {
        double real;
        uint64_t base;
      } u_p_eff;
      u_p_eff.real = this->p_eff;
      *(outbuffer + offset + 0) = (u_p_eff.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_p_eff.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_p_eff.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_p_eff.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_p_eff.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_p_eff.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_p_eff.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_p_eff.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->p_eff);
      union {
        double real;
        uint64_t base;
      } u_i_eff;
      u_i_eff.real = this->i_eff;
      *(outbuffer + offset + 0) = (u_i_eff.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_i_eff.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_i_eff.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_i_eff.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_i_eff.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_i_eff.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_i_eff.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_i_eff.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->i_eff);
      union {
        double real;
        uint64_t base;
      } u_d_eff;
      u_d_eff.real = this->d_eff;
      *(outbuffer + offset + 0) = (u_d_eff.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_d_eff.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_d_eff.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_d_eff.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_d_eff.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_d_eff.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_d_eff.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_d_eff.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->d_eff);
      union {
        double real;
        uint64_t base;
      } u_ff_eff;
      u_ff_eff.real = this->ff_eff;
      *(outbuffer + offset + 0) = (u_ff_eff.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ff_eff.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ff_eff.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ff_eff.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_ff_eff.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_ff_eff.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_ff_eff.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_ff_eff.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->ff_eff);
      union {
        double real;
        uint64_t base;
      } u_ff_static_fric_eff;
      u_ff_static_fric_eff.real = this->ff_static_fric_eff;
      *(outbuffer + offset + 0) = (u_ff_static_fric_eff.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ff_static_fric_eff.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ff_static_fric_eff.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ff_static_fric_eff.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_ff_static_fric_eff.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_ff_static_fric_eff.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_ff_static_fric_eff.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_ff_static_fric_eff.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->ff_static_fric_eff);
      union {
        double real;
        uint64_t base;
      } u_raw_cmd_eff;
      u_raw_cmd_eff.real = this->raw_cmd_eff;
      *(outbuffer + offset + 0) = (u_raw_cmd_eff.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_raw_cmd_eff.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_raw_cmd_eff.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_raw_cmd_eff.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_raw_cmd_eff.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_raw_cmd_eff.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_raw_cmd_eff.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_raw_cmd_eff.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->raw_cmd_eff);
      union {
        double real;
        uint64_t base;
      } u_cmd_eff;
      u_cmd_eff.real = this->cmd_eff;
      *(outbuffer + offset + 0) = (u_cmd_eff.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cmd_eff.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cmd_eff.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cmd_eff.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_cmd_eff.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_cmd_eff.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_cmd_eff.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_cmd_eff.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->cmd_eff);
      union {
        double real;
        uint64_t base;
      } u_cmd_eff_nm;
      u_cmd_eff_nm.real = this->cmd_eff_nm;
      *(outbuffer + offset + 0) = (u_cmd_eff_nm.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cmd_eff_nm.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cmd_eff_nm.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cmd_eff_nm.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_cmd_eff_nm.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_cmd_eff_nm.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_cmd_eff_nm.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_cmd_eff_nm.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->cmd_eff_nm);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_measured_timestamp;
      u_measured_timestamp.base = 0;
      u_measured_timestamp.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_measured_timestamp.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_measured_timestamp.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_measured_timestamp.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_measured_timestamp.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_measured_timestamp.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_measured_timestamp.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_measured_timestamp.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->measured_timestamp = u_measured_timestamp.real;
      offset += sizeof(this->measured_timestamp);
      union {
        double real;
        uint64_t base;
      } u_measured_vel_raw;
      u_measured_vel_raw.base = 0;
      u_measured_vel_raw.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_measured_vel_raw.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_measured_vel_raw.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_measured_vel_raw.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_measured_vel_raw.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_measured_vel_raw.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_measured_vel_raw.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_measured_vel_raw.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->measured_vel_raw = u_measured_vel_raw.real;
      offset += sizeof(this->measured_vel_raw);
      union {
        double real;
        uint64_t base;
      } u_measured_vel_filtered;
      u_measured_vel_filtered.base = 0;
      u_measured_vel_filtered.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_measured_vel_filtered.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_measured_vel_filtered.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_measured_vel_filtered.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_measured_vel_filtered.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_measured_vel_filtered.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_measured_vel_filtered.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_measured_vel_filtered.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->measured_vel_filtered = u_measured_vel_filtered.real;
      offset += sizeof(this->measured_vel_filtered);
      union {
        double real;
        uint64_t base;
      } u_measured_eff;
      u_measured_eff.base = 0;
      u_measured_eff.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_measured_eff.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_measured_eff.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_measured_eff.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_measured_eff.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_measured_eff.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_measured_eff.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_measured_eff.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->measured_eff = u_measured_eff.real;
      offset += sizeof(this->measured_eff);
      union {
        double real;
        uint64_t base;
      } u_measured_eff_nm;
      u_measured_eff_nm.base = 0;
      u_measured_eff_nm.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_measured_eff_nm.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_measured_eff_nm.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_measured_eff_nm.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_measured_eff_nm.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_measured_eff_nm.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_measured_eff_nm.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_measured_eff_nm.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->measured_eff_nm = u_measured_eff_nm.real;
      offset += sizeof(this->measured_eff_nm);
      union {
        double real;
        uint64_t base;
      } u_measured_vel_for_pid;
      u_measured_vel_for_pid.base = 0;
      u_measured_vel_for_pid.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_measured_vel_for_pid.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_measured_vel_for_pid.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_measured_vel_for_pid.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_measured_vel_for_pid.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_measured_vel_for_pid.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_measured_vel_for_pid.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_measured_vel_for_pid.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->measured_vel_for_pid = u_measured_vel_for_pid.real;
      offset += sizeof(this->measured_vel_for_pid);
      union {
        double real;
        uint64_t base;
      } u_cmd_vel_raw;
      u_cmd_vel_raw.base = 0;
      u_cmd_vel_raw.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cmd_vel_raw.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cmd_vel_raw.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cmd_vel_raw.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_cmd_vel_raw.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_cmd_vel_raw.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_cmd_vel_raw.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_cmd_vel_raw.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->cmd_vel_raw = u_cmd_vel_raw.real;
      offset += sizeof(this->cmd_vel_raw);
      union {
        double real;
        uint64_t base;
      } u_cmd_vel_filtered;
      u_cmd_vel_filtered.base = 0;
      u_cmd_vel_filtered.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cmd_vel_filtered.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cmd_vel_filtered.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cmd_vel_filtered.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_cmd_vel_filtered.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_cmd_vel_filtered.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_cmd_vel_filtered.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_cmd_vel_filtered.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->cmd_vel_filtered = u_cmd_vel_filtered.real;
      offset += sizeof(this->cmd_vel_filtered);
      union {
        double real;
        uint64_t base;
      } u_cmd_vel_scaled;
      u_cmd_vel_scaled.base = 0;
      u_cmd_vel_scaled.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cmd_vel_scaled.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cmd_vel_scaled.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cmd_vel_scaled.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_cmd_vel_scaled.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_cmd_vel_scaled.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_cmd_vel_scaled.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_cmd_vel_scaled.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->cmd_vel_scaled = u_cmd_vel_scaled.real;
      offset += sizeof(this->cmd_vel_scaled);
      union {
        double real;
        uint64_t base;
      } u_cmd_vel_for_pid;
      u_cmd_vel_for_pid.base = 0;
      u_cmd_vel_for_pid.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cmd_vel_for_pid.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cmd_vel_for_pid.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cmd_vel_for_pid.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_cmd_vel_for_pid.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_cmd_vel_for_pid.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_cmd_vel_for_pid.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_cmd_vel_for_pid.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->cmd_vel_for_pid = u_cmd_vel_for_pid.real;
      offset += sizeof(this->cmd_vel_for_pid);
      union {
        double real;
        uint64_t base;
      } u_p_eff;
      u_p_eff.base = 0;
      u_p_eff.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_p_eff.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_p_eff.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_p_eff.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_p_eff.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_p_eff.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_p_eff.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_p_eff.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->p_eff = u_p_eff.real;
      offset += sizeof(this->p_eff);
      union {
        double real;
        uint64_t base;
      } u_i_eff;
      u_i_eff.base = 0;
      u_i_eff.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_i_eff.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_i_eff.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_i_eff.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_i_eff.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_i_eff.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_i_eff.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_i_eff.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->i_eff = u_i_eff.real;
      offset += sizeof(this->i_eff);
      union {
        double real;
        uint64_t base;
      } u_d_eff;
      u_d_eff.base = 0;
      u_d_eff.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_d_eff.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_d_eff.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_d_eff.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_d_eff.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_d_eff.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_d_eff.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_d_eff.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->d_eff = u_d_eff.real;
      offset += sizeof(this->d_eff);
      union {
        double real;
        uint64_t base;
      } u_ff_eff;
      u_ff_eff.base = 0;
      u_ff_eff.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ff_eff.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ff_eff.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ff_eff.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_ff_eff.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_ff_eff.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_ff_eff.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_ff_eff.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->ff_eff = u_ff_eff.real;
      offset += sizeof(this->ff_eff);
      union {
        double real;
        uint64_t base;
      } u_ff_static_fric_eff;
      u_ff_static_fric_eff.base = 0;
      u_ff_static_fric_eff.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ff_static_fric_eff.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ff_static_fric_eff.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ff_static_fric_eff.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_ff_static_fric_eff.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_ff_static_fric_eff.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_ff_static_fric_eff.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_ff_static_fric_eff.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->ff_static_fric_eff = u_ff_static_fric_eff.real;
      offset += sizeof(this->ff_static_fric_eff);
      union {
        double real;
        uint64_t base;
      } u_raw_cmd_eff;
      u_raw_cmd_eff.base = 0;
      u_raw_cmd_eff.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_raw_cmd_eff.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_raw_cmd_eff.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_raw_cmd_eff.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_raw_cmd_eff.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_raw_cmd_eff.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_raw_cmd_eff.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_raw_cmd_eff.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->raw_cmd_eff = u_raw_cmd_eff.real;
      offset += sizeof(this->raw_cmd_eff);
      union {
        double real;
        uint64_t base;
      } u_cmd_eff;
      u_cmd_eff.base = 0;
      u_cmd_eff.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cmd_eff.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cmd_eff.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cmd_eff.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_cmd_eff.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_cmd_eff.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_cmd_eff.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_cmd_eff.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->cmd_eff = u_cmd_eff.real;
      offset += sizeof(this->cmd_eff);
      union {
        double real;
        uint64_t base;
      } u_cmd_eff_nm;
      u_cmd_eff_nm.base = 0;
      u_cmd_eff_nm.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cmd_eff_nm.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cmd_eff_nm.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cmd_eff_nm.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_cmd_eff_nm.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_cmd_eff_nm.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_cmd_eff_nm.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_cmd_eff_nm.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->cmd_eff_nm = u_cmd_eff_nm.real;
      offset += sizeof(this->cmd_eff_nm);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/DiffDriveEffortControllerSideState"; };
    virtual const char * getMD5() override { return "03c56d6b55736de6a600a543afaf5a84"; };

  };

}
#endif
