#ifndef _ROS_SERVICE_SetIdentity_h
#define _ROS_SERVICE_SetIdentity_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

static const char SETIDENTITY[] = "lexxauto_msgs/SetIdentity";

  class SetIdentityRequest : public ros::Msg
  {
    public:
      typedef const char* _uuid_type;
      _uuid_type uuid;
      typedef const char* _ip_address_type;
      _ip_address_type ip_address;
      typedef const char* _model_type;
      _model_type model;
      typedef const char* _software_version_type;
      _software_version_type software_version;
      typedef const char* _serial_number_type;
      _serial_number_type serial_number;

    SetIdentityRequest():
      uuid(""),
      ip_address(""),
      model(""),
      software_version(""),
      serial_number("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      uint32_t length_uuid = strlen(this->uuid);
      varToArr(outbuffer + offset, length_uuid);
      offset += 4;
      memcpy(outbuffer + offset, this->uuid, length_uuid);
      offset += length_uuid;
      uint32_t length_ip_address = strlen(this->ip_address);
      varToArr(outbuffer + offset, length_ip_address);
      offset += 4;
      memcpy(outbuffer + offset, this->ip_address, length_ip_address);
      offset += length_ip_address;
      uint32_t length_model = strlen(this->model);
      varToArr(outbuffer + offset, length_model);
      offset += 4;
      memcpy(outbuffer + offset, this->model, length_model);
      offset += length_model;
      uint32_t length_software_version = strlen(this->software_version);
      varToArr(outbuffer + offset, length_software_version);
      offset += 4;
      memcpy(outbuffer + offset, this->software_version, length_software_version);
      offset += length_software_version;
      uint32_t length_serial_number = strlen(this->serial_number);
      varToArr(outbuffer + offset, length_serial_number);
      offset += 4;
      memcpy(outbuffer + offset, this->serial_number, length_serial_number);
      offset += length_serial_number;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t length_uuid;
      arrToVar(length_uuid, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_uuid; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_uuid-1]=0;
      this->uuid = (char *)(inbuffer + offset-1);
      offset += length_uuid;
      uint32_t length_ip_address;
      arrToVar(length_ip_address, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_ip_address; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_ip_address-1]=0;
      this->ip_address = (char *)(inbuffer + offset-1);
      offset += length_ip_address;
      uint32_t length_model;
      arrToVar(length_model, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_model; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_model-1]=0;
      this->model = (char *)(inbuffer + offset-1);
      offset += length_model;
      uint32_t length_software_version;
      arrToVar(length_software_version, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_software_version; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_software_version-1]=0;
      this->software_version = (char *)(inbuffer + offset-1);
      offset += length_software_version;
      uint32_t length_serial_number;
      arrToVar(length_serial_number, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_serial_number; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_serial_number-1]=0;
      this->serial_number = (char *)(inbuffer + offset-1);
      offset += length_serial_number;
     return offset;
    }

    const char * getType(){ return SETIDENTITY; };
    const char * getMD5(){ return "05f30b7d0aef880b9b462816ca00cd31"; };

  };

  class SetIdentityResponse : public ros::Msg
  {
    public:

    SetIdentityResponse()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
     return offset;
    }

    const char * getType(){ return SETIDENTITY; };
    const char * getMD5(){ return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class SetIdentity {
    public:
    typedef SetIdentityRequest Request;
    typedef SetIdentityResponse Response;
  };

}
#endif
