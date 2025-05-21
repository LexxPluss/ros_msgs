#ifndef _ROS_SERVICE_AGVRelativeMovement_h
#define _ROS_SERVICE_AGVRelativeMovement_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

static const char AGVRELATIVEMOVEMENT[] = "lexxauto_msgs/AGVRelativeMovement";

  class AGVRelativeMovementRequest : public ros::Msg
  {
    public:
      typedef float _first_rotation_angle_deg_type;
      _first_rotation_angle_deg_type first_rotation_angle_deg;
      typedef float _second_translation_distance_m_type;
      _second_translation_distance_m_type second_translation_distance_m;
      typedef float _third_rotation_angle_deg_type;
      _third_rotation_angle_deg_type third_rotation_angle_deg;
      typedef float _rotational_velocity_deg_per_second_type;
      _rotational_velocity_deg_per_second_type rotational_velocity_deg_per_second;
      typedef float _translational_velocity_m_per_second_type;
      _translational_velocity_m_per_second_type translational_velocity_m_per_second;

    AGVRelativeMovementRequest():
      first_rotation_angle_deg(0),
      second_translation_distance_m(0),
      third_rotation_angle_deg(0),
      rotational_velocity_deg_per_second(0),
      translational_velocity_m_per_second(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_first_rotation_angle_deg;
      u_first_rotation_angle_deg.real = this->first_rotation_angle_deg;
      *(outbuffer + offset + 0) = (u_first_rotation_angle_deg.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_first_rotation_angle_deg.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_first_rotation_angle_deg.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_first_rotation_angle_deg.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->first_rotation_angle_deg);
      union {
        float real;
        uint32_t base;
      } u_second_translation_distance_m;
      u_second_translation_distance_m.real = this->second_translation_distance_m;
      *(outbuffer + offset + 0) = (u_second_translation_distance_m.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_second_translation_distance_m.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_second_translation_distance_m.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_second_translation_distance_m.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->second_translation_distance_m);
      union {
        float real;
        uint32_t base;
      } u_third_rotation_angle_deg;
      u_third_rotation_angle_deg.real = this->third_rotation_angle_deg;
      *(outbuffer + offset + 0) = (u_third_rotation_angle_deg.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_third_rotation_angle_deg.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_third_rotation_angle_deg.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_third_rotation_angle_deg.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->third_rotation_angle_deg);
      union {
        float real;
        uint32_t base;
      } u_rotational_velocity_deg_per_second;
      u_rotational_velocity_deg_per_second.real = this->rotational_velocity_deg_per_second;
      *(outbuffer + offset + 0) = (u_rotational_velocity_deg_per_second.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rotational_velocity_deg_per_second.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rotational_velocity_deg_per_second.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rotational_velocity_deg_per_second.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->rotational_velocity_deg_per_second);
      union {
        float real;
        uint32_t base;
      } u_translational_velocity_m_per_second;
      u_translational_velocity_m_per_second.real = this->translational_velocity_m_per_second;
      *(outbuffer + offset + 0) = (u_translational_velocity_m_per_second.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_translational_velocity_m_per_second.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_translational_velocity_m_per_second.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_translational_velocity_m_per_second.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->translational_velocity_m_per_second);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_first_rotation_angle_deg;
      u_first_rotation_angle_deg.base = 0;
      u_first_rotation_angle_deg.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_first_rotation_angle_deg.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_first_rotation_angle_deg.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_first_rotation_angle_deg.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->first_rotation_angle_deg = u_first_rotation_angle_deg.real;
      offset += sizeof(this->first_rotation_angle_deg);
      union {
        float real;
        uint32_t base;
      } u_second_translation_distance_m;
      u_second_translation_distance_m.base = 0;
      u_second_translation_distance_m.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_second_translation_distance_m.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_second_translation_distance_m.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_second_translation_distance_m.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->second_translation_distance_m = u_second_translation_distance_m.real;
      offset += sizeof(this->second_translation_distance_m);
      union {
        float real;
        uint32_t base;
      } u_third_rotation_angle_deg;
      u_third_rotation_angle_deg.base = 0;
      u_third_rotation_angle_deg.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_third_rotation_angle_deg.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_third_rotation_angle_deg.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_third_rotation_angle_deg.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->third_rotation_angle_deg = u_third_rotation_angle_deg.real;
      offset += sizeof(this->third_rotation_angle_deg);
      union {
        float real;
        uint32_t base;
      } u_rotational_velocity_deg_per_second;
      u_rotational_velocity_deg_per_second.base = 0;
      u_rotational_velocity_deg_per_second.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_rotational_velocity_deg_per_second.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_rotational_velocity_deg_per_second.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_rotational_velocity_deg_per_second.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->rotational_velocity_deg_per_second = u_rotational_velocity_deg_per_second.real;
      offset += sizeof(this->rotational_velocity_deg_per_second);
      union {
        float real;
        uint32_t base;
      } u_translational_velocity_m_per_second;
      u_translational_velocity_m_per_second.base = 0;
      u_translational_velocity_m_per_second.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_translational_velocity_m_per_second.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_translational_velocity_m_per_second.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_translational_velocity_m_per_second.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->translational_velocity_m_per_second = u_translational_velocity_m_per_second.real;
      offset += sizeof(this->translational_velocity_m_per_second);
     return offset;
    }

    virtual const char * getType() override { return AGVRELATIVEMOVEMENT; };
    virtual const char * getMD5() override { return "b27d5fec22a107fc3589f82a486e3d50"; };

  };

  class AGVRelativeMovementResponse : public ros::Msg
  {
    public:
      typedef bool _result_type;
      _result_type result;

    AGVRelativeMovementResponse():
      result(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_result;
      u_result.real = this->result;
      *(outbuffer + offset + 0) = (u_result.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->result);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_result;
      u_result.base = 0;
      u_result.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->result = u_result.real;
      offset += sizeof(this->result);
     return offset;
    }

    virtual const char * getType() override { return AGVRELATIVEMOVEMENT; };
    virtual const char * getMD5() override { return "eb13ac1f1354ccecb7941ee8fa2192e8"; };

  };

  class AGVRelativeMovement {
    public:
    typedef AGVRelativeMovementRequest Request;
    typedef AGVRelativeMovementResponse Response;
  };

}
#endif
