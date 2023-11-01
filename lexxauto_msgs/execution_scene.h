#ifndef _ROS_lexxauto_msgs_execution_scene_h
#define _ROS_lexxauto_msgs_execution_scene_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class execution_scene : public ros::Msg
  {
    public:
      typedef bool _execution_scene_type;
      _execution_scene_type execution_scene;
      typedef const char* _agv_scene_mode_type;
      _agv_scene_mode_type agv_scene_mode;

    execution_scene():
      execution_scene(0),
      agv_scene_mode("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_execution_scene;
      u_execution_scene.real = this->execution_scene;
      *(outbuffer + offset + 0) = (u_execution_scene.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->execution_scene);
      uint32_t length_agv_scene_mode = strlen(this->agv_scene_mode);
      varToArr(outbuffer + offset, length_agv_scene_mode);
      offset += 4;
      memcpy(outbuffer + offset, this->agv_scene_mode, length_agv_scene_mode);
      offset += length_agv_scene_mode;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        bool real;
        uint8_t base;
      } u_execution_scene;
      u_execution_scene.base = 0;
      u_execution_scene.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->execution_scene = u_execution_scene.real;
      offset += sizeof(this->execution_scene);
      uint32_t length_agv_scene_mode;
      arrToVar(length_agv_scene_mode, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_agv_scene_mode; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_agv_scene_mode-1]=0;
      this->agv_scene_mode = (char *)(inbuffer + offset-1);
      offset += length_agv_scene_mode;
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/execution_scene"; };
    virtual const char * getMD5() override { return "f9f458635cbf67f68c0664589c21df90"; };

  };

}
#endif
