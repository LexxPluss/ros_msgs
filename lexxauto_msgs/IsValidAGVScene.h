#ifndef _ROS_SERVICE_IsValidAGVScene_h
#define _ROS_SERVICE_IsValidAGVScene_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

static const char ISVALIDAGVSCENE[] = "lexxauto_msgs/IsValidAGVScene";

  class IsValidAGVSceneRequest : public ros::Msg
  {
    public:
      typedef const char* _agv_scene_name_type;
      _agv_scene_name_type agv_scene_name;

    IsValidAGVSceneRequest():
      agv_scene_name("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      uint32_t length_agv_scene_name = strlen(this->agv_scene_name);
      varToArr(outbuffer + offset, length_agv_scene_name);
      offset += 4;
      memcpy(outbuffer + offset, this->agv_scene_name, length_agv_scene_name);
      offset += length_agv_scene_name;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t length_agv_scene_name;
      arrToVar(length_agv_scene_name, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_agv_scene_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_agv_scene_name-1]=0;
      this->agv_scene_name = (char *)(inbuffer + offset-1);
      offset += length_agv_scene_name;
     return offset;
    }

    const char * getType(){ return ISVALIDAGVSCENE; };
    const char * getMD5(){ return "68fac8258b95a017c6f752dab9c894bc"; };

  };

  class IsValidAGVSceneResponse : public ros::Msg
  {
    public:
      typedef bool _is_valid_type;
      _is_valid_type is_valid;

    IsValidAGVSceneResponse():
      is_valid(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_is_valid;
      u_is_valid.real = this->is_valid;
      *(outbuffer + offset + 0) = (u_is_valid.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->is_valid);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_is_valid;
      u_is_valid.base = 0;
      u_is_valid.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->is_valid = u_is_valid.real;
      offset += sizeof(this->is_valid);
     return offset;
    }

    const char * getType(){ return ISVALIDAGVSCENE; };
    const char * getMD5(){ return "bf1cc1d88653066e9e865909bc165df6"; };

  };

  class IsValidAGVScene {
    public:
    typedef IsValidAGVSceneRequest Request;
    typedef IsValidAGVSceneResponse Response;
  };

}
#endif
