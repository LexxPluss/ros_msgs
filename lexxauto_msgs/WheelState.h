#ifndef _ROS_lexxauto_msgs_WheelState_h
#define _ROS_lexxauto_msgs_WheelState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class WheelState : public ros::Msg
  {
    public:
      typedef double _eff_input_type;
      _eff_input_type eff_input;
      typedef double _pos_state_type;
      _pos_state_type pos_state;
      typedef double _vel_state_type;
      _vel_state_type vel_state;
      typedef double _eff_state_type;
      _eff_state_type eff_state;

    WheelState():
      eff_input(0),
      pos_state(0),
      vel_state(0),
      eff_state(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_eff_input;
      u_eff_input.real = this->eff_input;
      *(outbuffer + offset + 0) = (u_eff_input.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_eff_input.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_eff_input.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_eff_input.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_eff_input.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_eff_input.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_eff_input.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_eff_input.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->eff_input);
      union {
        double real;
        uint64_t base;
      } u_pos_state;
      u_pos_state.real = this->pos_state;
      *(outbuffer + offset + 0) = (u_pos_state.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pos_state.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pos_state.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pos_state.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pos_state.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pos_state.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pos_state.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pos_state.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pos_state);
      union {
        double real;
        uint64_t base;
      } u_vel_state;
      u_vel_state.real = this->vel_state;
      *(outbuffer + offset + 0) = (u_vel_state.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_vel_state.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_vel_state.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_vel_state.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_vel_state.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_vel_state.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_vel_state.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_vel_state.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->vel_state);
      union {
        double real;
        uint64_t base;
      } u_eff_state;
      u_eff_state.real = this->eff_state;
      *(outbuffer + offset + 0) = (u_eff_state.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_eff_state.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_eff_state.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_eff_state.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_eff_state.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_eff_state.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_eff_state.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_eff_state.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->eff_state);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        double real;
        uint64_t base;
      } u_eff_input;
      u_eff_input.base = 0;
      u_eff_input.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_eff_input.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_eff_input.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_eff_input.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_eff_input.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_eff_input.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_eff_input.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_eff_input.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->eff_input = u_eff_input.real;
      offset += sizeof(this->eff_input);
      union {
        double real;
        uint64_t base;
      } u_pos_state;
      u_pos_state.base = 0;
      u_pos_state.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pos_state.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pos_state.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pos_state.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_pos_state.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_pos_state.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_pos_state.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_pos_state.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->pos_state = u_pos_state.real;
      offset += sizeof(this->pos_state);
      union {
        double real;
        uint64_t base;
      } u_vel_state;
      u_vel_state.base = 0;
      u_vel_state.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_vel_state.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_vel_state.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_vel_state.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_vel_state.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_vel_state.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_vel_state.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_vel_state.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->vel_state = u_vel_state.real;
      offset += sizeof(this->vel_state);
      union {
        double real;
        uint64_t base;
      } u_eff_state;
      u_eff_state.base = 0;
      u_eff_state.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_eff_state.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_eff_state.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_eff_state.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_eff_state.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_eff_state.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_eff_state.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_eff_state.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->eff_state = u_eff_state.real;
      offset += sizeof(this->eff_state);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/WheelState"; };
    virtual const char * getMD5() override { return "99443b445525cf30c997e36848e9e34b"; };

  };

}
#endif
