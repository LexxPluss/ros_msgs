#ifndef _ROS_lexxauto_msgs_SyncAreaFromFleet_h
#define _ROS_lexxauto_msgs_SyncAreaFromFleet_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class SyncAreaFromFleet : public ros::Msg
  {
    public:
      uint32_t booked_ids_length;
      typedef uint16_t _booked_ids_type;
      _booked_ids_type st_booked_ids;
      _booked_ids_type * booked_ids;

    SyncAreaFromFleet():
      booked_ids_length(0), st_booked_ids(), booked_ids(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->booked_ids_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->booked_ids_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->booked_ids_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->booked_ids_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->booked_ids_length);
      for( uint32_t i = 0; i < booked_ids_length; i++){
      *(outbuffer + offset + 0) = (this->booked_ids[i] >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->booked_ids[i] >> (8 * 1)) & 0xFF;
      offset += sizeof(this->booked_ids[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t booked_ids_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      booked_ids_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      booked_ids_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      booked_ids_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->booked_ids_length);
      if(booked_ids_lengthT > booked_ids_length)
        this->booked_ids = (uint16_t*)realloc(this->booked_ids, booked_ids_lengthT * sizeof(uint16_t));
      booked_ids_length = booked_ids_lengthT;
      for( uint32_t i = 0; i < booked_ids_length; i++){
      this->st_booked_ids =  ((uint16_t) (*(inbuffer + offset)));
      this->st_booked_ids |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->st_booked_ids);
        memcpy( &(this->booked_ids[i]), &(this->st_booked_ids), sizeof(uint16_t));
      }
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/SyncAreaFromFleet"; };
    virtual const char * getMD5() override { return "c0ae44293401cc7bb2f85b4fda0f553f"; };

  };

}
#endif
