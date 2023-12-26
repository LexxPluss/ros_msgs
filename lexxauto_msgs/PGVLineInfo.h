#ifndef _ROS_lexxauto_msgs_PGVLineInfo_h
#define _ROS_lexxauto_msgs_PGVLineInfo_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class PGVLineInfo : public ros::Msg
  {
    public:
      typedef float _start_tape_coordinate_x_type;
      _start_tape_coordinate_x_type start_tape_coordinate_x;
      typedef float _end_tape_coordinate_x_type;
      _end_tape_coordinate_x_type end_tape_coordinate_x;
      typedef float _start_map_coordinate_x_type;
      _start_map_coordinate_x_type start_map_coordinate_x;
      typedef float _start_map_coordinate_y_type;
      _start_map_coordinate_y_type start_map_coordinate_y;
      typedef float _end_map_coordinate_x_type;
      _end_map_coordinate_x_type end_map_coordinate_x;
      typedef float _end_map_coordinate_y_type;
      _end_map_coordinate_y_type end_map_coordinate_y;

    PGVLineInfo():
      start_tape_coordinate_x(0),
      end_tape_coordinate_x(0),
      start_map_coordinate_x(0),
      start_map_coordinate_y(0),
      end_map_coordinate_x(0),
      end_map_coordinate_y(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_start_tape_coordinate_x;
      u_start_tape_coordinate_x.real = this->start_tape_coordinate_x;
      *(outbuffer + offset + 0) = (u_start_tape_coordinate_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_start_tape_coordinate_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_start_tape_coordinate_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_start_tape_coordinate_x.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->start_tape_coordinate_x);
      union {
        float real;
        uint32_t base;
      } u_end_tape_coordinate_x;
      u_end_tape_coordinate_x.real = this->end_tape_coordinate_x;
      *(outbuffer + offset + 0) = (u_end_tape_coordinate_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_end_tape_coordinate_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_end_tape_coordinate_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_end_tape_coordinate_x.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->end_tape_coordinate_x);
      union {
        float real;
        uint32_t base;
      } u_start_map_coordinate_x;
      u_start_map_coordinate_x.real = this->start_map_coordinate_x;
      *(outbuffer + offset + 0) = (u_start_map_coordinate_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_start_map_coordinate_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_start_map_coordinate_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_start_map_coordinate_x.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->start_map_coordinate_x);
      union {
        float real;
        uint32_t base;
      } u_start_map_coordinate_y;
      u_start_map_coordinate_y.real = this->start_map_coordinate_y;
      *(outbuffer + offset + 0) = (u_start_map_coordinate_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_start_map_coordinate_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_start_map_coordinate_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_start_map_coordinate_y.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->start_map_coordinate_y);
      union {
        float real;
        uint32_t base;
      } u_end_map_coordinate_x;
      u_end_map_coordinate_x.real = this->end_map_coordinate_x;
      *(outbuffer + offset + 0) = (u_end_map_coordinate_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_end_map_coordinate_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_end_map_coordinate_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_end_map_coordinate_x.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->end_map_coordinate_x);
      union {
        float real;
        uint32_t base;
      } u_end_map_coordinate_y;
      u_end_map_coordinate_y.real = this->end_map_coordinate_y;
      *(outbuffer + offset + 0) = (u_end_map_coordinate_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_end_map_coordinate_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_end_map_coordinate_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_end_map_coordinate_y.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->end_map_coordinate_y);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_start_tape_coordinate_x;
      u_start_tape_coordinate_x.base = 0;
      u_start_tape_coordinate_x.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_start_tape_coordinate_x.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_start_tape_coordinate_x.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_start_tape_coordinate_x.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->start_tape_coordinate_x = u_start_tape_coordinate_x.real;
      offset += sizeof(this->start_tape_coordinate_x);
      union {
        float real;
        uint32_t base;
      } u_end_tape_coordinate_x;
      u_end_tape_coordinate_x.base = 0;
      u_end_tape_coordinate_x.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_end_tape_coordinate_x.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_end_tape_coordinate_x.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_end_tape_coordinate_x.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->end_tape_coordinate_x = u_end_tape_coordinate_x.real;
      offset += sizeof(this->end_tape_coordinate_x);
      union {
        float real;
        uint32_t base;
      } u_start_map_coordinate_x;
      u_start_map_coordinate_x.base = 0;
      u_start_map_coordinate_x.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_start_map_coordinate_x.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_start_map_coordinate_x.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_start_map_coordinate_x.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->start_map_coordinate_x = u_start_map_coordinate_x.real;
      offset += sizeof(this->start_map_coordinate_x);
      union {
        float real;
        uint32_t base;
      } u_start_map_coordinate_y;
      u_start_map_coordinate_y.base = 0;
      u_start_map_coordinate_y.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_start_map_coordinate_y.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_start_map_coordinate_y.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_start_map_coordinate_y.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->start_map_coordinate_y = u_start_map_coordinate_y.real;
      offset += sizeof(this->start_map_coordinate_y);
      union {
        float real;
        uint32_t base;
      } u_end_map_coordinate_x;
      u_end_map_coordinate_x.base = 0;
      u_end_map_coordinate_x.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_end_map_coordinate_x.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_end_map_coordinate_x.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_end_map_coordinate_x.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->end_map_coordinate_x = u_end_map_coordinate_x.real;
      offset += sizeof(this->end_map_coordinate_x);
      union {
        float real;
        uint32_t base;
      } u_end_map_coordinate_y;
      u_end_map_coordinate_y.base = 0;
      u_end_map_coordinate_y.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_end_map_coordinate_y.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_end_map_coordinate_y.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_end_map_coordinate_y.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->end_map_coordinate_y = u_end_map_coordinate_y.real;
      offset += sizeof(this->end_map_coordinate_y);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/PGVLineInfo"; };
    virtual const char * getMD5() override { return "77e44f8c468cdcaaf6299854bfa14093"; };

  };

}
#endif
