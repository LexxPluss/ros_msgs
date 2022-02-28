#ifndef _ROS_lexxauto_msgs_agv_line_offset_h
#define _ROS_lexxauto_msgs_agv_line_offset_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class agv_line_offset : public ros::Msg
  {
    public:
      uint32_t id_length;
      typedef int32_t _id_type;
      _id_type st_id;
      _id_type * id;
      uint32_t offset_length;
      typedef float _offset_type;
      _offset_type st_offset;
      _offset_type * offset;

    agv_line_offset():
      id_length(0), id(NULL),
      offset_length(0), offset(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->id_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->id_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->id_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->id_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->id_length);
      for( uint32_t i = 0; i < id_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_idi;
      u_idi.real = this->id[i];
      *(outbuffer + offset + 0) = (u_idi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_idi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_idi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_idi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->id[i]);
      }
      *(outbuffer + offset + 0) = (this->offset_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->offset_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->offset_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->offset_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->offset_length);
      for( uint32_t i = 0; i < offset_length; i++){
      union {
        float real;
        uint32_t base;
      } u_offseti;
      u_offseti.real = this->offset[i];
      *(outbuffer + offset + 0) = (u_offseti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_offseti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_offseti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_offseti.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->offset[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t id_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      id_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      id_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      id_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->id_length);
      if(id_lengthT > id_length)
        this->id = (int32_t*)realloc(this->id, id_lengthT * sizeof(int32_t));
      id_length = id_lengthT;
      for( uint32_t i = 0; i < id_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_id;
      u_st_id.base = 0;
      u_st_id.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_id.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_id.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_id.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_id = u_st_id.real;
      offset += sizeof(this->st_id);
        memcpy( &(this->id[i]), &(this->st_id), sizeof(int32_t));
      }
      uint32_t offset_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      offset_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      offset_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      offset_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->offset_length);
      if(offset_lengthT > offset_length)
        this->offset = (float*)realloc(this->offset, offset_lengthT * sizeof(float));
      offset_length = offset_lengthT;
      for( uint32_t i = 0; i < offset_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_offset;
      u_st_offset.base = 0;
      u_st_offset.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_offset.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_offset.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_offset.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_offset = u_st_offset.real;
      offset += sizeof(this->st_offset);
        memcpy( &(this->offset[i]), &(this->st_offset), sizeof(float));
      }
     return offset;
    }

    const char * getType(){ return "lexxauto_msgs/agv_line_offset"; };
    const char * getMD5(){ return "e0a9d82e39786d2a0597ae6f41ca3eb3"; };

  };

}
#endif
