#ifndef _ROS_lexxauto_msgs_EmergencyStopRequest_h
#define _ROS_lexxauto_msgs_EmergencyStopRequest_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class EmergencyStopRequest : public ros::Msg
  {
    public:
      typedef uint16_t _data_type;
      _data_type data;
      enum { ESTOP_NO_ERROR = 0 };
      enum { ESTOP_PUSH_BUMPER = 1 };
      enum { ESTOP_DETECT_DOWNWARD = 4 };
      enum { ESTOP_COLLISION_IMU = 8 };
      enum { ESTOP_OTHER = 32768 };

    EmergencyStopRequest():
      data(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->data >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->data >> (8 * 1)) & 0xFF;
      offset += sizeof(this->data);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->data =  ((uint16_t) (*(inbuffer + offset)));
      this->data |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->data);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/EmergencyStopRequest"; };
    virtual const char * getMD5() override { return "1aca3ab6e383a92d2ee3b7e6661ffd57"; };

  };

}
#endif
