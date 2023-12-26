#ifndef _ROS_lexxauto_msgs_MapArea_h
#define _ROS_lexxauto_msgs_MapArea_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "geometry_msgs/Polygon.h"
#include "lexxauto_msgs/MapAreaAttribute.h"

namespace lexxauto_msgs
{

  class MapArea : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef geometry_msgs::Polygon _area_polygon_type;
      _area_polygon_type area_polygon;
      uint32_t area_attributes_length;
      typedef lexxauto_msgs::MapAreaAttribute _area_attributes_type;
      _area_attributes_type st_area_attributes;
      _area_attributes_type * area_attributes;

    MapArea():
      header(),
      area_polygon(),
      area_attributes_length(0), st_area_attributes(), area_attributes(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->area_polygon.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->area_attributes_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->area_attributes_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->area_attributes_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->area_attributes_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->area_attributes_length);
      for( uint32_t i = 0; i < area_attributes_length; i++){
      offset += this->area_attributes[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->area_polygon.deserialize(inbuffer + offset);
      uint32_t area_attributes_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      area_attributes_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      area_attributes_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      area_attributes_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->area_attributes_length);
      if(area_attributes_lengthT > area_attributes_length)
        this->area_attributes = (lexxauto_msgs::MapAreaAttribute*)realloc(this->area_attributes, area_attributes_lengthT * sizeof(lexxauto_msgs::MapAreaAttribute));
      area_attributes_length = area_attributes_lengthT;
      for( uint32_t i = 0; i < area_attributes_length; i++){
      offset += this->st_area_attributes.deserialize(inbuffer + offset);
        memcpy( &(this->area_attributes[i]), &(this->st_area_attributes), sizeof(lexxauto_msgs::MapAreaAttribute));
      }
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/MapArea"; };
    virtual const char * getMD5() override { return "4d0103ea6646c63fb0fdf1b8e8fb4a4f"; };

  };

}
#endif
