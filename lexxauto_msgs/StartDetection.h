#ifndef _ROS_SERVICE_StartDetection_h
#define _ROS_SERVICE_StartDetection_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "lexxauto_msgs/ShapeDetectionInfo.h"

namespace lexxauto_msgs
{

static const char STARTDETECTION[] = "lexxauto_msgs/StartDetection";

  class StartDetectionRequest : public ros::Msg
  {
    public:
      typedef bool _one_time_detection_type;
      _one_time_detection_type one_time_detection;

    StartDetectionRequest():
      one_time_detection(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_one_time_detection;
      u_one_time_detection.real = this->one_time_detection;
      *(outbuffer + offset + 0) = (u_one_time_detection.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->one_time_detection);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_one_time_detection;
      u_one_time_detection.base = 0;
      u_one_time_detection.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->one_time_detection = u_one_time_detection.real;
      offset += sizeof(this->one_time_detection);
     return offset;
    }

    virtual const char * getType() override { return STARTDETECTION; };
    virtual const char * getMD5() override { return "e65fa9ea5805882d5f14b2e272a5e304"; };

  };

  class StartDetectionResponse : public ros::Msg
  {
    public:
      typedef lexxauto_msgs::ShapeDetectionInfo _detection_info_type;
      _detection_info_type detection_info;

    StartDetectionResponse():
      detection_info()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->detection_info.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->detection_info.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return STARTDETECTION; };
    virtual const char * getMD5() override { return "d31feb9ae4c5c99373b24b51c8867884"; };

  };

  class StartDetection {
    public:
    typedef StartDetectionRequest Request;
    typedef StartDetectionResponse Response;
  };

}
#endif
