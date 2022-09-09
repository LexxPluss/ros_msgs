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
      uint32_t start_offset_length;
      typedef float _start_offset_type;
      _start_offset_type st_start_offset;
      _start_offset_type * start_offset;
      uint32_t end_offset_length;
      typedef float _end_offset_type;
      _end_offset_type st_end_offset;
      _end_offset_type * end_offset;

    agv_line_offset():
      id_length(0), id(NULL),
      start_offset_length(0), start_offset(NULL),
      end_offset_length(0), end_offset(NULL)
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
      *(outbuffer + offset + 0) = (this->start_offset_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->start_offset_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->start_offset_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->start_offset_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->start_offset_length);
      for( uint32_t i = 0; i < start_offset_length; i++){
      union {
        float real;
        uint32_t base;
      } u_start_offseti;
      u_start_offseti.real = this->start_offset[i];
      *(outbuffer + offset + 0) = (u_start_offseti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_start_offseti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_start_offseti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_start_offseti.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->start_offset[i]);
      }
      *(outbuffer + offset + 0) = (this->end_offset_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->end_offset_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->end_offset_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->end_offset_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->end_offset_length);
      for( uint32_t i = 0; i < end_offset_length; i++){
      union {
        float real;
        uint32_t base;
      } u_end_offseti;
      u_end_offseti.real = this->end_offset[i];
      *(outbuffer + offset + 0) = (u_end_offseti.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_end_offseti.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_end_offseti.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_end_offseti.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->end_offset[i]);
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
      uint32_t start_offset_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      start_offset_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      start_offset_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      start_offset_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->start_offset_length);
      if(start_offset_lengthT > start_offset_length)
        this->start_offset = (float*)realloc(this->start_offset, start_offset_lengthT * sizeof(float));
      start_offset_length = start_offset_lengthT;
      for( uint32_t i = 0; i < start_offset_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_start_offset;
      u_st_start_offset.base = 0;
      u_st_start_offset.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_start_offset.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_start_offset.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_start_offset.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_start_offset = u_st_start_offset.real;
      offset += sizeof(this->st_start_offset);
        memcpy( &(this->start_offset[i]), &(this->st_start_offset), sizeof(float));
      }
      uint32_t end_offset_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      end_offset_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      end_offset_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      end_offset_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->end_offset_length);
      if(end_offset_lengthT > end_offset_length)
        this->end_offset = (float*)realloc(this->end_offset, end_offset_lengthT * sizeof(float));
      end_offset_length = end_offset_lengthT;
      for( uint32_t i = 0; i < end_offset_length; i++){
      union {
        float real;
        uint32_t base;
      } u_st_end_offset;
      u_st_end_offset.base = 0;
      u_st_end_offset.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_end_offset.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_end_offset.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_end_offset.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_end_offset = u_st_end_offset.real;
      offset += sizeof(this->st_end_offset);
        memcpy( &(this->end_offset[i]), &(this->st_end_offset), sizeof(float));
      }
     return offset;
    }

    const char * getType(){ return "lexxauto_msgs/agv_line_offset"; };
    const char * getMD5(){ return "f94f611a11d5c55304318ce92b841390"; };

  };

}
#endif
