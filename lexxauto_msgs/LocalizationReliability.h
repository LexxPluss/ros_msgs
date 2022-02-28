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
      typedef float _match_points_type;
      _match_points_type match_points;
      typedef float _all_points_type;
      _all_points_type all_points;

    LocalizationReliability():
      average_distance(0),
      distance_score(0),
      match_points(0),
      all_points(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
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
      union {
        float real;
        uint32_t base;
      } u_match_points;
      u_match_points.real = this->match_points;
      *(outbuffer + offset + 0) = (u_match_points.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_match_points.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_match_points.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_match_points.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->match_points);
      union {
        float real;
        uint32_t base;
      } u_all_points;
      u_all_points.real = this->all_points;
      *(outbuffer + offset + 0) = (u_all_points.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_all_points.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_all_points.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_all_points.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->all_points);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
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
      union {
        float real;
        uint32_t base;
      } u_match_points;
      u_match_points.base = 0;
      u_match_points.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_match_points.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_match_points.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_match_points.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->match_points = u_match_points.real;
      offset += sizeof(this->match_points);
      union {
        float real;
        uint32_t base;
      } u_all_points;
      u_all_points.base = 0;
      u_all_points.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_all_points.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_all_points.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_all_points.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->all_points = u_all_points.real;
      offset += sizeof(this->all_points);
     return offset;
    }

    const char * getType(){ return "lexxauto_msgs/LocalizationReliability"; };
    const char * getMD5(){ return "e84a6d8b1de98cfdb8abdfde01ca6010"; };

  };

}
#endif
