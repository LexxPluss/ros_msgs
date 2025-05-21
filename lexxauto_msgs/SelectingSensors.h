#ifndef _ROS_lexxauto_msgs_SelectingSensors_h
#define _ROS_lexxauto_msgs_SelectingSensors_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class SelectingSensors : public ros::Msg
  {
    public:
      typedef bool _front_uss_type;
      _front_uss_type front_uss;
      typedef bool _rear_uss_type;
      _rear_uss_type rear_uss;
      typedef bool _side_uss_type;
      _side_uss_type side_uss;
      typedef bool _front_lidar_type;
      _front_lidar_type front_lidar;
      typedef bool _rear_lidar_type;
      _rear_lidar_type rear_lidar;
      typedef bool _side_lidar_type;
      _side_lidar_type side_lidar;
      typedef bool _front_realsense_type;
      _front_realsense_type front_realsense;
      typedef bool _downward_type;
      _downward_type downward;

    SelectingSensors():
      front_uss(0),
      rear_uss(0),
      side_uss(0),
      front_lidar(0),
      rear_lidar(0),
      side_lidar(0),
      front_realsense(0),
      downward(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_front_uss;
      u_front_uss.real = this->front_uss;
      *(outbuffer + offset + 0) = (u_front_uss.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->front_uss);
      union {
        bool real;
        uint8_t base;
      } u_rear_uss;
      u_rear_uss.real = this->rear_uss;
      *(outbuffer + offset + 0) = (u_rear_uss.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rear_uss);
      union {
        bool real;
        uint8_t base;
      } u_side_uss;
      u_side_uss.real = this->side_uss;
      *(outbuffer + offset + 0) = (u_side_uss.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->side_uss);
      union {
        bool real;
        uint8_t base;
      } u_front_lidar;
      u_front_lidar.real = this->front_lidar;
      *(outbuffer + offset + 0) = (u_front_lidar.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->front_lidar);
      union {
        bool real;
        uint8_t base;
      } u_rear_lidar;
      u_rear_lidar.real = this->rear_lidar;
      *(outbuffer + offset + 0) = (u_rear_lidar.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->rear_lidar);
      union {
        bool real;
        uint8_t base;
      } u_side_lidar;
      u_side_lidar.real = this->side_lidar;
      *(outbuffer + offset + 0) = (u_side_lidar.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->side_lidar);
      union {
        bool real;
        uint8_t base;
      } u_front_realsense;
      u_front_realsense.real = this->front_realsense;
      *(outbuffer + offset + 0) = (u_front_realsense.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->front_realsense);
      union {
        bool real;
        uint8_t base;
      } u_downward;
      u_downward.real = this->downward;
      *(outbuffer + offset + 0) = (u_downward.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->downward);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_front_uss;
      u_front_uss.base = 0;
      u_front_uss.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->front_uss = u_front_uss.real;
      offset += sizeof(this->front_uss);
      union {
        bool real;
        uint8_t base;
      } u_rear_uss;
      u_rear_uss.base = 0;
      u_rear_uss.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->rear_uss = u_rear_uss.real;
      offset += sizeof(this->rear_uss);
      union {
        bool real;
        uint8_t base;
      } u_side_uss;
      u_side_uss.base = 0;
      u_side_uss.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->side_uss = u_side_uss.real;
      offset += sizeof(this->side_uss);
      union {
        bool real;
        uint8_t base;
      } u_front_lidar;
      u_front_lidar.base = 0;
      u_front_lidar.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->front_lidar = u_front_lidar.real;
      offset += sizeof(this->front_lidar);
      union {
        bool real;
        uint8_t base;
      } u_rear_lidar;
      u_rear_lidar.base = 0;
      u_rear_lidar.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->rear_lidar = u_rear_lidar.real;
      offset += sizeof(this->rear_lidar);
      union {
        bool real;
        uint8_t base;
      } u_side_lidar;
      u_side_lidar.base = 0;
      u_side_lidar.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->side_lidar = u_side_lidar.real;
      offset += sizeof(this->side_lidar);
      union {
        bool real;
        uint8_t base;
      } u_front_realsense;
      u_front_realsense.base = 0;
      u_front_realsense.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->front_realsense = u_front_realsense.real;
      offset += sizeof(this->front_realsense);
      union {
        bool real;
        uint8_t base;
      } u_downward;
      u_downward.base = 0;
      u_downward.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->downward = u_downward.real;
      offset += sizeof(this->downward);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/SelectingSensors"; };
    virtual const char * getMD5() override { return "8d8eb749b2dc6d0af117f8f2e5ac4b84"; };

  };

}
#endif
