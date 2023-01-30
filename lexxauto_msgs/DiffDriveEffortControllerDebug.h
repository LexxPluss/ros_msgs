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
      typedef float _adaptive_p_gain_type;
      _adaptive_p_gain_type adaptive_p_gain;
      typedef float _adaptive_ff_type;
      _adaptive_ff_type adaptive_ff;
      typedef float _adaptive_static_ff_type;
      _adaptive_static_ff_type adaptive_static_ff;
      typedef float _adaptive_wz_scale_type;
      _adaptive_wz_scale_type adaptive_wz_scale;
      typedef float _adaptive_max_torque_type;
      _adaptive_max_torque_type adaptive_max_torque;
      typedef float _adaptive_min_torque_type;
      _adaptive_min_torque_type adaptive_min_torque;

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
      adaptive_min_torque(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->cmd_vel_raw.serialize(outbuffer + offset);
      offset += this->cmd_vel_filtered.serialize(outbuffer + offset);
      offset += this->cmd_vel_scaled.serialize(outbuffer + offset);
      offset += this->measured_twist_filtered.serialize(outbuffer + offset);
      offset += this->right_state.serialize(outbuffer + offset);
      offset += this->left_state.serialize(outbuffer + offset);
      offset += serializeAvrFloat64(outbuffer + offset, this->adaptive_p_gain);
      offset += serializeAvrFloat64(outbuffer + offset, this->adaptive_ff);
      offset += serializeAvrFloat64(outbuffer + offset, this->adaptive_static_ff);
      offset += serializeAvrFloat64(outbuffer + offset, this->adaptive_wz_scale);
      offset += serializeAvrFloat64(outbuffer + offset, this->adaptive_max_torque);
      offset += serializeAvrFloat64(outbuffer + offset, this->adaptive_min_torque);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->cmd_vel_raw.deserialize(inbuffer + offset);
      offset += this->cmd_vel_filtered.deserialize(inbuffer + offset);
      offset += this->cmd_vel_scaled.deserialize(inbuffer + offset);
      offset += this->measured_twist_filtered.deserialize(inbuffer + offset);
      offset += this->right_state.deserialize(inbuffer + offset);
      offset += this->left_state.deserialize(inbuffer + offset);
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->adaptive_p_gain));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->adaptive_ff));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->adaptive_static_ff));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->adaptive_wz_scale));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->adaptive_max_torque));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->adaptive_min_torque));
     return offset;
    }

    const char * getType(){ return "lexxauto_msgs/DiffDriveEffortControllerDebug"; };
    const char * getMD5(){ return "5689093cea4053a0b72d5db2d3538474"; };

  };

}
#endif
