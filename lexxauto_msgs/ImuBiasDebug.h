#ifndef _ROS_lexxauto_msgs_ImuBiasDebug_h
#define _ROS_lexxauto_msgs_ImuBiasDebug_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace lexxauto_msgs
{

  class ImuBiasDebug : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef const char* _state_type;
      _state_type state;
      typedef const char* _sub_state_type;
      _sub_state_type sub_state;
      typedef bool _is_static_type;
      _is_static_type is_static;
      typedef bool _is_vibrating_type;
      _is_vibrating_type is_vibrating;
      typedef double _accel_amplitude_x_type;
      _accel_amplitude_x_type accel_amplitude_x;
      typedef double _accel_amplitude_y_type;
      _accel_amplitude_y_type accel_amplitude_y;
      typedef double _cumulative_displacement_type;
      _cumulative_displacement_type cumulative_displacement;
      typedef double _state_elapsed_type;
      _state_elapsed_type state_elapsed;
      typedef double _substate_elapsed_type;
      _substate_elapsed_type substate_elapsed;
      typedef double _gyro_x_current_bias_type;
      _gyro_x_current_bias_type gyro_x_current_bias;
      typedef double _gyro_x_initial_bias_type;
      _gyro_x_initial_bias_type gyro_x_initial_bias;
      typedef int32_t _gyro_x_update_count_type;
      _gyro_x_update_count_type gyro_x_update_count;
      typedef bool _gyro_x_enabled_type;
      _gyro_x_enabled_type gyro_x_enabled;
      typedef double _gyro_y_current_bias_type;
      _gyro_y_current_bias_type gyro_y_current_bias;
      typedef double _gyro_y_initial_bias_type;
      _gyro_y_initial_bias_type gyro_y_initial_bias;
      typedef int32_t _gyro_y_update_count_type;
      _gyro_y_update_count_type gyro_y_update_count;
      typedef bool _gyro_y_enabled_type;
      _gyro_y_enabled_type gyro_y_enabled;
      typedef double _gyro_z_current_bias_type;
      _gyro_z_current_bias_type gyro_z_current_bias;
      typedef double _gyro_z_initial_bias_type;
      _gyro_z_initial_bias_type gyro_z_initial_bias;
      typedef int32_t _gyro_z_update_count_type;
      _gyro_z_update_count_type gyro_z_update_count;
      typedef bool _gyro_z_enabled_type;
      _gyro_z_enabled_type gyro_z_enabled;
      typedef double _accel_x_current_bias_type;
      _accel_x_current_bias_type accel_x_current_bias;
      typedef double _accel_x_initial_bias_type;
      _accel_x_initial_bias_type accel_x_initial_bias;
      typedef int32_t _accel_x_update_count_type;
      _accel_x_update_count_type accel_x_update_count;
      typedef bool _accel_x_enabled_type;
      _accel_x_enabled_type accel_x_enabled;
      typedef double _accel_y_current_bias_type;
      _accel_y_current_bias_type accel_y_current_bias;
      typedef double _accel_y_initial_bias_type;
      _accel_y_initial_bias_type accel_y_initial_bias;
      typedef int32_t _accel_y_update_count_type;
      _accel_y_update_count_type accel_y_update_count;
      typedef bool _accel_y_enabled_type;
      _accel_y_enabled_type accel_y_enabled;
      typedef double _accel_z_current_bias_type;
      _accel_z_current_bias_type accel_z_current_bias;
      typedef double _accel_z_initial_bias_type;
      _accel_z_initial_bias_type accel_z_initial_bias;
      typedef int32_t _accel_z_update_count_type;
      _accel_z_update_count_type accel_z_update_count;
      typedef bool _accel_z_enabled_type;
      _accel_z_enabled_type accel_z_enabled;
      typedef double _time_since_last_update_type;
      _time_since_last_update_type time_since_last_update;
      typedef bool _in_stabilizing_type;
      _in_stabilizing_type in_stabilizing;
      typedef double _stabilizing_elapsed_type;
      _stabilizing_elapsed_type stabilizing_elapsed;
      typedef bool _fast_calib_mode_type;
      _fast_calib_mode_type fast_calib_mode;
      typedef bool _fast_calib_completed_type;
      _fast_calib_completed_type fast_calib_completed;
      typedef double _accel_norm_current_type;
      _accel_norm_current_type accel_norm_current;
      typedef double _accel_norm_average_type;
      _accel_norm_average_type accel_norm_average;
      typedef bool _is_accel_stable_type;
      _is_accel_stable_type is_accel_stable;
      typedef int32_t _candidate_count_type;
      _candidate_count_type candidate_count;
      typedef double _candidate_mean_type;
      _candidate_mean_type candidate_mean;
      typedef double _candidate_stddev_type;
      _candidate_stddev_type candidate_stddev;
      typedef bool _last_validation_passed_type;
      _last_validation_passed_type last_validation_passed;
      typedef const char* _last_rejection_reason_type;
      _last_rejection_reason_type last_rejection_reason;
      typedef bool _use_settling_time_type;
      _use_settling_time_type use_settling_time;
      typedef bool _use_accel_norm_check_type;
      _use_accel_norm_check_type use_accel_norm_check;
      typedef bool _use_gyro_quietness_check_type;
      _use_gyro_quietness_check_type use_gyro_quietness_check;
      typedef bool _use_fast_calib_type;
      _use_fast_calib_type use_fast_calib;
      typedef bool _use_statistical_validation_type;
      _use_statistical_validation_type use_statistical_validation;
      typedef double _gravity_x_type;
      _gravity_x_type gravity_x;
      typedef double _gravity_y_type;
      _gravity_y_type gravity_y;
      typedef double _gravity_z_type;
      _gravity_z_type gravity_z;
      typedef double _dynamic_accel_x_type;
      _dynamic_accel_x_type dynamic_accel_x;
      typedef double _dynamic_accel_y_type;
      _dynamic_accel_y_type dynamic_accel_y;
      typedef double _dynamic_accel_z_type;
      _dynamic_accel_z_type dynamic_accel_z;
      typedef bool _candidate_selection_enabled_type;
      _candidate_selection_enabled_type candidate_selection_enabled;
      typedef int32_t _six_axis_candidate_count_type;
      _six_axis_candidate_count_type six_axis_candidate_count;
      typedef double _best_candidate_score_type;
      _best_candidate_score_type best_candidate_score;
      typedef double _best_candidate_age_type;
      _best_candidate_age_type best_candidate_age;

    ImuBiasDebug():
      header(),
      state(""),
      sub_state(""),
      is_static(0),
      is_vibrating(0),
      accel_amplitude_x(0),
      accel_amplitude_y(0),
      cumulative_displacement(0),
      state_elapsed(0),
      substate_elapsed(0),
      gyro_x_current_bias(0),
      gyro_x_initial_bias(0),
      gyro_x_update_count(0),
      gyro_x_enabled(0),
      gyro_y_current_bias(0),
      gyro_y_initial_bias(0),
      gyro_y_update_count(0),
      gyro_y_enabled(0),
      gyro_z_current_bias(0),
      gyro_z_initial_bias(0),
      gyro_z_update_count(0),
      gyro_z_enabled(0),
      accel_x_current_bias(0),
      accel_x_initial_bias(0),
      accel_x_update_count(0),
      accel_x_enabled(0),
      accel_y_current_bias(0),
      accel_y_initial_bias(0),
      accel_y_update_count(0),
      accel_y_enabled(0),
      accel_z_current_bias(0),
      accel_z_initial_bias(0),
      accel_z_update_count(0),
      accel_z_enabled(0),
      time_since_last_update(0),
      in_stabilizing(0),
      stabilizing_elapsed(0),
      fast_calib_mode(0),
      fast_calib_completed(0),
      accel_norm_current(0),
      accel_norm_average(0),
      is_accel_stable(0),
      candidate_count(0),
      candidate_mean(0),
      candidate_stddev(0),
      last_validation_passed(0),
      last_rejection_reason(""),
      use_settling_time(0),
      use_accel_norm_check(0),
      use_gyro_quietness_check(0),
      use_fast_calib(0),
      use_statistical_validation(0),
      gravity_x(0),
      gravity_y(0),
      gravity_z(0),
      dynamic_accel_x(0),
      dynamic_accel_y(0),
      dynamic_accel_z(0),
      candidate_selection_enabled(0),
      six_axis_candidate_count(0),
      best_candidate_score(0),
      best_candidate_age(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      uint32_t length_state = strlen(this->state);
      varToArr(outbuffer + offset, length_state);
      offset += 4;
      memcpy(outbuffer + offset, this->state, length_state);
      offset += length_state;
      uint32_t length_sub_state = strlen(this->sub_state);
      varToArr(outbuffer + offset, length_sub_state);
      offset += 4;
      memcpy(outbuffer + offset, this->sub_state, length_sub_state);
      offset += length_sub_state;
      union {
        bool real;
        uint8_t base;
      } u_is_static;
      u_is_static.real = this->is_static;
      *(outbuffer + offset + 0) = (u_is_static.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->is_static);
      union {
        bool real;
        uint8_t base;
      } u_is_vibrating;
      u_is_vibrating.real = this->is_vibrating;
      *(outbuffer + offset + 0) = (u_is_vibrating.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->is_vibrating);
      union {
        double real;
        uint64_t base;
      } u_accel_amplitude_x;
      u_accel_amplitude_x.real = this->accel_amplitude_x;
      *(outbuffer + offset + 0) = (u_accel_amplitude_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_accel_amplitude_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_accel_amplitude_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_accel_amplitude_x.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_accel_amplitude_x.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_accel_amplitude_x.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_accel_amplitude_x.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_accel_amplitude_x.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->accel_amplitude_x);
      union {
        double real;
        uint64_t base;
      } u_accel_amplitude_y;
      u_accel_amplitude_y.real = this->accel_amplitude_y;
      *(outbuffer + offset + 0) = (u_accel_amplitude_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_accel_amplitude_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_accel_amplitude_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_accel_amplitude_y.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_accel_amplitude_y.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_accel_amplitude_y.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_accel_amplitude_y.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_accel_amplitude_y.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->accel_amplitude_y);
      union {
        double real;
        uint64_t base;
      } u_cumulative_displacement;
      u_cumulative_displacement.real = this->cumulative_displacement;
      *(outbuffer + offset + 0) = (u_cumulative_displacement.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cumulative_displacement.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cumulative_displacement.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cumulative_displacement.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_cumulative_displacement.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_cumulative_displacement.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_cumulative_displacement.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_cumulative_displacement.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->cumulative_displacement);
      union {
        double real;
        uint64_t base;
      } u_state_elapsed;
      u_state_elapsed.real = this->state_elapsed;
      *(outbuffer + offset + 0) = (u_state_elapsed.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_state_elapsed.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_state_elapsed.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_state_elapsed.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_state_elapsed.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_state_elapsed.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_state_elapsed.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_state_elapsed.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->state_elapsed);
      union {
        double real;
        uint64_t base;
      } u_substate_elapsed;
      u_substate_elapsed.real = this->substate_elapsed;
      *(outbuffer + offset + 0) = (u_substate_elapsed.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_substate_elapsed.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_substate_elapsed.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_substate_elapsed.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_substate_elapsed.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_substate_elapsed.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_substate_elapsed.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_substate_elapsed.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->substate_elapsed);
      union {
        double real;
        uint64_t base;
      } u_gyro_x_current_bias;
      u_gyro_x_current_bias.real = this->gyro_x_current_bias;
      *(outbuffer + offset + 0) = (u_gyro_x_current_bias.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_gyro_x_current_bias.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_gyro_x_current_bias.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_gyro_x_current_bias.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_gyro_x_current_bias.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_gyro_x_current_bias.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_gyro_x_current_bias.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_gyro_x_current_bias.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->gyro_x_current_bias);
      union {
        double real;
        uint64_t base;
      } u_gyro_x_initial_bias;
      u_gyro_x_initial_bias.real = this->gyro_x_initial_bias;
      *(outbuffer + offset + 0) = (u_gyro_x_initial_bias.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_gyro_x_initial_bias.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_gyro_x_initial_bias.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_gyro_x_initial_bias.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_gyro_x_initial_bias.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_gyro_x_initial_bias.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_gyro_x_initial_bias.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_gyro_x_initial_bias.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->gyro_x_initial_bias);
      union {
        int32_t real;
        uint32_t base;
      } u_gyro_x_update_count;
      u_gyro_x_update_count.real = this->gyro_x_update_count;
      *(outbuffer + offset + 0) = (u_gyro_x_update_count.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_gyro_x_update_count.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_gyro_x_update_count.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_gyro_x_update_count.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->gyro_x_update_count);
      union {
        bool real;
        uint8_t base;
      } u_gyro_x_enabled;
      u_gyro_x_enabled.real = this->gyro_x_enabled;
      *(outbuffer + offset + 0) = (u_gyro_x_enabled.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gyro_x_enabled);
      union {
        double real;
        uint64_t base;
      } u_gyro_y_current_bias;
      u_gyro_y_current_bias.real = this->gyro_y_current_bias;
      *(outbuffer + offset + 0) = (u_gyro_y_current_bias.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_gyro_y_current_bias.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_gyro_y_current_bias.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_gyro_y_current_bias.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_gyro_y_current_bias.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_gyro_y_current_bias.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_gyro_y_current_bias.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_gyro_y_current_bias.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->gyro_y_current_bias);
      union {
        double real;
        uint64_t base;
      } u_gyro_y_initial_bias;
      u_gyro_y_initial_bias.real = this->gyro_y_initial_bias;
      *(outbuffer + offset + 0) = (u_gyro_y_initial_bias.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_gyro_y_initial_bias.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_gyro_y_initial_bias.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_gyro_y_initial_bias.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_gyro_y_initial_bias.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_gyro_y_initial_bias.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_gyro_y_initial_bias.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_gyro_y_initial_bias.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->gyro_y_initial_bias);
      union {
        int32_t real;
        uint32_t base;
      } u_gyro_y_update_count;
      u_gyro_y_update_count.real = this->gyro_y_update_count;
      *(outbuffer + offset + 0) = (u_gyro_y_update_count.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_gyro_y_update_count.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_gyro_y_update_count.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_gyro_y_update_count.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->gyro_y_update_count);
      union {
        bool real;
        uint8_t base;
      } u_gyro_y_enabled;
      u_gyro_y_enabled.real = this->gyro_y_enabled;
      *(outbuffer + offset + 0) = (u_gyro_y_enabled.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gyro_y_enabled);
      union {
        double real;
        uint64_t base;
      } u_gyro_z_current_bias;
      u_gyro_z_current_bias.real = this->gyro_z_current_bias;
      *(outbuffer + offset + 0) = (u_gyro_z_current_bias.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_gyro_z_current_bias.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_gyro_z_current_bias.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_gyro_z_current_bias.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_gyro_z_current_bias.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_gyro_z_current_bias.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_gyro_z_current_bias.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_gyro_z_current_bias.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->gyro_z_current_bias);
      union {
        double real;
        uint64_t base;
      } u_gyro_z_initial_bias;
      u_gyro_z_initial_bias.real = this->gyro_z_initial_bias;
      *(outbuffer + offset + 0) = (u_gyro_z_initial_bias.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_gyro_z_initial_bias.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_gyro_z_initial_bias.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_gyro_z_initial_bias.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_gyro_z_initial_bias.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_gyro_z_initial_bias.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_gyro_z_initial_bias.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_gyro_z_initial_bias.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->gyro_z_initial_bias);
      union {
        int32_t real;
        uint32_t base;
      } u_gyro_z_update_count;
      u_gyro_z_update_count.real = this->gyro_z_update_count;
      *(outbuffer + offset + 0) = (u_gyro_z_update_count.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_gyro_z_update_count.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_gyro_z_update_count.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_gyro_z_update_count.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->gyro_z_update_count);
      union {
        bool real;
        uint8_t base;
      } u_gyro_z_enabled;
      u_gyro_z_enabled.real = this->gyro_z_enabled;
      *(outbuffer + offset + 0) = (u_gyro_z_enabled.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->gyro_z_enabled);
      union {
        double real;
        uint64_t base;
      } u_accel_x_current_bias;
      u_accel_x_current_bias.real = this->accel_x_current_bias;
      *(outbuffer + offset + 0) = (u_accel_x_current_bias.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_accel_x_current_bias.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_accel_x_current_bias.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_accel_x_current_bias.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_accel_x_current_bias.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_accel_x_current_bias.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_accel_x_current_bias.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_accel_x_current_bias.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->accel_x_current_bias);
      union {
        double real;
        uint64_t base;
      } u_accel_x_initial_bias;
      u_accel_x_initial_bias.real = this->accel_x_initial_bias;
      *(outbuffer + offset + 0) = (u_accel_x_initial_bias.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_accel_x_initial_bias.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_accel_x_initial_bias.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_accel_x_initial_bias.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_accel_x_initial_bias.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_accel_x_initial_bias.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_accel_x_initial_bias.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_accel_x_initial_bias.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->accel_x_initial_bias);
      union {
        int32_t real;
        uint32_t base;
      } u_accel_x_update_count;
      u_accel_x_update_count.real = this->accel_x_update_count;
      *(outbuffer + offset + 0) = (u_accel_x_update_count.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_accel_x_update_count.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_accel_x_update_count.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_accel_x_update_count.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->accel_x_update_count);
      union {
        bool real;
        uint8_t base;
      } u_accel_x_enabled;
      u_accel_x_enabled.real = this->accel_x_enabled;
      *(outbuffer + offset + 0) = (u_accel_x_enabled.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->accel_x_enabled);
      union {
        double real;
        uint64_t base;
      } u_accel_y_current_bias;
      u_accel_y_current_bias.real = this->accel_y_current_bias;
      *(outbuffer + offset + 0) = (u_accel_y_current_bias.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_accel_y_current_bias.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_accel_y_current_bias.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_accel_y_current_bias.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_accel_y_current_bias.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_accel_y_current_bias.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_accel_y_current_bias.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_accel_y_current_bias.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->accel_y_current_bias);
      union {
        double real;
        uint64_t base;
      } u_accel_y_initial_bias;
      u_accel_y_initial_bias.real = this->accel_y_initial_bias;
      *(outbuffer + offset + 0) = (u_accel_y_initial_bias.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_accel_y_initial_bias.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_accel_y_initial_bias.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_accel_y_initial_bias.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_accel_y_initial_bias.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_accel_y_initial_bias.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_accel_y_initial_bias.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_accel_y_initial_bias.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->accel_y_initial_bias);
      union {
        int32_t real;
        uint32_t base;
      } u_accel_y_update_count;
      u_accel_y_update_count.real = this->accel_y_update_count;
      *(outbuffer + offset + 0) = (u_accel_y_update_count.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_accel_y_update_count.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_accel_y_update_count.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_accel_y_update_count.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->accel_y_update_count);
      union {
        bool real;
        uint8_t base;
      } u_accel_y_enabled;
      u_accel_y_enabled.real = this->accel_y_enabled;
      *(outbuffer + offset + 0) = (u_accel_y_enabled.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->accel_y_enabled);
      union {
        double real;
        uint64_t base;
      } u_accel_z_current_bias;
      u_accel_z_current_bias.real = this->accel_z_current_bias;
      *(outbuffer + offset + 0) = (u_accel_z_current_bias.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_accel_z_current_bias.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_accel_z_current_bias.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_accel_z_current_bias.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_accel_z_current_bias.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_accel_z_current_bias.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_accel_z_current_bias.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_accel_z_current_bias.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->accel_z_current_bias);
      union {
        double real;
        uint64_t base;
      } u_accel_z_initial_bias;
      u_accel_z_initial_bias.real = this->accel_z_initial_bias;
      *(outbuffer + offset + 0) = (u_accel_z_initial_bias.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_accel_z_initial_bias.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_accel_z_initial_bias.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_accel_z_initial_bias.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_accel_z_initial_bias.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_accel_z_initial_bias.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_accel_z_initial_bias.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_accel_z_initial_bias.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->accel_z_initial_bias);
      union {
        int32_t real;
        uint32_t base;
      } u_accel_z_update_count;
      u_accel_z_update_count.real = this->accel_z_update_count;
      *(outbuffer + offset + 0) = (u_accel_z_update_count.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_accel_z_update_count.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_accel_z_update_count.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_accel_z_update_count.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->accel_z_update_count);
      union {
        bool real;
        uint8_t base;
      } u_accel_z_enabled;
      u_accel_z_enabled.real = this->accel_z_enabled;
      *(outbuffer + offset + 0) = (u_accel_z_enabled.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->accel_z_enabled);
      union {
        double real;
        uint64_t base;
      } u_time_since_last_update;
      u_time_since_last_update.real = this->time_since_last_update;
      *(outbuffer + offset + 0) = (u_time_since_last_update.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_time_since_last_update.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_time_since_last_update.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_time_since_last_update.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_time_since_last_update.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_time_since_last_update.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_time_since_last_update.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_time_since_last_update.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->time_since_last_update);
      union {
        bool real;
        uint8_t base;
      } u_in_stabilizing;
      u_in_stabilizing.real = this->in_stabilizing;
      *(outbuffer + offset + 0) = (u_in_stabilizing.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->in_stabilizing);
      union {
        double real;
        uint64_t base;
      } u_stabilizing_elapsed;
      u_stabilizing_elapsed.real = this->stabilizing_elapsed;
      *(outbuffer + offset + 0) = (u_stabilizing_elapsed.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_stabilizing_elapsed.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_stabilizing_elapsed.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_stabilizing_elapsed.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_stabilizing_elapsed.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_stabilizing_elapsed.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_stabilizing_elapsed.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_stabilizing_elapsed.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->stabilizing_elapsed);
      union {
        bool real;
        uint8_t base;
      } u_fast_calib_mode;
      u_fast_calib_mode.real = this->fast_calib_mode;
      *(outbuffer + offset + 0) = (u_fast_calib_mode.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->fast_calib_mode);
      union {
        bool real;
        uint8_t base;
      } u_fast_calib_completed;
      u_fast_calib_completed.real = this->fast_calib_completed;
      *(outbuffer + offset + 0) = (u_fast_calib_completed.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->fast_calib_completed);
      union {
        double real;
        uint64_t base;
      } u_accel_norm_current;
      u_accel_norm_current.real = this->accel_norm_current;
      *(outbuffer + offset + 0) = (u_accel_norm_current.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_accel_norm_current.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_accel_norm_current.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_accel_norm_current.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_accel_norm_current.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_accel_norm_current.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_accel_norm_current.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_accel_norm_current.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->accel_norm_current);
      union {
        double real;
        uint64_t base;
      } u_accel_norm_average;
      u_accel_norm_average.real = this->accel_norm_average;
      *(outbuffer + offset + 0) = (u_accel_norm_average.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_accel_norm_average.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_accel_norm_average.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_accel_norm_average.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_accel_norm_average.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_accel_norm_average.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_accel_norm_average.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_accel_norm_average.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->accel_norm_average);
      union {
        bool real;
        uint8_t base;
      } u_is_accel_stable;
      u_is_accel_stable.real = this->is_accel_stable;
      *(outbuffer + offset + 0) = (u_is_accel_stable.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->is_accel_stable);
      union {
        int32_t real;
        uint32_t base;
      } u_candidate_count;
      u_candidate_count.real = this->candidate_count;
      *(outbuffer + offset + 0) = (u_candidate_count.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_candidate_count.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_candidate_count.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_candidate_count.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->candidate_count);
      union {
        double real;
        uint64_t base;
      } u_candidate_mean;
      u_candidate_mean.real = this->candidate_mean;
      *(outbuffer + offset + 0) = (u_candidate_mean.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_candidate_mean.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_candidate_mean.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_candidate_mean.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_candidate_mean.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_candidate_mean.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_candidate_mean.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_candidate_mean.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->candidate_mean);
      union {
        double real;
        uint64_t base;
      } u_candidate_stddev;
      u_candidate_stddev.real = this->candidate_stddev;
      *(outbuffer + offset + 0) = (u_candidate_stddev.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_candidate_stddev.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_candidate_stddev.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_candidate_stddev.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_candidate_stddev.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_candidate_stddev.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_candidate_stddev.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_candidate_stddev.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->candidate_stddev);
      union {
        bool real;
        uint8_t base;
      } u_last_validation_passed;
      u_last_validation_passed.real = this->last_validation_passed;
      *(outbuffer + offset + 0) = (u_last_validation_passed.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->last_validation_passed);
      uint32_t length_last_rejection_reason = strlen(this->last_rejection_reason);
      varToArr(outbuffer + offset, length_last_rejection_reason);
      offset += 4;
      memcpy(outbuffer + offset, this->last_rejection_reason, length_last_rejection_reason);
      offset += length_last_rejection_reason;
      union {
        bool real;
        uint8_t base;
      } u_use_settling_time;
      u_use_settling_time.real = this->use_settling_time;
      *(outbuffer + offset + 0) = (u_use_settling_time.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->use_settling_time);
      union {
        bool real;
        uint8_t base;
      } u_use_accel_norm_check;
      u_use_accel_norm_check.real = this->use_accel_norm_check;
      *(outbuffer + offset + 0) = (u_use_accel_norm_check.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->use_accel_norm_check);
      union {
        bool real;
        uint8_t base;
      } u_use_gyro_quietness_check;
      u_use_gyro_quietness_check.real = this->use_gyro_quietness_check;
      *(outbuffer + offset + 0) = (u_use_gyro_quietness_check.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->use_gyro_quietness_check);
      union {
        bool real;
        uint8_t base;
      } u_use_fast_calib;
      u_use_fast_calib.real = this->use_fast_calib;
      *(outbuffer + offset + 0) = (u_use_fast_calib.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->use_fast_calib);
      union {
        bool real;
        uint8_t base;
      } u_use_statistical_validation;
      u_use_statistical_validation.real = this->use_statistical_validation;
      *(outbuffer + offset + 0) = (u_use_statistical_validation.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->use_statistical_validation);
      union {
        double real;
        uint64_t base;
      } u_gravity_x;
      u_gravity_x.real = this->gravity_x;
      *(outbuffer + offset + 0) = (u_gravity_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_gravity_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_gravity_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_gravity_x.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_gravity_x.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_gravity_x.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_gravity_x.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_gravity_x.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->gravity_x);
      union {
        double real;
        uint64_t base;
      } u_gravity_y;
      u_gravity_y.real = this->gravity_y;
      *(outbuffer + offset + 0) = (u_gravity_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_gravity_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_gravity_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_gravity_y.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_gravity_y.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_gravity_y.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_gravity_y.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_gravity_y.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->gravity_y);
      union {
        double real;
        uint64_t base;
      } u_gravity_z;
      u_gravity_z.real = this->gravity_z;
      *(outbuffer + offset + 0) = (u_gravity_z.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_gravity_z.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_gravity_z.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_gravity_z.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_gravity_z.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_gravity_z.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_gravity_z.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_gravity_z.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->gravity_z);
      union {
        double real;
        uint64_t base;
      } u_dynamic_accel_x;
      u_dynamic_accel_x.real = this->dynamic_accel_x;
      *(outbuffer + offset + 0) = (u_dynamic_accel_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_dynamic_accel_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_dynamic_accel_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_dynamic_accel_x.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_dynamic_accel_x.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_dynamic_accel_x.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_dynamic_accel_x.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_dynamic_accel_x.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->dynamic_accel_x);
      union {
        double real;
        uint64_t base;
      } u_dynamic_accel_y;
      u_dynamic_accel_y.real = this->dynamic_accel_y;
      *(outbuffer + offset + 0) = (u_dynamic_accel_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_dynamic_accel_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_dynamic_accel_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_dynamic_accel_y.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_dynamic_accel_y.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_dynamic_accel_y.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_dynamic_accel_y.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_dynamic_accel_y.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->dynamic_accel_y);
      union {
        double real;
        uint64_t base;
      } u_dynamic_accel_z;
      u_dynamic_accel_z.real = this->dynamic_accel_z;
      *(outbuffer + offset + 0) = (u_dynamic_accel_z.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_dynamic_accel_z.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_dynamic_accel_z.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_dynamic_accel_z.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_dynamic_accel_z.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_dynamic_accel_z.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_dynamic_accel_z.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_dynamic_accel_z.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->dynamic_accel_z);
      union {
        bool real;
        uint8_t base;
      } u_candidate_selection_enabled;
      u_candidate_selection_enabled.real = this->candidate_selection_enabled;
      *(outbuffer + offset + 0) = (u_candidate_selection_enabled.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->candidate_selection_enabled);
      union {
        int32_t real;
        uint32_t base;
      } u_six_axis_candidate_count;
      u_six_axis_candidate_count.real = this->six_axis_candidate_count;
      *(outbuffer + offset + 0) = (u_six_axis_candidate_count.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_six_axis_candidate_count.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_six_axis_candidate_count.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_six_axis_candidate_count.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->six_axis_candidate_count);
      union {
        double real;
        uint64_t base;
      } u_best_candidate_score;
      u_best_candidate_score.real = this->best_candidate_score;
      *(outbuffer + offset + 0) = (u_best_candidate_score.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_best_candidate_score.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_best_candidate_score.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_best_candidate_score.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_best_candidate_score.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_best_candidate_score.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_best_candidate_score.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_best_candidate_score.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->best_candidate_score);
      union {
        double real;
        uint64_t base;
      } u_best_candidate_age;
      u_best_candidate_age.real = this->best_candidate_age;
      *(outbuffer + offset + 0) = (u_best_candidate_age.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_best_candidate_age.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_best_candidate_age.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_best_candidate_age.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_best_candidate_age.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_best_candidate_age.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_best_candidate_age.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_best_candidate_age.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->best_candidate_age);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint32_t length_state;
      arrToVar(length_state, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_state; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_state-1]=0;
      this->state = (char *)(inbuffer + offset-1);
      offset += length_state;
      uint32_t length_sub_state;
      arrToVar(length_sub_state, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_sub_state; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_sub_state-1]=0;
      this->sub_state = (char *)(inbuffer + offset-1);
      offset += length_sub_state;
      union {
        bool real;
        uint8_t base;
      } u_is_static;
      u_is_static.base = 0;
      u_is_static.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->is_static = u_is_static.real;
      offset += sizeof(this->is_static);
      union {
        bool real;
        uint8_t base;
      } u_is_vibrating;
      u_is_vibrating.base = 0;
      u_is_vibrating.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->is_vibrating = u_is_vibrating.real;
      offset += sizeof(this->is_vibrating);
      union {
        double real;
        uint64_t base;
      } u_accel_amplitude_x;
      u_accel_amplitude_x.base = 0;
      u_accel_amplitude_x.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_accel_amplitude_x.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_accel_amplitude_x.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_accel_amplitude_x.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_accel_amplitude_x.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_accel_amplitude_x.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_accel_amplitude_x.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_accel_amplitude_x.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->accel_amplitude_x = u_accel_amplitude_x.real;
      offset += sizeof(this->accel_amplitude_x);
      union {
        double real;
        uint64_t base;
      } u_accel_amplitude_y;
      u_accel_amplitude_y.base = 0;
      u_accel_amplitude_y.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_accel_amplitude_y.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_accel_amplitude_y.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_accel_amplitude_y.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_accel_amplitude_y.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_accel_amplitude_y.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_accel_amplitude_y.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_accel_amplitude_y.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->accel_amplitude_y = u_accel_amplitude_y.real;
      offset += sizeof(this->accel_amplitude_y);
      union {
        double real;
        uint64_t base;
      } u_cumulative_displacement;
      u_cumulative_displacement.base = 0;
      u_cumulative_displacement.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cumulative_displacement.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cumulative_displacement.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cumulative_displacement.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_cumulative_displacement.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_cumulative_displacement.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_cumulative_displacement.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_cumulative_displacement.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->cumulative_displacement = u_cumulative_displacement.real;
      offset += sizeof(this->cumulative_displacement);
      union {
        double real;
        uint64_t base;
      } u_state_elapsed;
      u_state_elapsed.base = 0;
      u_state_elapsed.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_state_elapsed.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_state_elapsed.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_state_elapsed.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_state_elapsed.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_state_elapsed.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_state_elapsed.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_state_elapsed.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->state_elapsed = u_state_elapsed.real;
      offset += sizeof(this->state_elapsed);
      union {
        double real;
        uint64_t base;
      } u_substate_elapsed;
      u_substate_elapsed.base = 0;
      u_substate_elapsed.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_substate_elapsed.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_substate_elapsed.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_substate_elapsed.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_substate_elapsed.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_substate_elapsed.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_substate_elapsed.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_substate_elapsed.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->substate_elapsed = u_substate_elapsed.real;
      offset += sizeof(this->substate_elapsed);
      union {
        double real;
        uint64_t base;
      } u_gyro_x_current_bias;
      u_gyro_x_current_bias.base = 0;
      u_gyro_x_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_gyro_x_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_gyro_x_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_gyro_x_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_gyro_x_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_gyro_x_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_gyro_x_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_gyro_x_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->gyro_x_current_bias = u_gyro_x_current_bias.real;
      offset += sizeof(this->gyro_x_current_bias);
      union {
        double real;
        uint64_t base;
      } u_gyro_x_initial_bias;
      u_gyro_x_initial_bias.base = 0;
      u_gyro_x_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_gyro_x_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_gyro_x_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_gyro_x_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_gyro_x_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_gyro_x_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_gyro_x_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_gyro_x_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->gyro_x_initial_bias = u_gyro_x_initial_bias.real;
      offset += sizeof(this->gyro_x_initial_bias);
      union {
        int32_t real;
        uint32_t base;
      } u_gyro_x_update_count;
      u_gyro_x_update_count.base = 0;
      u_gyro_x_update_count.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_gyro_x_update_count.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_gyro_x_update_count.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_gyro_x_update_count.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->gyro_x_update_count = u_gyro_x_update_count.real;
      offset += sizeof(this->gyro_x_update_count);
      union {
        bool real;
        uint8_t base;
      } u_gyro_x_enabled;
      u_gyro_x_enabled.base = 0;
      u_gyro_x_enabled.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->gyro_x_enabled = u_gyro_x_enabled.real;
      offset += sizeof(this->gyro_x_enabled);
      union {
        double real;
        uint64_t base;
      } u_gyro_y_current_bias;
      u_gyro_y_current_bias.base = 0;
      u_gyro_y_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_gyro_y_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_gyro_y_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_gyro_y_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_gyro_y_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_gyro_y_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_gyro_y_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_gyro_y_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->gyro_y_current_bias = u_gyro_y_current_bias.real;
      offset += sizeof(this->gyro_y_current_bias);
      union {
        double real;
        uint64_t base;
      } u_gyro_y_initial_bias;
      u_gyro_y_initial_bias.base = 0;
      u_gyro_y_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_gyro_y_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_gyro_y_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_gyro_y_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_gyro_y_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_gyro_y_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_gyro_y_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_gyro_y_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->gyro_y_initial_bias = u_gyro_y_initial_bias.real;
      offset += sizeof(this->gyro_y_initial_bias);
      union {
        int32_t real;
        uint32_t base;
      } u_gyro_y_update_count;
      u_gyro_y_update_count.base = 0;
      u_gyro_y_update_count.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_gyro_y_update_count.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_gyro_y_update_count.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_gyro_y_update_count.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->gyro_y_update_count = u_gyro_y_update_count.real;
      offset += sizeof(this->gyro_y_update_count);
      union {
        bool real;
        uint8_t base;
      } u_gyro_y_enabled;
      u_gyro_y_enabled.base = 0;
      u_gyro_y_enabled.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->gyro_y_enabled = u_gyro_y_enabled.real;
      offset += sizeof(this->gyro_y_enabled);
      union {
        double real;
        uint64_t base;
      } u_gyro_z_current_bias;
      u_gyro_z_current_bias.base = 0;
      u_gyro_z_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_gyro_z_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_gyro_z_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_gyro_z_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_gyro_z_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_gyro_z_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_gyro_z_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_gyro_z_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->gyro_z_current_bias = u_gyro_z_current_bias.real;
      offset += sizeof(this->gyro_z_current_bias);
      union {
        double real;
        uint64_t base;
      } u_gyro_z_initial_bias;
      u_gyro_z_initial_bias.base = 0;
      u_gyro_z_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_gyro_z_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_gyro_z_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_gyro_z_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_gyro_z_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_gyro_z_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_gyro_z_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_gyro_z_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->gyro_z_initial_bias = u_gyro_z_initial_bias.real;
      offset += sizeof(this->gyro_z_initial_bias);
      union {
        int32_t real;
        uint32_t base;
      } u_gyro_z_update_count;
      u_gyro_z_update_count.base = 0;
      u_gyro_z_update_count.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_gyro_z_update_count.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_gyro_z_update_count.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_gyro_z_update_count.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->gyro_z_update_count = u_gyro_z_update_count.real;
      offset += sizeof(this->gyro_z_update_count);
      union {
        bool real;
        uint8_t base;
      } u_gyro_z_enabled;
      u_gyro_z_enabled.base = 0;
      u_gyro_z_enabled.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->gyro_z_enabled = u_gyro_z_enabled.real;
      offset += sizeof(this->gyro_z_enabled);
      union {
        double real;
        uint64_t base;
      } u_accel_x_current_bias;
      u_accel_x_current_bias.base = 0;
      u_accel_x_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_accel_x_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_accel_x_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_accel_x_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_accel_x_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_accel_x_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_accel_x_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_accel_x_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->accel_x_current_bias = u_accel_x_current_bias.real;
      offset += sizeof(this->accel_x_current_bias);
      union {
        double real;
        uint64_t base;
      } u_accel_x_initial_bias;
      u_accel_x_initial_bias.base = 0;
      u_accel_x_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_accel_x_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_accel_x_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_accel_x_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_accel_x_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_accel_x_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_accel_x_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_accel_x_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->accel_x_initial_bias = u_accel_x_initial_bias.real;
      offset += sizeof(this->accel_x_initial_bias);
      union {
        int32_t real;
        uint32_t base;
      } u_accel_x_update_count;
      u_accel_x_update_count.base = 0;
      u_accel_x_update_count.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_accel_x_update_count.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_accel_x_update_count.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_accel_x_update_count.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->accel_x_update_count = u_accel_x_update_count.real;
      offset += sizeof(this->accel_x_update_count);
      union {
        bool real;
        uint8_t base;
      } u_accel_x_enabled;
      u_accel_x_enabled.base = 0;
      u_accel_x_enabled.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->accel_x_enabled = u_accel_x_enabled.real;
      offset += sizeof(this->accel_x_enabled);
      union {
        double real;
        uint64_t base;
      } u_accel_y_current_bias;
      u_accel_y_current_bias.base = 0;
      u_accel_y_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_accel_y_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_accel_y_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_accel_y_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_accel_y_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_accel_y_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_accel_y_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_accel_y_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->accel_y_current_bias = u_accel_y_current_bias.real;
      offset += sizeof(this->accel_y_current_bias);
      union {
        double real;
        uint64_t base;
      } u_accel_y_initial_bias;
      u_accel_y_initial_bias.base = 0;
      u_accel_y_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_accel_y_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_accel_y_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_accel_y_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_accel_y_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_accel_y_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_accel_y_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_accel_y_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->accel_y_initial_bias = u_accel_y_initial_bias.real;
      offset += sizeof(this->accel_y_initial_bias);
      union {
        int32_t real;
        uint32_t base;
      } u_accel_y_update_count;
      u_accel_y_update_count.base = 0;
      u_accel_y_update_count.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_accel_y_update_count.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_accel_y_update_count.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_accel_y_update_count.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->accel_y_update_count = u_accel_y_update_count.real;
      offset += sizeof(this->accel_y_update_count);
      union {
        bool real;
        uint8_t base;
      } u_accel_y_enabled;
      u_accel_y_enabled.base = 0;
      u_accel_y_enabled.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->accel_y_enabled = u_accel_y_enabled.real;
      offset += sizeof(this->accel_y_enabled);
      union {
        double real;
        uint64_t base;
      } u_accel_z_current_bias;
      u_accel_z_current_bias.base = 0;
      u_accel_z_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_accel_z_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_accel_z_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_accel_z_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_accel_z_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_accel_z_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_accel_z_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_accel_z_current_bias.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->accel_z_current_bias = u_accel_z_current_bias.real;
      offset += sizeof(this->accel_z_current_bias);
      union {
        double real;
        uint64_t base;
      } u_accel_z_initial_bias;
      u_accel_z_initial_bias.base = 0;
      u_accel_z_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_accel_z_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_accel_z_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_accel_z_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_accel_z_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_accel_z_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_accel_z_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_accel_z_initial_bias.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->accel_z_initial_bias = u_accel_z_initial_bias.real;
      offset += sizeof(this->accel_z_initial_bias);
      union {
        int32_t real;
        uint32_t base;
      } u_accel_z_update_count;
      u_accel_z_update_count.base = 0;
      u_accel_z_update_count.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_accel_z_update_count.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_accel_z_update_count.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_accel_z_update_count.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->accel_z_update_count = u_accel_z_update_count.real;
      offset += sizeof(this->accel_z_update_count);
      union {
        bool real;
        uint8_t base;
      } u_accel_z_enabled;
      u_accel_z_enabled.base = 0;
      u_accel_z_enabled.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->accel_z_enabled = u_accel_z_enabled.real;
      offset += sizeof(this->accel_z_enabled);
      union {
        double real;
        uint64_t base;
      } u_time_since_last_update;
      u_time_since_last_update.base = 0;
      u_time_since_last_update.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_time_since_last_update.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_time_since_last_update.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_time_since_last_update.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_time_since_last_update.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_time_since_last_update.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_time_since_last_update.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_time_since_last_update.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->time_since_last_update = u_time_since_last_update.real;
      offset += sizeof(this->time_since_last_update);
      union {
        bool real;
        uint8_t base;
      } u_in_stabilizing;
      u_in_stabilizing.base = 0;
      u_in_stabilizing.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->in_stabilizing = u_in_stabilizing.real;
      offset += sizeof(this->in_stabilizing);
      union {
        double real;
        uint64_t base;
      } u_stabilizing_elapsed;
      u_stabilizing_elapsed.base = 0;
      u_stabilizing_elapsed.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_stabilizing_elapsed.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_stabilizing_elapsed.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_stabilizing_elapsed.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_stabilizing_elapsed.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_stabilizing_elapsed.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_stabilizing_elapsed.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_stabilizing_elapsed.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->stabilizing_elapsed = u_stabilizing_elapsed.real;
      offset += sizeof(this->stabilizing_elapsed);
      union {
        bool real;
        uint8_t base;
      } u_fast_calib_mode;
      u_fast_calib_mode.base = 0;
      u_fast_calib_mode.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->fast_calib_mode = u_fast_calib_mode.real;
      offset += sizeof(this->fast_calib_mode);
      union {
        bool real;
        uint8_t base;
      } u_fast_calib_completed;
      u_fast_calib_completed.base = 0;
      u_fast_calib_completed.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->fast_calib_completed = u_fast_calib_completed.real;
      offset += sizeof(this->fast_calib_completed);
      union {
        double real;
        uint64_t base;
      } u_accel_norm_current;
      u_accel_norm_current.base = 0;
      u_accel_norm_current.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_accel_norm_current.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_accel_norm_current.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_accel_norm_current.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_accel_norm_current.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_accel_norm_current.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_accel_norm_current.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_accel_norm_current.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->accel_norm_current = u_accel_norm_current.real;
      offset += sizeof(this->accel_norm_current);
      union {
        double real;
        uint64_t base;
      } u_accel_norm_average;
      u_accel_norm_average.base = 0;
      u_accel_norm_average.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_accel_norm_average.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_accel_norm_average.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_accel_norm_average.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_accel_norm_average.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_accel_norm_average.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_accel_norm_average.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_accel_norm_average.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->accel_norm_average = u_accel_norm_average.real;
      offset += sizeof(this->accel_norm_average);
      union {
        bool real;
        uint8_t base;
      } u_is_accel_stable;
      u_is_accel_stable.base = 0;
      u_is_accel_stable.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->is_accel_stable = u_is_accel_stable.real;
      offset += sizeof(this->is_accel_stable);
      union {
        int32_t real;
        uint32_t base;
      } u_candidate_count;
      u_candidate_count.base = 0;
      u_candidate_count.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_candidate_count.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_candidate_count.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_candidate_count.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->candidate_count = u_candidate_count.real;
      offset += sizeof(this->candidate_count);
      union {
        double real;
        uint64_t base;
      } u_candidate_mean;
      u_candidate_mean.base = 0;
      u_candidate_mean.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_candidate_mean.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_candidate_mean.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_candidate_mean.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_candidate_mean.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_candidate_mean.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_candidate_mean.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_candidate_mean.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->candidate_mean = u_candidate_mean.real;
      offset += sizeof(this->candidate_mean);
      union {
        double real;
        uint64_t base;
      } u_candidate_stddev;
      u_candidate_stddev.base = 0;
      u_candidate_stddev.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_candidate_stddev.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_candidate_stddev.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_candidate_stddev.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_candidate_stddev.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_candidate_stddev.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_candidate_stddev.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_candidate_stddev.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->candidate_stddev = u_candidate_stddev.real;
      offset += sizeof(this->candidate_stddev);
      union {
        bool real;
        uint8_t base;
      } u_last_validation_passed;
      u_last_validation_passed.base = 0;
      u_last_validation_passed.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->last_validation_passed = u_last_validation_passed.real;
      offset += sizeof(this->last_validation_passed);
      uint32_t length_last_rejection_reason;
      arrToVar(length_last_rejection_reason, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_last_rejection_reason; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_last_rejection_reason-1]=0;
      this->last_rejection_reason = (char *)(inbuffer + offset-1);
      offset += length_last_rejection_reason;
      union {
        bool real;
        uint8_t base;
      } u_use_settling_time;
      u_use_settling_time.base = 0;
      u_use_settling_time.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->use_settling_time = u_use_settling_time.real;
      offset += sizeof(this->use_settling_time);
      union {
        bool real;
        uint8_t base;
      } u_use_accel_norm_check;
      u_use_accel_norm_check.base = 0;
      u_use_accel_norm_check.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->use_accel_norm_check = u_use_accel_norm_check.real;
      offset += sizeof(this->use_accel_norm_check);
      union {
        bool real;
        uint8_t base;
      } u_use_gyro_quietness_check;
      u_use_gyro_quietness_check.base = 0;
      u_use_gyro_quietness_check.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->use_gyro_quietness_check = u_use_gyro_quietness_check.real;
      offset += sizeof(this->use_gyro_quietness_check);
      union {
        bool real;
        uint8_t base;
      } u_use_fast_calib;
      u_use_fast_calib.base = 0;
      u_use_fast_calib.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->use_fast_calib = u_use_fast_calib.real;
      offset += sizeof(this->use_fast_calib);
      union {
        bool real;
        uint8_t base;
      } u_use_statistical_validation;
      u_use_statistical_validation.base = 0;
      u_use_statistical_validation.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->use_statistical_validation = u_use_statistical_validation.real;
      offset += sizeof(this->use_statistical_validation);
      union {
        double real;
        uint64_t base;
      } u_gravity_x;
      u_gravity_x.base = 0;
      u_gravity_x.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_gravity_x.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_gravity_x.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_gravity_x.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_gravity_x.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_gravity_x.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_gravity_x.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_gravity_x.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->gravity_x = u_gravity_x.real;
      offset += sizeof(this->gravity_x);
      union {
        double real;
        uint64_t base;
      } u_gravity_y;
      u_gravity_y.base = 0;
      u_gravity_y.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_gravity_y.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_gravity_y.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_gravity_y.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_gravity_y.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_gravity_y.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_gravity_y.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_gravity_y.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->gravity_y = u_gravity_y.real;
      offset += sizeof(this->gravity_y);
      union {
        double real;
        uint64_t base;
      } u_gravity_z;
      u_gravity_z.base = 0;
      u_gravity_z.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_gravity_z.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_gravity_z.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_gravity_z.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_gravity_z.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_gravity_z.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_gravity_z.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_gravity_z.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->gravity_z = u_gravity_z.real;
      offset += sizeof(this->gravity_z);
      union {
        double real;
        uint64_t base;
      } u_dynamic_accel_x;
      u_dynamic_accel_x.base = 0;
      u_dynamic_accel_x.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_dynamic_accel_x.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_dynamic_accel_x.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_dynamic_accel_x.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_dynamic_accel_x.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_dynamic_accel_x.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_dynamic_accel_x.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_dynamic_accel_x.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->dynamic_accel_x = u_dynamic_accel_x.real;
      offset += sizeof(this->dynamic_accel_x);
      union {
        double real;
        uint64_t base;
      } u_dynamic_accel_y;
      u_dynamic_accel_y.base = 0;
      u_dynamic_accel_y.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_dynamic_accel_y.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_dynamic_accel_y.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_dynamic_accel_y.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_dynamic_accel_y.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_dynamic_accel_y.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_dynamic_accel_y.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_dynamic_accel_y.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->dynamic_accel_y = u_dynamic_accel_y.real;
      offset += sizeof(this->dynamic_accel_y);
      union {
        double real;
        uint64_t base;
      } u_dynamic_accel_z;
      u_dynamic_accel_z.base = 0;
      u_dynamic_accel_z.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_dynamic_accel_z.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_dynamic_accel_z.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_dynamic_accel_z.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_dynamic_accel_z.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_dynamic_accel_z.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_dynamic_accel_z.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_dynamic_accel_z.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->dynamic_accel_z = u_dynamic_accel_z.real;
      offset += sizeof(this->dynamic_accel_z);
      union {
        bool real;
        uint8_t base;
      } u_candidate_selection_enabled;
      u_candidate_selection_enabled.base = 0;
      u_candidate_selection_enabled.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->candidate_selection_enabled = u_candidate_selection_enabled.real;
      offset += sizeof(this->candidate_selection_enabled);
      union {
        int32_t real;
        uint32_t base;
      } u_six_axis_candidate_count;
      u_six_axis_candidate_count.base = 0;
      u_six_axis_candidate_count.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_six_axis_candidate_count.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_six_axis_candidate_count.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_six_axis_candidate_count.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->six_axis_candidate_count = u_six_axis_candidate_count.real;
      offset += sizeof(this->six_axis_candidate_count);
      union {
        double real;
        uint64_t base;
      } u_best_candidate_score;
      u_best_candidate_score.base = 0;
      u_best_candidate_score.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_best_candidate_score.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_best_candidate_score.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_best_candidate_score.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_best_candidate_score.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_best_candidate_score.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_best_candidate_score.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_best_candidate_score.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->best_candidate_score = u_best_candidate_score.real;
      offset += sizeof(this->best_candidate_score);
      union {
        double real;
        uint64_t base;
      } u_best_candidate_age;
      u_best_candidate_age.base = 0;
      u_best_candidate_age.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_best_candidate_age.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_best_candidate_age.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_best_candidate_age.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_best_candidate_age.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_best_candidate_age.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_best_candidate_age.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_best_candidate_age.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->best_candidate_age = u_best_candidate_age.real;
      offset += sizeof(this->best_candidate_age);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/ImuBiasDebug"; };
    virtual const char * getMD5() override { return "f1427e8d88d1a5161147058ad98be449"; };

  };

}
#endif
