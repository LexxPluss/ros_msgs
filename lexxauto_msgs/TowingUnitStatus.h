#ifndef _ROS_lexxauto_msgs_TowingUnitStatus_h
#define _ROS_lexxauto_msgs_TowingUnitStatus_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace lexxauto_msgs
{

  class TowingUnitStatus : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef bool _is_available_type;
      _is_available_type is_available;
      typedef bool _is_connected_type;
      _is_connected_type is_connected;

    TowingUnitStatus():
      header(),
      is_available(0),
      is_connected(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_is_available;
      u_is_available.real = this->is_available;
      *(outbuffer + offset + 0) = (u_is_available.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->is_available);
      union {
        bool real;
        uint8_t base;
      } u_is_connected;
      u_is_connected.real = this->is_connected;
      *(outbuffer + offset + 0) = (u_is_connected.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->is_connected);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_is_available;
      u_is_available.base = 0;
      u_is_available.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->is_available = u_is_available.real;
      offset += sizeof(this->is_available);
      union {
        bool real;
        uint8_t base;
      } u_is_connected;
      u_is_connected.base = 0;
      u_is_connected.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->is_connected = u_is_connected.real;
      offset += sizeof(this->is_connected);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/TowingUnitStatus"; };
    virtual const char * getMD5() override { return "850cab0ac9306b516c8e852a691dbc36"; };

  };

}
#endif
