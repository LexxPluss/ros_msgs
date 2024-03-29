#ifndef _ROS_lexxauto_msgs_safety_func_h
#define _ROS_lexxauto_msgs_safety_func_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class safety_func : public ros::Msg
  {
    public:
      typedef const char* _front_type;
      _front_type front;
      typedef const char* _front_right_type;
      _front_right_type front_right;
      typedef const char* _front_left_type;
      _front_left_type front_left;
      typedef const char* _side_right_type;
      _side_right_type side_right;
      typedef const char* _side_left_type;
      _side_left_type side_left;
      typedef const char* _rear_type;
      _rear_type rear;
      typedef const char* _rear_right_type;
      _rear_right_type rear_right;
      typedef const char* _rear_left_type;
      _rear_left_type rear_left;

    safety_func():
      front(""),
      front_right(""),
      front_left(""),
      side_right(""),
      side_left(""),
      rear(""),
      rear_right(""),
      rear_left("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      uint32_t length_front = strlen(this->front);
      varToArr(outbuffer + offset, length_front);
      offset += 4;
      memcpy(outbuffer + offset, this->front, length_front);
      offset += length_front;
      uint32_t length_front_right = strlen(this->front_right);
      varToArr(outbuffer + offset, length_front_right);
      offset += 4;
      memcpy(outbuffer + offset, this->front_right, length_front_right);
      offset += length_front_right;
      uint32_t length_front_left = strlen(this->front_left);
      varToArr(outbuffer + offset, length_front_left);
      offset += 4;
      memcpy(outbuffer + offset, this->front_left, length_front_left);
      offset += length_front_left;
      uint32_t length_side_right = strlen(this->side_right);
      varToArr(outbuffer + offset, length_side_right);
      offset += 4;
      memcpy(outbuffer + offset, this->side_right, length_side_right);
      offset += length_side_right;
      uint32_t length_side_left = strlen(this->side_left);
      varToArr(outbuffer + offset, length_side_left);
      offset += 4;
      memcpy(outbuffer + offset, this->side_left, length_side_left);
      offset += length_side_left;
      uint32_t length_rear = strlen(this->rear);
      varToArr(outbuffer + offset, length_rear);
      offset += 4;
      memcpy(outbuffer + offset, this->rear, length_rear);
      offset += length_rear;
      uint32_t length_rear_right = strlen(this->rear_right);
      varToArr(outbuffer + offset, length_rear_right);
      offset += 4;
      memcpy(outbuffer + offset, this->rear_right, length_rear_right);
      offset += length_rear_right;
      uint32_t length_rear_left = strlen(this->rear_left);
      varToArr(outbuffer + offset, length_rear_left);
      offset += 4;
      memcpy(outbuffer + offset, this->rear_left, length_rear_left);
      offset += length_rear_left;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      uint32_t length_front;
      arrToVar(length_front, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_front; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_front-1]=0;
      this->front = (char *)(inbuffer + offset-1);
      offset += length_front;
      uint32_t length_front_right;
      arrToVar(length_front_right, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_front_right; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_front_right-1]=0;
      this->front_right = (char *)(inbuffer + offset-1);
      offset += length_front_right;
      uint32_t length_front_left;
      arrToVar(length_front_left, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_front_left; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_front_left-1]=0;
      this->front_left = (char *)(inbuffer + offset-1);
      offset += length_front_left;
      uint32_t length_side_right;
      arrToVar(length_side_right, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_side_right; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_side_right-1]=0;
      this->side_right = (char *)(inbuffer + offset-1);
      offset += length_side_right;
      uint32_t length_side_left;
      arrToVar(length_side_left, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_side_left; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_side_left-1]=0;
      this->side_left = (char *)(inbuffer + offset-1);
      offset += length_side_left;
      uint32_t length_rear;
      arrToVar(length_rear, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_rear; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_rear-1]=0;
      this->rear = (char *)(inbuffer + offset-1);
      offset += length_rear;
      uint32_t length_rear_right;
      arrToVar(length_rear_right, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_rear_right; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_rear_right-1]=0;
      this->rear_right = (char *)(inbuffer + offset-1);
      offset += length_rear_right;
      uint32_t length_rear_left;
      arrToVar(length_rear_left, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_rear_left; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_rear_left-1]=0;
      this->rear_left = (char *)(inbuffer + offset-1);
      offset += length_rear_left;
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/safety_func"; };
    virtual const char * getMD5() override { return "06e6bc74d949e7c8634ec689f489bcc5"; };

  };

}
#endif
