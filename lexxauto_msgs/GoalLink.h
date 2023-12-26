#ifndef _ROS_lexxauto_msgs_GoalLink_h
#define _ROS_lexxauto_msgs_GoalLink_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace lexxauto_msgs
{

  class GoalLink : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef int32_t _start_id_type;
      _start_id_type start_id;
      typedef int8_t _start_goal_type_type;
      _start_goal_type_type start_goal_type;
      typedef int32_t _end_id_type;
      _end_id_type end_id;
      typedef int8_t _end_goal_type_type;
      _end_goal_type_type end_goal_type;
      typedef bool _oneway_type;
      _oneway_type oneway;
      enum { TYPE_NONE = -1 };
      enum { TYPE_GOAL = 0 };
      enum { TYPE_INTERMEDIATE_GOAL = 1 };

    GoalLink():
      header(),
      start_id(0),
      start_goal_type(0),
      end_id(0),
      end_goal_type(0),
      oneway(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        int32_t real;
        uint32_t base;
      } u_start_id;
      u_start_id.real = this->start_id;
      *(outbuffer + offset + 0) = (u_start_id.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_start_id.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_start_id.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_start_id.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->start_id);
      union {
        int8_t real;
        uint8_t base;
      } u_start_goal_type;
      u_start_goal_type.real = this->start_goal_type;
      *(outbuffer + offset + 0) = (u_start_goal_type.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->start_goal_type);
      union {
        int32_t real;
        uint32_t base;
      } u_end_id;
      u_end_id.real = this->end_id;
      *(outbuffer + offset + 0) = (u_end_id.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_end_id.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_end_id.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_end_id.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->end_id);
      union {
        int8_t real;
        uint8_t base;
      } u_end_goal_type;
      u_end_goal_type.real = this->end_goal_type;
      *(outbuffer + offset + 0) = (u_end_goal_type.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->end_goal_type);
      union {
        bool real;
        uint8_t base;
      } u_oneway;
      u_oneway.real = this->oneway;
      *(outbuffer + offset + 0) = (u_oneway.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->oneway);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        int32_t real;
        uint32_t base;
      } u_start_id;
      u_start_id.base = 0;
      u_start_id.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_start_id.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_start_id.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_start_id.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->start_id = u_start_id.real;
      offset += sizeof(this->start_id);
      union {
        int8_t real;
        uint8_t base;
      } u_start_goal_type;
      u_start_goal_type.base = 0;
      u_start_goal_type.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->start_goal_type = u_start_goal_type.real;
      offset += sizeof(this->start_goal_type);
      union {
        int32_t real;
        uint32_t base;
      } u_end_id;
      u_end_id.base = 0;
      u_end_id.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_end_id.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_end_id.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_end_id.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->end_id = u_end_id.real;
      offset += sizeof(this->end_id);
      union {
        int8_t real;
        uint8_t base;
      } u_end_goal_type;
      u_end_goal_type.base = 0;
      u_end_goal_type.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->end_goal_type = u_end_goal_type.real;
      offset += sizeof(this->end_goal_type);
      union {
        bool real;
        uint8_t base;
      } u_oneway;
      u_oneway.base = 0;
      u_oneway.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->oneway = u_oneway.real;
      offset += sizeof(this->oneway);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/GoalLink"; };
    virtual const char * getMD5() override { return "30e451aadd6b10b6d6e4c7a283d0575b"; };

  };

}
#endif
