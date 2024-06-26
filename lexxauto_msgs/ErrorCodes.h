#ifndef _ROS_lexxauto_msgs_ErrorCodes_h
#define _ROS_lexxauto_msgs_ErrorCodes_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class ErrorCodes : public ros::Msg
  {
    public:
      typedef uint32_t _scenario_id_type;
      _scenario_id_type scenario_id;
      typedef const char* _task_uuid_type;
      _task_uuid_type task_uuid;
      uint32_t error_codes_length;
      typedef int32_t _error_codes_type;
      _error_codes_type st_error_codes;
      _error_codes_type * error_codes;

    ErrorCodes():
      scenario_id(0),
      task_uuid(""),
      error_codes_length(0), st_error_codes(), error_codes(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->scenario_id >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->scenario_id >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->scenario_id >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->scenario_id >> (8 * 3)) & 0xFF;
      offset += sizeof(this->scenario_id);
      uint32_t length_task_uuid = strlen(this->task_uuid);
      varToArr(outbuffer + offset, length_task_uuid);
      offset += 4;
      memcpy(outbuffer + offset, this->task_uuid, length_task_uuid);
      offset += length_task_uuid;
      *(outbuffer + offset + 0) = (this->error_codes_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->error_codes_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->error_codes_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->error_codes_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->error_codes_length);
      for( uint32_t i = 0; i < error_codes_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_error_codesi;
      u_error_codesi.real = this->error_codes[i];
      *(outbuffer + offset + 0) = (u_error_codesi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_error_codesi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_error_codesi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_error_codesi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->error_codes[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      this->scenario_id =  ((uint32_t) (*(inbuffer + offset)));
      this->scenario_id |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->scenario_id |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->scenario_id |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->scenario_id);
      uint32_t length_task_uuid;
      arrToVar(length_task_uuid, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_task_uuid; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_task_uuid-1]=0;
      this->task_uuid = (char *)(inbuffer + offset-1);
      offset += length_task_uuid;
      uint32_t error_codes_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      error_codes_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      error_codes_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      error_codes_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->error_codes_length);
      if(error_codes_lengthT > error_codes_length)
        this->error_codes = (int32_t*)realloc(this->error_codes, error_codes_lengthT * sizeof(int32_t));
      error_codes_length = error_codes_lengthT;
      for( uint32_t i = 0; i < error_codes_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_error_codes;
      u_st_error_codes.base = 0;
      u_st_error_codes.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_error_codes.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_error_codes.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_error_codes.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_error_codes = u_st_error_codes.real;
      offset += sizeof(this->st_error_codes);
        memcpy( &(this->error_codes[i]), &(this->st_error_codes), sizeof(int32_t));
      }
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/ErrorCodes"; };
    virtual const char * getMD5() override { return "99ed1496b143eae89f42a1f0063c9a17"; };

  };

}
#endif
