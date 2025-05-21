#ifndef _ROS_lexxauto_msgs_SafetyStatus_h
#define _ROS_lexxauto_msgs_SafetyStatus_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class SafetyStatus : public ros::Msg
  {
    public:
      typedef const char* _status_type;
      _status_type status;
      typedef const char* _front_min_measured_sensor_type;
      _front_min_measured_sensor_type front_min_measured_sensor;
      typedef const char* _front_type;
      _front_type front;
      typedef const char* _front_left_type;
      _front_left_type front_left;
      typedef const char* _front_right_type;
      _front_right_type front_right;
      typedef const char* _rear_min_measured_sensor_type;
      _rear_min_measured_sensor_type rear_min_measured_sensor;
      typedef const char* _rear_type;
      _rear_type rear;
      typedef const char* _rear_left_type;
      _rear_left_type rear_left;
      typedef const char* _rear_right_type;
      _rear_right_type rear_right;
      typedef const char* _left_min_measured_sensor_type;
      _left_min_measured_sensor_type left_min_measured_sensor;
      typedef const char* _side_left_type;
      _side_left_type side_left;
      typedef const char* _right_min_measured_sensor_type;
      _right_min_measured_sensor_type right_min_measured_sensor;
      typedef const char* _side_right_type;
      _side_right_type side_right;

    SafetyStatus():
      status(""),
      front_min_measured_sensor(""),
      front(""),
      front_left(""),
      front_right(""),
      rear_min_measured_sensor(""),
      rear(""),
      rear_left(""),
      rear_right(""),
      left_min_measured_sensor(""),
      side_left(""),
      right_min_measured_sensor(""),
      side_right("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      uint32_t length_status = strlen(this->status);
      varToArr(outbuffer + offset, length_status);
      offset += 4;
      memcpy(outbuffer + offset, this->status, length_status);
      offset += length_status;
      uint32_t length_front_min_measured_sensor = strlen(this->front_min_measured_sensor);
      varToArr(outbuffer + offset, length_front_min_measured_sensor);
      offset += 4;
      memcpy(outbuffer + offset, this->front_min_measured_sensor, length_front_min_measured_sensor);
      offset += length_front_min_measured_sensor;
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
      uint32_t length_rear_min_measured_sensor = strlen(this->rear_min_measured_sensor);
      varToArr(outbuffer + offset, length_rear_min_measured_sensor);
      offset += 4;
      memcpy(outbuffer + offset, this->rear_min_measured_sensor, length_rear_min_measured_sensor);
      offset += length_rear_min_measured_sensor;
      uint32_t length_rear = strlen(this->rear);
      varToArr(outbuffer + offset, length_rear);
      offset += 4;
      memcpy(outbuffer + offset, this->rear, length_rear);
      offset += length_rear;
      uint32_t length_rear_left = strlen(this->rear_left);
      varToArr(outbuffer + offset, length_rear_left);
      offset += 4;
      memcpy(outbuffer + offset, this->rear_left, length_rear_left);
      offset += length_rear_left;
      uint32_t length_rear_right = strlen(this->rear_right);
      varToArr(outbuffer + offset, length_rear_right);
      offset += 4;
      memcpy(outbuffer + offset, this->rear_right, length_rear_right);
      offset += length_rear_right;
      uint32_t length_left_min_measured_sensor = strlen(this->left_min_measured_sensor);
      varToArr(outbuffer + offset, length_left_min_measured_sensor);
      offset += 4;
      memcpy(outbuffer + offset, this->left_min_measured_sensor, length_left_min_measured_sensor);
      offset += length_left_min_measured_sensor;
      uint32_t length_side_left = strlen(this->side_left);
      varToArr(outbuffer + offset, length_side_left);
      offset += 4;
      memcpy(outbuffer + offset, this->side_left, length_side_left);
      offset += length_side_left;
      uint32_t length_right_min_measured_sensor = strlen(this->right_min_measured_sensor);
      varToArr(outbuffer + offset, length_right_min_measured_sensor);
      offset += 4;
      memcpy(outbuffer + offset, this->right_min_measured_sensor, length_right_min_measured_sensor);
      offset += length_right_min_measured_sensor;
      uint32_t length_side_right = strlen(this->side_right);
      varToArr(outbuffer + offset, length_side_right);
      offset += 4;
      memcpy(outbuffer + offset, this->side_right, length_side_right);
      offset += length_side_right;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
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
      uint32_t length_front_min_measured_sensor;
      arrToVar(length_front_min_measured_sensor, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_front_min_measured_sensor; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_front_min_measured_sensor-1]=0;
      this->front_min_measured_sensor = (char *)(inbuffer + offset-1);
      offset += length_front_min_measured_sensor;
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
      uint32_t length_rear_min_measured_sensor;
      arrToVar(length_rear_min_measured_sensor, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_rear_min_measured_sensor; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_rear_min_measured_sensor-1]=0;
      this->rear_min_measured_sensor = (char *)(inbuffer + offset-1);
      offset += length_rear_min_measured_sensor;
      uint32_t length_rear;
      arrToVar(length_rear, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_rear; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_rear-1]=0;
      this->rear = (char *)(inbuffer + offset-1);
      offset += length_rear;
      uint32_t length_rear_left;
      arrToVar(length_rear_left, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_rear_left; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_rear_left-1]=0;
      this->rear_left = (char *)(inbuffer + offset-1);
      offset += length_rear_left;
      uint32_t length_rear_right;
      arrToVar(length_rear_right, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_rear_right; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_rear_right-1]=0;
      this->rear_right = (char *)(inbuffer + offset-1);
      offset += length_rear_right;
      uint32_t length_left_min_measured_sensor;
      arrToVar(length_left_min_measured_sensor, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_left_min_measured_sensor; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_left_min_measured_sensor-1]=0;
      this->left_min_measured_sensor = (char *)(inbuffer + offset-1);
      offset += length_left_min_measured_sensor;
      uint32_t length_side_left;
      arrToVar(length_side_left, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_side_left; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_side_left-1]=0;
      this->side_left = (char *)(inbuffer + offset-1);
      offset += length_side_left;
      uint32_t length_right_min_measured_sensor;
      arrToVar(length_right_min_measured_sensor, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_right_min_measured_sensor; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_right_min_measured_sensor-1]=0;
      this->right_min_measured_sensor = (char *)(inbuffer + offset-1);
      offset += length_right_min_measured_sensor;
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

    virtual const char * getType() override { return "lexxauto_msgs/SafetyStatus"; };
    virtual const char * getMD5() override { return "ed319ffddee0e01056836e5c39c4da0a"; };

  };

}
#endif
