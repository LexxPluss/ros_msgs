#ifndef _ROS_SERVICE_ApplyConfig_h
#define _ROS_SERVICE_ApplyConfig_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "lexxauto_msgs/ConfigDetail.h"

namespace lexxauto_msgs
{

static const char APPLYCONFIG[] = "lexxauto_msgs/ApplyConfig";

  class ApplyConfigRequest : public ros::Msg
  {
    public:
      typedef int32_t _config_count_type;
      _config_count_type config_count;
      uint32_t config_length;
      typedef lexxauto_msgs::ConfigDetail _config_type;
      _config_type st_config;
      _config_type * config;

    ApplyConfigRequest():
      config_count(0),
      config_length(0), config(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_config_count;
      u_config_count.real = this->config_count;
      *(outbuffer + offset + 0) = (u_config_count.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_config_count.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_config_count.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_config_count.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->config_count);
      *(outbuffer + offset + 0) = (this->config_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->config_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->config_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->config_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->config_length);
      for( uint32_t i = 0; i < config_length; i++){
      offset += this->config[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_config_count;
      u_config_count.base = 0;
      u_config_count.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_config_count.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_config_count.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_config_count.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->config_count = u_config_count.real;
      offset += sizeof(this->config_count);
      uint32_t config_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      config_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      config_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      config_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->config_length);
      if(config_lengthT > config_length)
        this->config = (lexxauto_msgs::ConfigDetail*)realloc(this->config, config_lengthT * sizeof(lexxauto_msgs::ConfigDetail));
      config_length = config_lengthT;
      for( uint32_t i = 0; i < config_length; i++){
      offset += this->st_config.deserialize(inbuffer + offset);
        memcpy( &(this->config[i]), &(this->st_config), sizeof(lexxauto_msgs::ConfigDetail));
      }
     return offset;
    }

    const char * getType(){ return APPLYCONFIG; };
    const char * getMD5(){ return "be3abc3c0faf32c5fae53ad5c998d09b"; };

  };

  class ApplyConfigResponse : public ros::Msg
  {
    public:
      typedef bool _success_type;
      _success_type success;

    ApplyConfigResponse():
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

    const char * getType(){ return APPLYCONFIG; };
    const char * getMD5(){ return "358e233cde0c8a8bcfea4ce193f8fc15"; };

  };

  class ApplyConfig {
    public:
    typedef ApplyConfigRequest Request;
    typedef ApplyConfigResponse Response;
  };

}
#endif
