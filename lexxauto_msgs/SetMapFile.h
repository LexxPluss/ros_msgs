#ifndef _ROS_SERVICE_SetMapFile_h
#define _ROS_SERVICE_SetMapFile_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

static const char SETMAPFILE[] = "lexxauto_msgs/SetMapFile";

  class SetMapFileRequest : public ros::Msg
  {
    public:
      typedef const char* _yaml_file_path_type;
      _yaml_file_path_type yaml_file_path;
      typedef const char* _osm_file_path_type;
      _osm_file_path_type osm_file_path;

    SetMapFileRequest():
      yaml_file_path(""),
      osm_file_path("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      uint32_t length_yaml_file_path = strlen(this->yaml_file_path);
      varToArr(outbuffer + offset, length_yaml_file_path);
      offset += 4;
      memcpy(outbuffer + offset, this->yaml_file_path, length_yaml_file_path);
      offset += length_yaml_file_path;
      uint32_t length_osm_file_path = strlen(this->osm_file_path);
      varToArr(outbuffer + offset, length_osm_file_path);
      offset += 4;
      memcpy(outbuffer + offset, this->osm_file_path, length_osm_file_path);
      offset += length_osm_file_path;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t length_yaml_file_path;
      arrToVar(length_yaml_file_path, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_yaml_file_path; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_yaml_file_path-1]=0;
      this->yaml_file_path = (char *)(inbuffer + offset-1);
      offset += length_yaml_file_path;
      uint32_t length_osm_file_path;
      arrToVar(length_osm_file_path, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_osm_file_path; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_osm_file_path-1]=0;
      this->osm_file_path = (char *)(inbuffer + offset-1);
      offset += length_osm_file_path;
     return offset;
    }

    virtual const char * getType() override { return SETMAPFILE; };
    virtual const char * getMD5() override { return "a42d6e137e0871cedda744898b8e681a"; };

  };

  class SetMapFileResponse : public ros::Msg
  {
    public:
      typedef bool _success_type;
      _success_type success;

    SetMapFileResponse():
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

    virtual const char * getType() override { return SETMAPFILE; };
    virtual const char * getMD5() override { return "358e233cde0c8a8bcfea4ce193f8fc15"; };

  };

  class SetMapFile {
    public:
    typedef SetMapFileRequest Request;
    typedef SetMapFileResponse Response;
  };

}
#endif
