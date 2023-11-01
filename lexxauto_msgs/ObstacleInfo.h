#ifndef _ROS_lexxauto_msgs_ObstacleInfo_h
#define _ROS_lexxauto_msgs_ObstacleInfo_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class ObstacleInfo : public ros::Msg
  {
    public:
      typedef float _min_distance_type;
      _min_distance_type min_distance;
      typedef int32_t _min_distance_on_image_point_x_type;
      _min_distance_on_image_point_x_type min_distance_on_image_point_x;
      typedef int32_t _min_distance_on_image_point_y_type;
      _min_distance_on_image_point_y_type min_distance_on_image_point_y;

    ObstacleInfo():
      min_distance(0),
      min_distance_on_image_point_x(0),
      min_distance_on_image_point_y(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_min_distance;
      u_min_distance.real = this->min_distance;
      *(outbuffer + offset + 0) = (u_min_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_min_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_min_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_min_distance.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->min_distance);
      union {
        int32_t real;
        uint32_t base;
      } u_min_distance_on_image_point_x;
      u_min_distance_on_image_point_x.real = this->min_distance_on_image_point_x;
      *(outbuffer + offset + 0) = (u_min_distance_on_image_point_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_min_distance_on_image_point_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_min_distance_on_image_point_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_min_distance_on_image_point_x.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->min_distance_on_image_point_x);
      union {
        int32_t real;
        uint32_t base;
      } u_min_distance_on_image_point_y;
      u_min_distance_on_image_point_y.real = this->min_distance_on_image_point_y;
      *(outbuffer + offset + 0) = (u_min_distance_on_image_point_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_min_distance_on_image_point_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_min_distance_on_image_point_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_min_distance_on_image_point_y.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->min_distance_on_image_point_y);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_min_distance;
      u_min_distance.base = 0;
      u_min_distance.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_min_distance.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_min_distance.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_min_distance.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->min_distance = u_min_distance.real;
      offset += sizeof(this->min_distance);
      union {
        int32_t real;
        uint32_t base;
      } u_min_distance_on_image_point_x;
      u_min_distance_on_image_point_x.base = 0;
      u_min_distance_on_image_point_x.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_min_distance_on_image_point_x.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_min_distance_on_image_point_x.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_min_distance_on_image_point_x.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->min_distance_on_image_point_x = u_min_distance_on_image_point_x.real;
      offset += sizeof(this->min_distance_on_image_point_x);
      union {
        int32_t real;
        uint32_t base;
      } u_min_distance_on_image_point_y;
      u_min_distance_on_image_point_y.base = 0;
      u_min_distance_on_image_point_y.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_min_distance_on_image_point_y.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_min_distance_on_image_point_y.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_min_distance_on_image_point_y.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->min_distance_on_image_point_y = u_min_distance_on_image_point_y.real;
      offset += sizeof(this->min_distance_on_image_point_y);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/ObstacleInfo"; };
    virtual const char * getMD5() override { return "10b607e57fd28389c114ccf817a76d21"; };

  };

}
#endif
