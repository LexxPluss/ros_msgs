#ifndef _ROS_SERVICE_MakeObstacle_h
#define _ROS_SERVICE_MakeObstacle_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

static const char MAKEOBSTACLE[] = "lexxauto_msgs/MakeObstacle";

  class MakeObstacleRequest : public ros::Msg
  {
    public:
      typedef int8_t _type_type;
      _type_type type;
      typedef const char* _name_type;
      _name_type name;
      typedef const char* _description_type;
      _description_type description;
      typedef double _pos_x_type;
      _pos_x_type pos_x;
      typedef double _pos_y_type;
      _pos_y_type pos_y;
      typedef double _pos_yaw_type;
      _pos_yaw_type pos_yaw;
      typedef double _scale_x_type;
      _scale_x_type scale_x;
      typedef double _scale_y_type;
      _scale_y_type scale_y;

    MakeObstacleRequest():
      type(0),
      name(""),
      description(""),
      pos_x(0),
      pos_y(0),
      pos_yaw(0),
      scale_x(0),
      scale_y(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        int8_t real;
        uint8_t base;
      } u_type;
      u_type.real = this->type;
      *(outbuffer + offset + 0) = (u_type.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->type);
      uint32_t length_name = strlen(this->name);
      varToArr(outbuffer + offset, length_name);
      offset += 4;
      memcpy(outbuffer + offset, this->name, length_name);
      offset += length_name;
      uint32_t length_description = strlen(this->description);
      varToArr(outbuffer + offset, length_description);
      offset += 4;
      memcpy(outbuffer + offset, this->description, length_description);
      offset += length_description;
      union {
        double real;
        uint64_t base;
      } u_pos_x;
      u_pos_x.real = this->pos_x;
      *(outbuffer + offset + 0) = (u_pos_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pos_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pos_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pos_x.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pos_x.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pos_x.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pos_x.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pos_x.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pos_x);
      union {
        double real;
        uint64_t base;
      } u_pos_y;
      u_pos_y.real = this->pos_y;
      *(outbuffer + offset + 0) = (u_pos_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pos_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pos_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pos_y.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pos_y.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pos_y.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pos_y.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pos_y.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pos_y);
      union {
        double real;
        uint64_t base;
      } u_pos_yaw;
      u_pos_yaw.real = this->pos_yaw;
      *(outbuffer + offset + 0) = (u_pos_yaw.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pos_yaw.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pos_yaw.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pos_yaw.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_pos_yaw.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_pos_yaw.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_pos_yaw.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_pos_yaw.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->pos_yaw);
      union {
        double real;
        uint64_t base;
      } u_scale_x;
      u_scale_x.real = this->scale_x;
      *(outbuffer + offset + 0) = (u_scale_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_scale_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_scale_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_scale_x.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_scale_x.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_scale_x.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_scale_x.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_scale_x.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->scale_x);
      union {
        double real;
        uint64_t base;
      } u_scale_y;
      u_scale_y.real = this->scale_y;
      *(outbuffer + offset + 0) = (u_scale_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_scale_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_scale_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_scale_y.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_scale_y.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_scale_y.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_scale_y.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_scale_y.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->scale_y);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        int8_t real;
        uint8_t base;
      } u_type;
      u_type.base = 0;
      u_type.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->type = u_type.real;
      offset += sizeof(this->type);
      uint32_t length_name;
      arrToVar(length_name, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_name-1]=0;
      this->name = (char *)(inbuffer + offset-1);
      offset += length_name;
      uint32_t length_description;
      arrToVar(length_description, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_description; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_description-1]=0;
      this->description = (char *)(inbuffer + offset-1);
      offset += length_description;
      union {
        double real;
        uint64_t base;
      } u_pos_x;
      u_pos_x.base = 0;
      u_pos_x.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pos_x.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pos_x.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pos_x.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_pos_x.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_pos_x.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_pos_x.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_pos_x.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->pos_x = u_pos_x.real;
      offset += sizeof(this->pos_x);
      union {
        double real;
        uint64_t base;
      } u_pos_y;
      u_pos_y.base = 0;
      u_pos_y.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pos_y.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pos_y.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pos_y.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_pos_y.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_pos_y.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_pos_y.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_pos_y.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->pos_y = u_pos_y.real;
      offset += sizeof(this->pos_y);
      union {
        double real;
        uint64_t base;
      } u_pos_yaw;
      u_pos_yaw.base = 0;
      u_pos_yaw.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_pos_yaw.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_pos_yaw.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_pos_yaw.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_pos_yaw.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_pos_yaw.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_pos_yaw.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_pos_yaw.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->pos_yaw = u_pos_yaw.real;
      offset += sizeof(this->pos_yaw);
      union {
        double real;
        uint64_t base;
      } u_scale_x;
      u_scale_x.base = 0;
      u_scale_x.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_scale_x.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_scale_x.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_scale_x.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_scale_x.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_scale_x.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_scale_x.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_scale_x.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->scale_x = u_scale_x.real;
      offset += sizeof(this->scale_x);
      union {
        double real;
        uint64_t base;
      } u_scale_y;
      u_scale_y.base = 0;
      u_scale_y.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_scale_y.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_scale_y.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_scale_y.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_scale_y.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_scale_y.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_scale_y.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_scale_y.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->scale_y = u_scale_y.real;
      offset += sizeof(this->scale_y);
     return offset;
    }

    virtual const char * getType() override { return MAKEOBSTACLE; };
    virtual const char * getMD5() override { return "07253b2e6c964f26fba9cf9c8e698f84"; };

  };

  class MakeObstacleResponse : public ros::Msg
  {
    public:
      typedef bool _success_type;
      _success_type success;

    MakeObstacleResponse():
      success(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_success;
      u_success.real = this->success;
      *(outbuffer + offset + 0) = (u_success.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->success);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_success;
      u_success.base = 0;
      u_success.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->success = u_success.real;
      offset += sizeof(this->success);
     return offset;
    }

    virtual const char * getType() override { return MAKEOBSTACLE; };
    virtual const char * getMD5() override { return "358e233cde0c8a8bcfea4ce193f8fc15"; };

  };

  class MakeObstacle {
    public:
    typedef MakeObstacleRequest Request;
    typedef MakeObstacleResponse Response;
  };

}
#endif
