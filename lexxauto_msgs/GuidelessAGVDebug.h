#ifndef _ROS_lexxauto_msgs_GuidelessAGVDebug_h
#define _ROS_lexxauto_msgs_GuidelessAGVDebug_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace lexxauto_msgs
{

  class GuidelessAGVDebug : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef int32_t _status_type;
      _status_type status;
      typedef int32_t _goal_id_type;
      _goal_id_type goal_id;
      typedef int32_t _target_id_type;
      _target_id_type target_id;
      typedef double _lat_err_type;
      _lat_err_type lat_err;
      typedef double _yaw_err_type;
      _yaw_err_type yaw_err;
      typedef double _i_lat_err_type;
      _i_lat_err_type i_lat_err;
      typedef double _i_yaw_err_type;
      _i_yaw_err_type i_yaw_err;
      typedef double _goal2robot_x_err_type;
      _goal2robot_x_err_type goal2robot_x_err;
      typedef double _goal2robot_y_err_type;
      _goal2robot_y_err_type goal2robot_y_err;

    GuidelessAGVDebug():
      header(),
      status(0),
      goal_id(0),
      target_id(0),
      lat_err(0),
      yaw_err(0),
      i_lat_err(0),
      i_yaw_err(0),
      goal2robot_x_err(0),
      goal2robot_y_err(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        int32_t real;
        uint32_t base;
      } u_status;
      u_status.real = this->status;
      *(outbuffer + offset + 0) = (u_status.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_status.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_status.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_status.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->status);
      union {
        int32_t real;
        uint32_t base;
      } u_goal_id;
      u_goal_id.real = this->goal_id;
      *(outbuffer + offset + 0) = (u_goal_id.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_goal_id.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_goal_id.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_goal_id.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->goal_id);
      union {
        int32_t real;
        uint32_t base;
      } u_target_id;
      u_target_id.real = this->target_id;
      *(outbuffer + offset + 0) = (u_target_id.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_target_id.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_target_id.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_target_id.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->target_id);
      union {
        double real;
        uint64_t base;
      } u_lat_err;
      u_lat_err.real = this->lat_err;
      *(outbuffer + offset + 0) = (u_lat_err.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_lat_err.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_lat_err.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_lat_err.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_lat_err.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_lat_err.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_lat_err.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_lat_err.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->lat_err);
      union {
        double real;
        uint64_t base;
      } u_yaw_err;
      u_yaw_err.real = this->yaw_err;
      *(outbuffer + offset + 0) = (u_yaw_err.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_yaw_err.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_yaw_err.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_yaw_err.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_yaw_err.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_yaw_err.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_yaw_err.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_yaw_err.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->yaw_err);
      union {
        double real;
        uint64_t base;
      } u_i_lat_err;
      u_i_lat_err.real = this->i_lat_err;
      *(outbuffer + offset + 0) = (u_i_lat_err.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_i_lat_err.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_i_lat_err.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_i_lat_err.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_i_lat_err.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_i_lat_err.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_i_lat_err.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_i_lat_err.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->i_lat_err);
      union {
        double real;
        uint64_t base;
      } u_i_yaw_err;
      u_i_yaw_err.real = this->i_yaw_err;
      *(outbuffer + offset + 0) = (u_i_yaw_err.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_i_yaw_err.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_i_yaw_err.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_i_yaw_err.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_i_yaw_err.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_i_yaw_err.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_i_yaw_err.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_i_yaw_err.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->i_yaw_err);
      union {
        double real;
        uint64_t base;
      } u_goal2robot_x_err;
      u_goal2robot_x_err.real = this->goal2robot_x_err;
      *(outbuffer + offset + 0) = (u_goal2robot_x_err.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_goal2robot_x_err.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_goal2robot_x_err.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_goal2robot_x_err.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_goal2robot_x_err.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_goal2robot_x_err.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_goal2robot_x_err.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_goal2robot_x_err.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->goal2robot_x_err);
      union {
        double real;
        uint64_t base;
      } u_goal2robot_y_err;
      u_goal2robot_y_err.real = this->goal2robot_y_err;
      *(outbuffer + offset + 0) = (u_goal2robot_y_err.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_goal2robot_y_err.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_goal2robot_y_err.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_goal2robot_y_err.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_goal2robot_y_err.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_goal2robot_y_err.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_goal2robot_y_err.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_goal2robot_y_err.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->goal2robot_y_err);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        int32_t real;
        uint32_t base;
      } u_status;
      u_status.base = 0;
      u_status.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_status.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_status.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_status.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->status = u_status.real;
      offset += sizeof(this->status);
      union {
        int32_t real;
        uint32_t base;
      } u_goal_id;
      u_goal_id.base = 0;
      u_goal_id.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_goal_id.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_goal_id.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_goal_id.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->goal_id = u_goal_id.real;
      offset += sizeof(this->goal_id);
      union {
        int32_t real;
        uint32_t base;
      } u_target_id;
      u_target_id.base = 0;
      u_target_id.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_target_id.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_target_id.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_target_id.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->target_id = u_target_id.real;
      offset += sizeof(this->target_id);
      union {
        double real;
        uint64_t base;
      } u_lat_err;
      u_lat_err.base = 0;
      u_lat_err.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_lat_err.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_lat_err.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_lat_err.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_lat_err.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_lat_err.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_lat_err.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_lat_err.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->lat_err = u_lat_err.real;
      offset += sizeof(this->lat_err);
      union {
        double real;
        uint64_t base;
      } u_yaw_err;
      u_yaw_err.base = 0;
      u_yaw_err.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_yaw_err.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_yaw_err.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_yaw_err.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_yaw_err.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_yaw_err.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_yaw_err.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_yaw_err.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->yaw_err = u_yaw_err.real;
      offset += sizeof(this->yaw_err);
      union {
        double real;
        uint64_t base;
      } u_i_lat_err;
      u_i_lat_err.base = 0;
      u_i_lat_err.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_i_lat_err.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_i_lat_err.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_i_lat_err.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_i_lat_err.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_i_lat_err.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_i_lat_err.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_i_lat_err.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->i_lat_err = u_i_lat_err.real;
      offset += sizeof(this->i_lat_err);
      union {
        double real;
        uint64_t base;
      } u_i_yaw_err;
      u_i_yaw_err.base = 0;
      u_i_yaw_err.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_i_yaw_err.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_i_yaw_err.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_i_yaw_err.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_i_yaw_err.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_i_yaw_err.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_i_yaw_err.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_i_yaw_err.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->i_yaw_err = u_i_yaw_err.real;
      offset += sizeof(this->i_yaw_err);
      union {
        double real;
        uint64_t base;
      } u_goal2robot_x_err;
      u_goal2robot_x_err.base = 0;
      u_goal2robot_x_err.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_goal2robot_x_err.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_goal2robot_x_err.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_goal2robot_x_err.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_goal2robot_x_err.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_goal2robot_x_err.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_goal2robot_x_err.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_goal2robot_x_err.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->goal2robot_x_err = u_goal2robot_x_err.real;
      offset += sizeof(this->goal2robot_x_err);
      union {
        double real;
        uint64_t base;
      } u_goal2robot_y_err;
      u_goal2robot_y_err.base = 0;
      u_goal2robot_y_err.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_goal2robot_y_err.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_goal2robot_y_err.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_goal2robot_y_err.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_goal2robot_y_err.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_goal2robot_y_err.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_goal2robot_y_err.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_goal2robot_y_err.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->goal2robot_y_err = u_goal2robot_y_err.real;
      offset += sizeof(this->goal2robot_y_err);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/GuidelessAGVDebug"; };
    virtual const char * getMD5() override { return "3742b30f7e3e594e43abd61bf052d747"; };

  };

}
#endif
