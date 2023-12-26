#ifndef _ROS_lexxauto_msgs_RobotParameterEstimator_h
#define _ROS_lexxauto_msgs_RobotParameterEstimator_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class RobotParameterEstimator : public ros::Msg
  {
    public:
      typedef double _estimated_mass_type;
      _estimated_mass_type estimated_mass;
      typedef double _estimated_mass_orig_type;
      _estimated_mass_orig_type estimated_mass_orig;
      typedef double _estimated_mass_stddev_type;
      _estimated_mass_stddev_type estimated_mass_stddev;
      typedef double _estimated_inertia_type;
      _estimated_inertia_type estimated_inertia;
      typedef double _estimated_inertia_orig_type;
      _estimated_inertia_orig_type estimated_inertia_orig;
      typedef double _estimated_inertia_stddev_type;
      _estimated_inertia_stddev_type estimated_inertia_stddev;
      typedef double _current_accel_ax_type;
      _current_accel_ax_type current_accel_ax;
      typedef double _current_accel_wz_type;
      _current_accel_wz_type current_accel_wz;
      typedef double _a1_type;
      _a1_type a1;
      typedef double _b1_type;
      _b1_type b1;
      typedef double _a2_type;
      _a2_type a2;
      typedef double _b2_type;
      _b2_type b2;
      typedef int32_t _param_update_mode_type;
      _param_update_mode_type param_update_mode;

    RobotParameterEstimator():
      estimated_mass(0),
      estimated_mass_orig(0),
      estimated_mass_stddev(0),
      estimated_inertia(0),
      estimated_inertia_orig(0),
      estimated_inertia_stddev(0),
      current_accel_ax(0),
      current_accel_wz(0),
      a1(0),
      b1(0),
      a2(0),
      b2(0),
      param_update_mode(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_estimated_mass;
      u_estimated_mass.real = this->estimated_mass;
      *(outbuffer + offset + 0) = (u_estimated_mass.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_estimated_mass.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_estimated_mass.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_estimated_mass.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_estimated_mass.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_estimated_mass.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_estimated_mass.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_estimated_mass.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->estimated_mass);
      union {
        double real;
        uint64_t base;
      } u_estimated_mass_orig;
      u_estimated_mass_orig.real = this->estimated_mass_orig;
      *(outbuffer + offset + 0) = (u_estimated_mass_orig.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_estimated_mass_orig.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_estimated_mass_orig.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_estimated_mass_orig.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_estimated_mass_orig.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_estimated_mass_orig.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_estimated_mass_orig.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_estimated_mass_orig.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->estimated_mass_orig);
      union {
        double real;
        uint64_t base;
      } u_estimated_mass_stddev;
      u_estimated_mass_stddev.real = this->estimated_mass_stddev;
      *(outbuffer + offset + 0) = (u_estimated_mass_stddev.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_estimated_mass_stddev.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_estimated_mass_stddev.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_estimated_mass_stddev.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_estimated_mass_stddev.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_estimated_mass_stddev.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_estimated_mass_stddev.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_estimated_mass_stddev.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->estimated_mass_stddev);
      union {
        double real;
        uint64_t base;
      } u_estimated_inertia;
      u_estimated_inertia.real = this->estimated_inertia;
      *(outbuffer + offset + 0) = (u_estimated_inertia.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_estimated_inertia.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_estimated_inertia.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_estimated_inertia.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_estimated_inertia.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_estimated_inertia.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_estimated_inertia.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_estimated_inertia.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->estimated_inertia);
      union {
        double real;
        uint64_t base;
      } u_estimated_inertia_orig;
      u_estimated_inertia_orig.real = this->estimated_inertia_orig;
      *(outbuffer + offset + 0) = (u_estimated_inertia_orig.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_estimated_inertia_orig.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_estimated_inertia_orig.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_estimated_inertia_orig.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_estimated_inertia_orig.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_estimated_inertia_orig.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_estimated_inertia_orig.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_estimated_inertia_orig.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->estimated_inertia_orig);
      union {
        double real;
        uint64_t base;
      } u_estimated_inertia_stddev;
      u_estimated_inertia_stddev.real = this->estimated_inertia_stddev;
      *(outbuffer + offset + 0) = (u_estimated_inertia_stddev.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_estimated_inertia_stddev.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_estimated_inertia_stddev.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_estimated_inertia_stddev.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_estimated_inertia_stddev.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_estimated_inertia_stddev.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_estimated_inertia_stddev.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_estimated_inertia_stddev.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->estimated_inertia_stddev);
      union {
        double real;
        uint64_t base;
      } u_current_accel_ax;
      u_current_accel_ax.real = this->current_accel_ax;
      *(outbuffer + offset + 0) = (u_current_accel_ax.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_current_accel_ax.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_current_accel_ax.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_current_accel_ax.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_current_accel_ax.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_current_accel_ax.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_current_accel_ax.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_current_accel_ax.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->current_accel_ax);
      union {
        double real;
        uint64_t base;
      } u_current_accel_wz;
      u_current_accel_wz.real = this->current_accel_wz;
      *(outbuffer + offset + 0) = (u_current_accel_wz.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_current_accel_wz.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_current_accel_wz.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_current_accel_wz.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_current_accel_wz.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_current_accel_wz.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_current_accel_wz.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_current_accel_wz.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->current_accel_wz);
      union {
        double real;
        uint64_t base;
      } u_a1;
      u_a1.real = this->a1;
      *(outbuffer + offset + 0) = (u_a1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_a1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_a1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_a1.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_a1.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_a1.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_a1.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_a1.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->a1);
      union {
        double real;
        uint64_t base;
      } u_b1;
      u_b1.real = this->b1;
      *(outbuffer + offset + 0) = (u_b1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_b1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_b1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_b1.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_b1.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_b1.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_b1.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_b1.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->b1);
      union {
        double real;
        uint64_t base;
      } u_a2;
      u_a2.real = this->a2;
      *(outbuffer + offset + 0) = (u_a2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_a2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_a2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_a2.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_a2.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_a2.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_a2.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_a2.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->a2);
      union {
        double real;
        uint64_t base;
      } u_b2;
      u_b2.real = this->b2;
      *(outbuffer + offset + 0) = (u_b2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_b2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_b2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_b2.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_b2.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_b2.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_b2.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_b2.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->b2);
      union {
        int32_t real;
        uint32_t base;
      } u_param_update_mode;
      u_param_update_mode.real = this->param_update_mode;
      *(outbuffer + offset + 0) = (u_param_update_mode.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_param_update_mode.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_param_update_mode.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_param_update_mode.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->param_update_mode);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_estimated_mass;
      u_estimated_mass.base = 0;
      u_estimated_mass.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_estimated_mass.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_estimated_mass.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_estimated_mass.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_estimated_mass.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_estimated_mass.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_estimated_mass.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_estimated_mass.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->estimated_mass = u_estimated_mass.real;
      offset += sizeof(this->estimated_mass);
      union {
        double real;
        uint64_t base;
      } u_estimated_mass_orig;
      u_estimated_mass_orig.base = 0;
      u_estimated_mass_orig.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_estimated_mass_orig.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_estimated_mass_orig.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_estimated_mass_orig.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_estimated_mass_orig.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_estimated_mass_orig.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_estimated_mass_orig.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_estimated_mass_orig.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->estimated_mass_orig = u_estimated_mass_orig.real;
      offset += sizeof(this->estimated_mass_orig);
      union {
        double real;
        uint64_t base;
      } u_estimated_mass_stddev;
      u_estimated_mass_stddev.base = 0;
      u_estimated_mass_stddev.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_estimated_mass_stddev.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_estimated_mass_stddev.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_estimated_mass_stddev.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_estimated_mass_stddev.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_estimated_mass_stddev.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_estimated_mass_stddev.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_estimated_mass_stddev.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->estimated_mass_stddev = u_estimated_mass_stddev.real;
      offset += sizeof(this->estimated_mass_stddev);
      union {
        double real;
        uint64_t base;
      } u_estimated_inertia;
      u_estimated_inertia.base = 0;
      u_estimated_inertia.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_estimated_inertia.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_estimated_inertia.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_estimated_inertia.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_estimated_inertia.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_estimated_inertia.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_estimated_inertia.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_estimated_inertia.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->estimated_inertia = u_estimated_inertia.real;
      offset += sizeof(this->estimated_inertia);
      union {
        double real;
        uint64_t base;
      } u_estimated_inertia_orig;
      u_estimated_inertia_orig.base = 0;
      u_estimated_inertia_orig.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_estimated_inertia_orig.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_estimated_inertia_orig.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_estimated_inertia_orig.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_estimated_inertia_orig.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_estimated_inertia_orig.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_estimated_inertia_orig.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_estimated_inertia_orig.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->estimated_inertia_orig = u_estimated_inertia_orig.real;
      offset += sizeof(this->estimated_inertia_orig);
      union {
        double real;
        uint64_t base;
      } u_estimated_inertia_stddev;
      u_estimated_inertia_stddev.base = 0;
      u_estimated_inertia_stddev.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_estimated_inertia_stddev.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_estimated_inertia_stddev.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_estimated_inertia_stddev.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_estimated_inertia_stddev.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_estimated_inertia_stddev.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_estimated_inertia_stddev.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_estimated_inertia_stddev.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->estimated_inertia_stddev = u_estimated_inertia_stddev.real;
      offset += sizeof(this->estimated_inertia_stddev);
      union {
        double real;
        uint64_t base;
      } u_current_accel_ax;
      u_current_accel_ax.base = 0;
      u_current_accel_ax.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_current_accel_ax.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_current_accel_ax.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_current_accel_ax.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_current_accel_ax.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_current_accel_ax.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_current_accel_ax.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_current_accel_ax.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->current_accel_ax = u_current_accel_ax.real;
      offset += sizeof(this->current_accel_ax);
      union {
        double real;
        uint64_t base;
      } u_current_accel_wz;
      u_current_accel_wz.base = 0;
      u_current_accel_wz.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_current_accel_wz.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_current_accel_wz.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_current_accel_wz.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_current_accel_wz.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_current_accel_wz.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_current_accel_wz.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_current_accel_wz.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->current_accel_wz = u_current_accel_wz.real;
      offset += sizeof(this->current_accel_wz);
      union {
        double real;
        uint64_t base;
      } u_a1;
      u_a1.base = 0;
      u_a1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_a1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_a1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_a1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_a1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_a1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_a1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_a1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->a1 = u_a1.real;
      offset += sizeof(this->a1);
      union {
        double real;
        uint64_t base;
      } u_b1;
      u_b1.base = 0;
      u_b1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_b1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_b1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_b1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_b1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_b1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_b1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_b1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->b1 = u_b1.real;
      offset += sizeof(this->b1);
      union {
        double real;
        uint64_t base;
      } u_a2;
      u_a2.base = 0;
      u_a2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_a2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_a2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_a2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_a2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_a2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_a2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_a2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->a2 = u_a2.real;
      offset += sizeof(this->a2);
      union {
        double real;
        uint64_t base;
      } u_b2;
      u_b2.base = 0;
      u_b2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_b2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_b2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_b2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_b2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_b2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_b2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_b2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->b2 = u_b2.real;
      offset += sizeof(this->b2);
      union {
        int32_t real;
        uint32_t base;
      } u_param_update_mode;
      u_param_update_mode.base = 0;
      u_param_update_mode.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_param_update_mode.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_param_update_mode.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_param_update_mode.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->param_update_mode = u_param_update_mode.real;
      offset += sizeof(this->param_update_mode);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/RobotParameterEstimator"; };
    virtual const char * getMD5() override { return "368fc013414cdd365a8494b8c33fd7f5"; };

  };

}
#endif
