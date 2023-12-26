#ifndef _ROS_lexxauto_msgs_LocalizationReliability_h
#define _ROS_lexxauto_msgs_LocalizationReliability_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class LocalizationReliability : public ros::Msg
  {
    public:
      typedef float _average_distance_type;
      _average_distance_type average_distance;
      typedef float _distance_score_type;
      _distance_score_type distance_score;
      typedef uint16_t _match_points_type;
      _match_points_type match_points;
      typedef uint16_t _all_points_type;
      _all_points_type all_points;

    LocalizationReliability():
      average_distance(0),
      distance_score(0),
      match_points(0),
      all_points(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_average_distance;
      u_average_distance.real = this->average_distance;
      *(outbuffer + offset + 0) = (u_average_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_average_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_average_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_average_distance.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->average_distance);
      union {
        float real;
        uint32_t base;
      } u_distance_score;
      u_distance_score.real = this->distance_score;
      *(outbuffer + offset + 0) = (u_distance_score.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_distance_score.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_distance_score.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_distance_score.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->distance_score);
      *(outbuffer + offset + 0) = (this->match_points >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->match_points >> (8 * 1)) & 0xFF;
      offset += sizeof(this->match_points);
      *(outbuffer + offset + 0) = (this->all_points >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->all_points >> (8 * 1)) & 0xFF;
      offset += sizeof(this->all_points);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_average_distance;
      u_average_distance.base = 0;
      u_average_distance.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_average_distance.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_average_distance.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_average_distance.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->average_distance = u_average_distance.real;
      offset += sizeof(this->average_distance);
      union {
        float real;
        uint32_t base;
      } u_distance_score;
      u_distance_score.base = 0;
      u_distance_score.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_distance_score.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_distance_score.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_distance_score.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->distance_score = u_distance_score.real;
      offset += sizeof(this->distance_score);
      this->match_points =  ((uint16_t) (*(inbuffer + offset)));
      this->match_points |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->match_points);
      this->all_points =  ((uint16_t) (*(inbuffer + offset)));
      this->all_points |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->all_points);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/LocalizationReliability"; };
    virtual const char * getMD5() override { return "fa5860954547e3a17dbb31024e8a944b"; };

  };

}
#endif
