#ifndef _ROS_lexxauto_msgs_CmdVelControllerSideState_h
#define _ROS_lexxauto_msgs_CmdVelControllerSideState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class CmdVelControllerSideState : public ros::Msg
  {
    public:
      typedef double _measured_timestamp_type;
      _measured_timestamp_type measured_timestamp;
      typedef double _measured_vel_type;
      _measured_vel_type measured_vel;
      typedef double _cmd_vel_raw_type;
      _cmd_vel_raw_type cmd_vel_raw;
      typedef double _cmd_vel_filtered_type;
      _cmd_vel_filtered_type cmd_vel_filtered;

    CmdVelControllerSideState():
      measured_timestamp(0),
      measured_vel(0),
      cmd_vel_raw(0),
      cmd_vel_filtered(0)
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
      } u_measured_vel;
      u_measured_vel.real = this->measured_vel;
      *(outbuffer + offset + 0) = (u_measured_vel.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_measured_vel.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_measured_vel.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_measured_vel.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_measured_vel.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_measured_vel.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_measured_vel.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_measured_vel.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->measured_vel);
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
      } u_measured_vel;
      u_measured_vel.base = 0;
      u_measured_vel.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_measured_vel.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_measured_vel.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_measured_vel.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_measured_vel.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_measured_vel.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_measured_vel.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_measured_vel.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->measured_vel = u_measured_vel.real;
      offset += sizeof(this->measured_vel);
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
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/CmdVelControllerSideState"; };
    virtual const char * getMD5() override { return "f29178c141a62f457d439e1c9693a812"; };

  };

}
#endif
