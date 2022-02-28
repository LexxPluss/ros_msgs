#ifndef _ROS_lexxauto_msgs_safety_status_h
#define _ROS_lexxauto_msgs_safety_status_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class safety_status : public ros::Msg
  {
    public:
      typedef const char* _status_type;
      _status_type status;
      typedef const char* _front_type;
      _front_type front;
      typedef const char* _front_left_type;
      _front_left_type front_left;
      typedef const char* _front_right_type;
      _front_right_type front_right;
      typedef const char* _back_type;
      _back_type back;
      typedef const char* _back_left_type;
      _back_left_type back_left;
      typedef const char* _back_right_type;
      _back_right_type back_right;
      typedef const char* _side_left_type;
      _side_left_type side_left;
      typedef const char* _side_right_type;
      _side_right_type side_right;

    safety_status():
      status(""),
      front(""),
      front_left(""),
      front_right(""),
      back(""),
      back_left(""),
      back_right(""),
      side_left(""),
      side_right("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      uint32_t length_status = strlen(this->status);
      varToArr(outbuffer + offset, length_status);
      offset += 4;
      memcpy(outbuffer + offset, this->status, length_status);
      offset += length_status;
      uint32_t length_front = strlen(this->front);
      varToArr(outbuffer + offset, length_front);
      offset += 4;
      memcpy(outbuffer + offset, this->front, length_front);
      offset += length_front;
      uint32_t length_front_left = strlen(this->front_left);
      varToArr(outbuffer + offset, length_front_left);
      offset += 4;
      memcpy(outbuffer + offset, this->front_left, length_front_left);
      offset += length_front_left;
      uint32_t length_front_right = strlen(this->front_right);
      varToArr(outbuffer + offset, length_front_right);
      offset += 4;
      memcpy(outbuffer + offset, this->front_right, length_front_right);
      offset += length_front_right;
      uint32_t length_back = strlen(this->back);
      varToArr(outbuffer + offset, length_back);
      offset += 4;
      memcpy(outbuffer + offset, this->back, length_back);
      offset += length_back;
      uint32_t length_back_left = strlen(this->back_left);
      varToArr(outbuffer + offset, length_back_left);
      offset += 4;
      memcpy(outbuffer + offset, this->back_left, length_back_left);
      offset += length_back_left;
      uint32_t length_back_right = strlen(this->back_right);
      varToArr(outbuffer + offset, length_back_right);
      offset += 4;
      memcpy(outbuffer + offset, this->back_right, length_back_right);
      offset += length_back_right;
      uint32_t length_side_left = strlen(this->side_left);
      varToArr(outbuffer + offset, length_side_left);
      offset += 4;
      memcpy(outbuffer + offset, this->side_left, length_side_left);
      offset += length_side_left;
      uint32_t length_side_right = strlen(this->side_right);
      varToArr(outbuffer + offset, length_side_right);
      offset += 4;
      memcpy(outbuffer + offset, this->side_right, length_side_right);
      offset += length_side_right;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t length_status;
      arrToVar(length_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_status-1]=0;
      this->status = (char *)(inbuffer + offset-1);
      offset += length_status;
      uint32_t length_front;
      arrToVar(length_front, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_front; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_front-1]=0;
      this->front = (char *)(inbuffer + offset-1);
      offset += length_front;
      uint32_t length_front_left;
      arrToVar(length_front_left, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_front_left; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_front_left-1]=0;
      this->front_left = (char *)(inbuffer + offset-1);
      offset += length_front_left;
      uint32_t length_front_right;
      arrToVar(length_front_right, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_front_right; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_front_right-1]=0;
      this->front_right = (char *)(inbuffer + offset-1);
      offset += length_front_right;
      uint32_t length_back;
      arrToVar(length_back, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_back; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_back-1]=0;
      this->back = (char *)(inbuffer + offset-1);
      offset += length_back;
      uint32_t length_back_left;
      arrToVar(length_back_left, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_back_left; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_back_left-1]=0;
      this->back_left = (char *)(inbuffer + offset-1);
      offset += length_back_left;
      uint32_t length_back_right;
      arrToVar(length_back_right, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_back_right; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_back_right-1]=0;
      this->back_right = (char *)(inbuffer + offset-1);
      offset += length_back_right;
      uint32_t length_side_left;
      arrToVar(length_side_left, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_side_left; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_side_left-1]=0;
      this->side_left = (char *)(inbuffer + offset-1);
      offset += length_side_left;
      uint32_t length_side_right;
      arrToVar(length_side_right, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_side_right; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_side_right-1]=0;
      this->side_right = (char *)(inbuffer + offset-1);
      offset += length_side_right;
     return offset;
    }

    const char * getType(){ return "lexxauto_msgs/safety_status"; };
    const char * getMD5(){ return "e8b0d3b26ed4715c7128691c480b6be5"; };

  };

}
#endif
