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
      typedef float _measured_vel_type;
      _measured_vel_type measured_vel;
      typedef float _measured_eff_type;
      _measured_eff_type measured_eff;
      typedef float _ref_vel_type;
      _ref_vel_type ref_vel;
      typedef float _p_eff_type;
      _p_eff_type p_eff;
      typedef float _i_eff_type;
      _i_eff_type i_eff;
      typedef float _d_eff_type;
      _d_eff_type d_eff;
      typedef float _cmd_eff_type;
      _cmd_eff_type cmd_eff;
      typedef float _raw_cmd_eff_type;
      _raw_cmd_eff_type raw_cmd_eff;
      typedef float _cmd_vel_type;
      _cmd_vel_type cmd_vel;
      typedef float _raw_acc_type;
      _raw_acc_type raw_acc;
      typedef float _vel_timestamp_type;
      _vel_timestamp_type vel_timestamp;

    DiffDriveEffortControllerSideState():
      measured_vel(0),
      measured_eff(0),
      ref_vel(0),
      p_eff(0),
      i_eff(0),
      d_eff(0),
      cmd_eff(0),
      raw_cmd_eff(0),
      cmd_vel(0),
      raw_acc(0),
      vel_timestamp(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += serializeAvrFloat64(outbuffer + offset, this->measured_vel);
      offset += serializeAvrFloat64(outbuffer + offset, this->measured_eff);
      offset += serializeAvrFloat64(outbuffer + offset, this->ref_vel);
      offset += serializeAvrFloat64(outbuffer + offset, this->p_eff);
      offset += serializeAvrFloat64(outbuffer + offset, this->i_eff);
      offset += serializeAvrFloat64(outbuffer + offset, this->d_eff);
      offset += serializeAvrFloat64(outbuffer + offset, this->cmd_eff);
      offset += serializeAvrFloat64(outbuffer + offset, this->raw_cmd_eff);
      offset += serializeAvrFloat64(outbuffer + offset, this->cmd_vel);
      offset += serializeAvrFloat64(outbuffer + offset, this->raw_acc);
      offset += serializeAvrFloat64(outbuffer + offset, this->vel_timestamp);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->measured_vel));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->measured_eff));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->ref_vel));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->p_eff));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->i_eff));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->d_eff));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->cmd_eff));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->raw_cmd_eff));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->cmd_vel));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->raw_acc));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->vel_timestamp));
     return offset;
    }

    const char * getType(){ return "lexxauto_msgs/DiffDriveEffortControllerSideState"; };
    const char * getMD5(){ return "56670bc1d3586fb80fd0bb0238ee336e"; };

  };

}
#endif
