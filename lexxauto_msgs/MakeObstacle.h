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
      typedef float _pos_x_type;
      _pos_x_type pos_x;
      typedef float _pos_y_type;
      _pos_y_type pos_y;
      typedef float _pos_yaw_type;
      _pos_yaw_type pos_yaw;
      typedef float _scale_x_type;
      _scale_x_type scale_x;
      typedef float _scale_y_type;
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

    virtual int serialize(unsigned char *outbuffer) const
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
      offset += serializeAvrFloat64(outbuffer + offset, this->pos_x);
      offset += serializeAvrFloat64(outbuffer + offset, this->pos_y);
      offset += serializeAvrFloat64(outbuffer + offset, this->pos_yaw);
      offset += serializeAvrFloat64(outbuffer + offset, this->scale_x);
      offset += serializeAvrFloat64(outbuffer + offset, this->scale_y);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
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
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->pos_x));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->pos_y));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->pos_yaw));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->scale_x));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->scale_y));
     return offset;
    }

    const char * getType(){ return MAKEOBSTACLE; };
    const char * getMD5(){ return "07253b2e6c964f26fba9cf9c8e698f84"; };

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

    virtual int serialize(unsigned char *outbuffer) const
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

    virtual int deserialize(unsigned char *inbuffer)
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

    const char * getType(){ return MAKEOBSTACLE; };
    const char * getMD5(){ return "358e233cde0c8a8bcfea4ce193f8fc15"; };

  };

  class MakeObstacle {
    public:
    typedef MakeObstacleRequest Request;
    typedef MakeObstacleResponse Response;
  };

}
#endif
