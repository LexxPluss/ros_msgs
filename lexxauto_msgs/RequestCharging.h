#ifndef _ROS_lexxauto_msgs_RequestCharging_h
#define _ROS_lexxauto_msgs_RequestCharging_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class RequestCharging : public ros::Msg
  {
    public:
      typedef int32_t _station_id_type;
      _station_id_type station_id;
      typedef const char* _connection_scene_type;
      _connection_scene_type connection_scene;
      typedef const char* _disconnection_scene_type;
      _disconnection_scene_type disconnection_scene;
      typedef int32_t _back_id_type;
      _back_id_type back_id;

    RequestCharging():
      station_id(0),
      connection_scene(""),
      disconnection_scene(""),
      back_id(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_station_id;
      u_station_id.real = this->station_id;
      *(outbuffer + offset + 0) = (u_station_id.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_station_id.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_station_id.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_station_id.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->station_id);
      uint32_t length_connection_scene = strlen(this->connection_scene);
      varToArr(outbuffer + offset, length_connection_scene);
      offset += 4;
      memcpy(outbuffer + offset, this->connection_scene, length_connection_scene);
      offset += length_connection_scene;
      uint32_t length_disconnection_scene = strlen(this->disconnection_scene);
      varToArr(outbuffer + offset, length_disconnection_scene);
      offset += 4;
      memcpy(outbuffer + offset, this->disconnection_scene, length_disconnection_scene);
      offset += length_disconnection_scene;
      union {
        int32_t real;
        uint32_t base;
      } u_back_id;
      u_back_id.real = this->back_id;
      *(outbuffer + offset + 0) = (u_back_id.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_back_id.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_back_id.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_back_id.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->back_id);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_station_id;
      u_station_id.base = 0;
      u_station_id.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_station_id.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_station_id.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_station_id.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->station_id = u_station_id.real;
      offset += sizeof(this->station_id);
      uint32_t length_connection_scene;
      arrToVar(length_connection_scene, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_connection_scene; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_connection_scene-1]=0;
      this->connection_scene = (char *)(inbuffer + offset-1);
      offset += length_connection_scene;
      uint32_t length_disconnection_scene;
      arrToVar(length_disconnection_scene, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_disconnection_scene; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_disconnection_scene-1]=0;
      this->disconnection_scene = (char *)(inbuffer + offset-1);
      offset += length_disconnection_scene;
      union {
        int32_t real;
        uint32_t base;
      } u_back_id;
      u_back_id.base = 0;
      u_back_id.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_back_id.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_back_id.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_back_id.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->back_id = u_back_id.real;
      offset += sizeof(this->back_id);
     return offset;
    }

    const char * getType(){ return "lexxauto_msgs/RequestCharging"; };
    const char * getMD5(){ return "aa9775caac9760004f7b249bf217f02c"; };

  };

}
#endif
