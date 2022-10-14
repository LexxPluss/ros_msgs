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
      typedef float _measured_timestamp_type;
      _measured_timestamp_type measured_timestamp;
      typedef float _measured_vel_raw_type;
      _measured_vel_raw_type measured_vel_raw;
      typedef float _measured_vel_filtered_type;
      _measured_vel_filtered_type measured_vel_filtered;
      typedef float _measured_eff_type;
      _measured_eff_type measured_eff;
      typedef float _measured_vel_for_pid_type;
      _measured_vel_for_pid_type measured_vel_for_pid;
      typedef float _cmd_vel_raw_type;
      _cmd_vel_raw_type cmd_vel_raw;
      typedef float _cmd_vel_filtered_type;
      _cmd_vel_filtered_type cmd_vel_filtered;
      typedef float _cmd_vel_scaled_type;
      _cmd_vel_scaled_type cmd_vel_scaled;
      typedef float _cmd_vel_for_pid_type;
      _cmd_vel_for_pid_type cmd_vel_for_pid;
      typedef float _p_eff_type;
      _p_eff_type p_eff;
      typedef float _i_eff_type;
      _i_eff_type i_eff;
      typedef float _d_eff_type;
      _d_eff_type d_eff;
      typedef float _ff_eff_type;
      _ff_eff_type ff_eff;
      typedef float _ff_static_fric_eff_type;
      _ff_static_fric_eff_type ff_static_fric_eff;
      typedef float _raw_cmd_eff_type;
      _raw_cmd_eff_type raw_cmd_eff;
      typedef float _cmd_eff_type;
      _cmd_eff_type cmd_eff;

    DiffDriveEffortControllerSideState():
      measured_timestamp(0),
      measured_vel_raw(0),
      measured_vel_filtered(0),
      measured_eff(0),
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
      cmd_eff(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += serializeAvrFloat64(outbuffer + offset, this->measured_timestamp);
      offset += serializeAvrFloat64(outbuffer + offset, this->measured_vel_raw);
      offset += serializeAvrFloat64(outbuffer + offset, this->measured_vel_filtered);
      offset += serializeAvrFloat64(outbuffer + offset, this->measured_eff);
      offset += serializeAvrFloat64(outbuffer + offset, this->measured_vel_for_pid);
      offset += serializeAvrFloat64(outbuffer + offset, this->cmd_vel_raw);
      offset += serializeAvrFloat64(outbuffer + offset, this->cmd_vel_filtered);
      offset += serializeAvrFloat64(outbuffer + offset, this->cmd_vel_scaled);
      offset += serializeAvrFloat64(outbuffer + offset, this->cmd_vel_for_pid);
      offset += serializeAvrFloat64(outbuffer + offset, this->p_eff);
      offset += serializeAvrFloat64(outbuffer + offset, this->i_eff);
      offset += serializeAvrFloat64(outbuffer + offset, this->d_eff);
      offset += serializeAvrFloat64(outbuffer + offset, this->ff_eff);
      offset += serializeAvrFloat64(outbuffer + offset, this->ff_static_fric_eff);
      offset += serializeAvrFloat64(outbuffer + offset, this->raw_cmd_eff);
      offset += serializeAvrFloat64(outbuffer + offset, this->cmd_eff);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->measured_timestamp));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->measured_vel_raw));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->measured_vel_filtered));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->measured_eff));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->measured_vel_for_pid));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->cmd_vel_raw));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->cmd_vel_filtered));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->cmd_vel_scaled));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->cmd_vel_for_pid));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->p_eff));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->i_eff));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->d_eff));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->ff_eff));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->ff_static_fric_eff));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->raw_cmd_eff));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->cmd_eff));
     return offset;
    }

    const char * getType(){ return "lexxauto_msgs/DiffDriveEffortControllerSideState"; };
    const char * getMD5(){ return "8f2a81319576e96fbca9d946c7ffc4ea"; };

  };

}
#endif
