#ifndef _ROS_lexxauto_msgs_SyncAreaToFleet_h
#define _ROS_lexxauto_msgs_SyncAreaToFleet_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class SyncAreaToFleet : public ros::Msg
  {
    public:
      uint32_t wants_to_book_ids_length;
      typedef uint16_t _wants_to_book_ids_type;
      _wants_to_book_ids_type st_wants_to_book_ids;
      _wants_to_book_ids_type * wants_to_book_ids;

    SyncAreaToFleet():
      wants_to_book_ids_length(0), st_wants_to_book_ids(), wants_to_book_ids(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->wants_to_book_ids_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->wants_to_book_ids_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->wants_to_book_ids_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->wants_to_book_ids_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->wants_to_book_ids_length);
      for( uint32_t i = 0; i < wants_to_book_ids_length; i++){
      *(outbuffer + offset + 0) = (this->wants_to_book_ids[i] >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->wants_to_book_ids[i] >> (8 * 1)) & 0xFF;
      offset += sizeof(this->wants_to_book_ids[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t wants_to_book_ids_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      wants_to_book_ids_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      wants_to_book_ids_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      wants_to_book_ids_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->wants_to_book_ids_length);
      if(wants_to_book_ids_lengthT > wants_to_book_ids_length)
        this->wants_to_book_ids = (uint16_t*)realloc(this->wants_to_book_ids, wants_to_book_ids_lengthT * sizeof(uint16_t));
      wants_to_book_ids_length = wants_to_book_ids_lengthT;
      for( uint32_t i = 0; i < wants_to_book_ids_length; i++){
      this->st_wants_to_book_ids =  ((uint16_t) (*(inbuffer + offset)));
      this->st_wants_to_book_ids |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->st_wants_to_book_ids);
        memcpy( &(this->wants_to_book_ids[i]), &(this->st_wants_to_book_ids), sizeof(uint16_t));
      }
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/SyncAreaToFleet"; };
    virtual const char * getMD5() override { return "9f553eb2f8fb8fccc521a1e4351c3752"; };

  };

}
#endif
