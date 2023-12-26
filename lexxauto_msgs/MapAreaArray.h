#ifndef _ROS_lexxauto_msgs_MapAreaArray_h
#define _ROS_lexxauto_msgs_MapAreaArray_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "lexxauto_msgs/MapArea.h"

namespace lexxauto_msgs
{

  class MapAreaArray : public ros::Msg
  {
    public:
      uint32_t areas_length;
      typedef lexxauto_msgs::MapArea _areas_type;
      _areas_type st_areas;
      _areas_type * areas;

    MapAreaArray():
      areas_length(0), st_areas(), areas(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->areas_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->areas_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->areas_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->areas_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->areas_length);
      for( uint32_t i = 0; i < areas_length; i++){
      offset += this->areas[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t areas_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      areas_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      areas_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      areas_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->areas_length);
      if(areas_lengthT > areas_length)
        this->areas = (lexxauto_msgs::MapArea*)realloc(this->areas, areas_lengthT * sizeof(lexxauto_msgs::MapArea));
      areas_length = areas_lengthT;
      for( uint32_t i = 0; i < areas_length; i++){
      offset += this->st_areas.deserialize(inbuffer + offset);
        memcpy( &(this->areas[i]), &(this->st_areas), sizeof(lexxauto_msgs::MapArea));
      }
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/MapAreaArray"; };
    virtual const char * getMD5() override { return "48cf1247603eb2117dbd1369e01df16b"; };

  };

}
#endif
