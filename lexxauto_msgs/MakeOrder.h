#ifndef _ROS_SERVICE_MakeOrder_h
#define _ROS_SERVICE_MakeOrder_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "lexxauto_msgs/Mode.h"

namespace lexxauto_msgs
{

static const char MAKEORDER[] = "lexxauto_msgs/MakeOrder";

  class MakeOrderRequest : public ros::Msg
  {
    public:
      typedef uint32_t _scenario_id_type;
      _scenario_id_type scenario_id;
      typedef const char* _task_uuid_type;
      _task_uuid_type task_uuid;
      typedef int32_t _modes_count_type;
      _modes_count_type modes_count;
      uint32_t modes_length;
      typedef lexxauto_msgs::Mode _modes_type;
      _modes_type st_modes;
      _modes_type * modes;

    MakeOrderRequest():
      scenario_id(0),
      task_uuid(""),
      modes_count(0),
      modes_length(0), st_modes(), modes(nullptr)
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
      union {
        int32_t real;
        uint32_t base;
      } u_modes_count;
      u_modes_count.real = this->modes_count;
      *(outbuffer + offset + 0) = (u_modes_count.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_modes_count.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_modes_count.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_modes_count.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->modes_count);
      *(outbuffer + offset + 0) = (this->modes_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->modes_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->modes_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->modes_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->modes_length);
      for( uint32_t i = 0; i < modes_length; i++){
      offset += this->modes[i].serialize(outbuffer + offset);
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
      union {
        int32_t real;
        uint32_t base;
      } u_modes_count;
      u_modes_count.base = 0;
      u_modes_count.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_modes_count.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_modes_count.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_modes_count.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->modes_count = u_modes_count.real;
      offset += sizeof(this->modes_count);
      uint32_t modes_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      modes_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      modes_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      modes_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->modes_length);
      if(modes_lengthT > modes_length)
        this->modes = (lexxauto_msgs::Mode*)realloc(this->modes, modes_lengthT * sizeof(lexxauto_msgs::Mode));
      modes_length = modes_lengthT;
      for( uint32_t i = 0; i < modes_length; i++){
      offset += this->st_modes.deserialize(inbuffer + offset);
        memcpy( &(this->modes[i]), &(this->st_modes), sizeof(lexxauto_msgs::Mode));
      }
     return offset;
    }

    virtual const char * getType() override { return MAKEORDER; };
    virtual const char * getMD5() override { return "aea462c810f4c675b34e0f211d275fd1"; };

  };

  class MakeOrderResponse : public ros::Msg
  {
    public:
      typedef uint32_t _scenario_id_type;
      _scenario_id_type scenario_id;
      typedef const char* _task_uuid_type;
      _task_uuid_type task_uuid;
      typedef const char* _status_type;
      _status_type status;

    MakeOrderResponse():
      scenario_id(0),
      task_uuid(""),
      status("")
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
      uint32_t length_status = strlen(this->status);
      varToArr(outbuffer + offset, length_status);
      offset += 4;
      memcpy(outbuffer + offset, this->status, length_status);
      offset += length_status;
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
      uint32_t length_status;
      arrToVar(length_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_status-1]=0;
      this->status = (char *)(inbuffer + offset-1);
      offset += length_status;
     return offset;
    }

    virtual const char * getType() override { return MAKEORDER; };
    virtual const char * getMD5() override { return "4d935053f3d7fd68e47624a7a5cce7f1"; };

  };

  class MakeOrder {
    public:
    typedef MakeOrderRequest Request;
    typedef MakeOrderResponse Response;
  };

}
#endif
