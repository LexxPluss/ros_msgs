#ifndef _ROS_lexxauto_msgs_DiffDriveEffortControllerDebug_h
#define _ROS_lexxauto_msgs_DiffDriveEffortControllerDebug_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "lexxauto_msgs/DiffDriveEffortControllerSideState.h"

namespace lexxauto_msgs
{

  class DiffDriveEffortControllerDebug : public ros::Msg
  {
    public:
      typedef float _vx_cmd_vel_type;
      _vx_cmd_vel_type vx_cmd_vel;
      typedef float _wz_cmd_vel_type;
      _wz_cmd_vel_type wz_cmd_vel;
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
      vx_cmd_vel(0),
      wz_cmd_vel(0),
      right_state(),
      left_state(),
      estimated_param_length(0), estimated_param(NULL),
      estimated_param_variance_length(0), estimated_param_variance(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += serializeAvrFloat64(outbuffer + offset, this->vx_cmd_vel);
      offset += serializeAvrFloat64(outbuffer + offset, this->wz_cmd_vel);
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
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->vx_cmd_vel));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->wz_cmd_vel));
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
    const char * getMD5(){ return "649cb27cdf5698c9c1ba007ba463febb"; };

  };

}
#endif
