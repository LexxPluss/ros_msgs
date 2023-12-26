#ifndef _ROS_lexxauto_msgs_AgvLineArray_h
#define _ROS_lexxauto_msgs_AgvLineArray_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "lexxauto_msgs/AgvLine.h"

namespace lexxauto_msgs
{

  class AgvLineArray : public ros::Msg
  {
    public:
      uint32_t agv_lines_length;
      typedef lexxauto_msgs::AgvLine _agv_lines_type;
      _agv_lines_type st_agv_lines;
      _agv_lines_type * agv_lines;

    AgvLineArray():
      agv_lines_length(0), st_agv_lines(), agv_lines(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->agv_lines_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->agv_lines_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->agv_lines_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->agv_lines_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->agv_lines_length);
      for( uint32_t i = 0; i < agv_lines_length; i++){
      offset += this->agv_lines[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t agv_lines_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      agv_lines_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      agv_lines_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      agv_lines_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->agv_lines_length);
      if(agv_lines_lengthT > agv_lines_length)
        this->agv_lines = (lexxauto_msgs::AgvLine*)realloc(this->agv_lines, agv_lines_lengthT * sizeof(lexxauto_msgs::AgvLine));
      agv_lines_length = agv_lines_lengthT;
      for( uint32_t i = 0; i < agv_lines_length; i++){
      offset += this->st_agv_lines.deserialize(inbuffer + offset);
        memcpy( &(this->agv_lines[i]), &(this->st_agv_lines), sizeof(lexxauto_msgs::AgvLine));
      }
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/AgvLineArray"; };
    virtual const char * getMD5() override { return "6432ffc9d40f0e782c5440689f251ccc"; };

  };

}
#endif
