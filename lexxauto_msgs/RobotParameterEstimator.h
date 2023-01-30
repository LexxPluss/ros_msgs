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
      typedef float _estimated_mass_type;
      _estimated_mass_type estimated_mass;
      typedef float _estimated_mass_orig_type;
      _estimated_mass_orig_type estimated_mass_orig;
      typedef float _estimated_mass_stddev_type;
      _estimated_mass_stddev_type estimated_mass_stddev;
      typedef float _estimated_inertia_type;
      _estimated_inertia_type estimated_inertia;
      typedef float _estimated_inertia_orig_type;
      _estimated_inertia_orig_type estimated_inertia_orig;
      typedef float _estimated_inertia_stddev_type;
      _estimated_inertia_stddev_type estimated_inertia_stddev;
      typedef float _current_accel_ax_type;
      _current_accel_ax_type current_accel_ax;
      typedef float _current_accel_wz_type;
      _current_accel_wz_type current_accel_wz;
      typedef float _torque_sum_highest_weight_type;
      _torque_sum_highest_weight_type torque_sum_highest_weight;
      typedef float _torque_sum_lowest_weight_type;
      _torque_sum_lowest_weight_type torque_sum_lowest_weight;
      typedef float _torque_friction_type;
      _torque_friction_type torque_friction;
      typedef float _acc_minus_fric_type;
      _acc_minus_fric_type acc_minus_fric;
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
      torque_sum_highest_weight(0),
      torque_sum_lowest_weight(0),
      torque_friction(0),
      acc_minus_fric(0),
      param_update_mode(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += serializeAvrFloat64(outbuffer + offset, this->estimated_mass);
      offset += serializeAvrFloat64(outbuffer + offset, this->estimated_mass_orig);
      offset += serializeAvrFloat64(outbuffer + offset, this->estimated_mass_stddev);
      offset += serializeAvrFloat64(outbuffer + offset, this->estimated_inertia);
      offset += serializeAvrFloat64(outbuffer + offset, this->estimated_inertia_orig);
      offset += serializeAvrFloat64(outbuffer + offset, this->estimated_inertia_stddev);
      offset += serializeAvrFloat64(outbuffer + offset, this->current_accel_ax);
      offset += serializeAvrFloat64(outbuffer + offset, this->current_accel_wz);
      offset += serializeAvrFloat64(outbuffer + offset, this->torque_sum_highest_weight);
      offset += serializeAvrFloat64(outbuffer + offset, this->torque_sum_lowest_weight);
      offset += serializeAvrFloat64(outbuffer + offset, this->torque_friction);
      offset += serializeAvrFloat64(outbuffer + offset, this->acc_minus_fric);
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

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->estimated_mass));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->estimated_mass_orig));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->estimated_mass_stddev));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->estimated_inertia));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->estimated_inertia_orig));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->estimated_inertia_stddev));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->current_accel_ax));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->current_accel_wz));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->torque_sum_highest_weight));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->torque_sum_lowest_weight));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->torque_friction));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->acc_minus_fric));
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

    const char * getType(){ return "lexxauto_msgs/RobotParameterEstimator"; };
    const char * getMD5(){ return "f49b103dffe87fbccc18cfe9e57b3d36"; };

  };

}
#endif
