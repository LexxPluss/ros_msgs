#ifndef _ROS_lexxauto_msgs_MagnetSensor_h
#define _ROS_lexxauto_msgs_MagnetSensor_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class MagnetSensor : public ros::Msg
  {
    public:
      typedef uint16_t _front_left_type;
      _front_left_type front_left;
      typedef uint16_t _front_right_type;
      _front_right_type front_right;
      typedef uint16_t _rear_left_type;
      _rear_left_type rear_left;
      typedef uint16_t _rear_right_type;
      _rear_right_type rear_right;

    MagnetSensor():
      front_left(0),
      front_right(0),
      rear_left(0),
      rear_right(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->front_left >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->front_left >> (8 * 1)) & 0xFF;
      offset += sizeof(this->front_left);
      *(outbuffer + offset + 0) = (this->front_right >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->front_right >> (8 * 1)) & 0xFF;
      offset += sizeof(this->front_right);
      *(outbuffer + offset + 0) = (this->rear_left >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->rear_left >> (8 * 1)) & 0xFF;
      offset += sizeof(this->rear_left);
      *(outbuffer + offset + 0) = (this->rear_right >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->rear_right >> (8 * 1)) & 0xFF;
      offset += sizeof(this->rear_right);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      this->front_left =  ((uint16_t) (*(inbuffer + offset)));
      this->front_left |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->front_left);
      this->front_right =  ((uint16_t) (*(inbuffer + offset)));
      this->front_right |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->front_right);
      this->rear_left =  ((uint16_t) (*(inbuffer + offset)));
      this->rear_left |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->rear_left);
      this->rear_right =  ((uint16_t) (*(inbuffer + offset)));
      this->rear_right |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->rear_right);
     return offset;
    }

    const char * getType(){ return "lexxauto_msgs/MagnetSensor"; };
    const char * getMD5(){ return "8d08fe0a0a41204c90d69bfdb96ffb4d"; };

  };

}
#endif
