#ifndef _ROS_lexxauto_msgs_PGVLineInfos_h
#define _ROS_lexxauto_msgs_PGVLineInfos_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "lexxauto_msgs/PGVLineInfo.h"

namespace lexxauto_msgs
{

  class PGVLineInfos : public ros::Msg
  {
    public:
      uint32_t lines_length;
      typedef lexxauto_msgs::PGVLineInfo _lines_type;
      _lines_type st_lines;
      _lines_type * lines;

    PGVLineInfos():
      lines_length(0), st_lines(), lines(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->lines_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->lines_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->lines_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->lines_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->lines_length);
      for( uint32_t i = 0; i < lines_length; i++){
      offset += this->lines[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t lines_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      lines_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      lines_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      lines_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->lines_length);
      if(lines_lengthT > lines_length)
        this->lines = (lexxauto_msgs::PGVLineInfo*)realloc(this->lines, lines_lengthT * sizeof(lexxauto_msgs::PGVLineInfo));
      lines_length = lines_lengthT;
      for( uint32_t i = 0; i < lines_length; i++){
      offset += this->st_lines.deserialize(inbuffer + offset);
        memcpy( &(this->lines[i]), &(this->st_lines), sizeof(lexxauto_msgs::PGVLineInfo));
      }
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/PGVLineInfos"; };
    virtual const char * getMD5() override { return "b769823ed6fb7e2bac96df14abf8b218"; };

  };

}
#endif
