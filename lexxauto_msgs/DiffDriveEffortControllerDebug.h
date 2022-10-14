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
      uint32_t estimated_param_length;
      typedef float _estimated_param_type;
      _estimated_param_type st_estimated_param;
      _estimated_param_type * estimated_param;
      uint32_t estimated_param_variance_length;
      typedef float _estimated_param_variance_type;
      _estimated_param_variance_type st_estimated_param_variance;
      _estimated_param_variance_type * estimated_param_variance;

    DiffDriveEffortControllerDebug():
      cmd_vel_raw(),
      cmd_vel_filtered(),
      cmd_vel_scaled(),
      measured_twist_filtered(),
      right_state(),
      left_state(),
      estimated_param_length(0), estimated_param(NULL),
      estimated_param_variance_length(0), estimated_param_variance(NULL)
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
      *(outbuffer + offset + 0) = (this->estimated_param_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->estimated_param_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->estimated_param_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->estimated_param_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->estimated_param_length);
      for( uint32_t i = 0; i < estimated_param_length; i++){
      offset += serializeAvrFloat64(outbuffer + offset, this->estimated_param[i]);
      }
      *(outbuffer + offset + 0) = (this->estimated_param_variance_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->estimated_param_variance_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->estimated_param_variance_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->estimated_param_variance_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->estimated_param_variance_length);
      for( uint32_t i = 0; i < estimated_param_variance_length; i++){
      offset += serializeAvrFloat64(outbuffer + offset, this->estimated_param_variance[i]);
      }
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
      uint32_t estimated_param_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      estimated_param_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      estimated_param_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      estimated_param_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->estimated_param_length);
      if(estimated_param_lengthT > estimated_param_length)
        this->estimated_param = (float*)realloc(this->estimated_param, estimated_param_lengthT * sizeof(float));
      estimated_param_length = estimated_param_lengthT;
      for( uint32_t i = 0; i < estimated_param_length; i++){
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->st_estimated_param));
        memcpy( &(this->estimated_param[i]), &(this->st_estimated_param), sizeof(float));
      }
      uint32_t estimated_param_variance_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      estimated_param_variance_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      estimated_param_variance_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      estimated_param_variance_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->estimated_param_variance_length);
      if(estimated_param_variance_lengthT > estimated_param_variance_length)
        this->estimated_param_variance = (float*)realloc(this->estimated_param_variance, estimated_param_variance_lengthT * sizeof(float));
      estimated_param_variance_length = estimated_param_variance_lengthT;
      for( uint32_t i = 0; i < estimated_param_variance_length; i++){
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->st_estimated_param_variance));
        memcpy( &(this->estimated_param_variance[i]), &(this->st_estimated_param_variance), sizeof(float));
      }
     return offset;
    }

    const char * getType(){ return "lexxauto_msgs/DiffDriveEffortControllerDebug"; };
    const char * getMD5(){ return "f7080fc1d2a50c439143914f20d62637"; };

  };

}
#endif
