#ifndef _ROS_lexxauto_msgs_AgvLine_h
#define _ROS_lexxauto_msgs_AgvLine_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "geometry_msgs/Point.h"

namespace lexxauto_msgs
{

  class AgvLine : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef geometry_msgs::Point _start_point_type;
      _start_point_type start_point;
      typedef geometry_msgs::Point _end_point_type;
      _end_point_type end_point;
      typedef double _start_offset_type;
      _start_offset_type start_offset;
      typedef double _end_offset_type;
      _end_offset_type end_offset;

    AgvLine():
      header(),
      start_point(),
      end_point(),
      start_offset(0),
      end_offset(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->start_point.serialize(outbuffer + offset);
      offset += this->end_point.serialize(outbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_start_offset;
      u_start_offset.real = this->start_offset;
      *(outbuffer + offset + 0) = (u_start_offset.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_start_offset.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_start_offset.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_start_offset.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_start_offset.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_start_offset.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_start_offset.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_start_offset.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->start_offset);
      union {
        double real;
        uint64_t base;
      } u_end_offset;
      u_end_offset.real = this->end_offset;
      *(outbuffer + offset + 0) = (u_end_offset.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_end_offset.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_end_offset.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_end_offset.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_end_offset.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_end_offset.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_end_offset.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_end_offset.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->end_offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->start_point.deserialize(inbuffer + offset);
      offset += this->end_point.deserialize(inbuffer + offset);
      union {
        double real;
        uint64_t base;
      } u_start_offset;
      u_start_offset.base = 0;
      u_start_offset.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_start_offset.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_start_offset.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_start_offset.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_start_offset.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_start_offset.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_start_offset.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_start_offset.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->start_offset = u_start_offset.real;
      offset += sizeof(this->start_offset);
      union {
        double real;
        uint64_t base;
      } u_end_offset;
      u_end_offset.base = 0;
      u_end_offset.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_end_offset.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_end_offset.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_end_offset.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_end_offset.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_end_offset.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_end_offset.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_end_offset.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->end_offset = u_end_offset.real;
      offset += sizeof(this->end_offset);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/AgvLine"; };
    virtual const char * getMD5() override { return "5de714c3899a26564f20dc34882e6d0f"; };

  };

}
#endif
