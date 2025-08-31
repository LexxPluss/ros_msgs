#ifndef _ROS_lexxauto_msgs_SafetyFunc_h
#define _ROS_lexxauto_msgs_SafetyFunc_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace lexxauto_msgs
{

  class SafetyFunc : public ros::Msg
  {
    public:
      typedef const char* _front_type;
      _front_type front;
      typedef float _front_stop_distance_type;
      _front_stop_distance_type front_stop_distance;
      typedef float _front_warning_distance_type;
      _front_warning_distance_type front_warning_distance;
      typedef const char* _front_right_type;
      _front_right_type front_right;
      typedef const char* _front_right_uss_type;
      _front_right_uss_type front_right_uss;
      typedef float _front_right_stop_distance_type;
      _front_right_stop_distance_type front_right_stop_distance;
      typedef float _front_right_warning_distance_type;
      _front_right_warning_distance_type front_right_warning_distance;
      typedef const char* _front_left_type;
      _front_left_type front_left;
      typedef const char* _front_left_uss_type;
      _front_left_uss_type front_left_uss;
      typedef float _front_left_stop_distance_type;
      _front_left_stop_distance_type front_left_stop_distance;
      typedef float _front_left_warning_distance_type;
      _front_left_warning_distance_type front_left_warning_distance;
      typedef const char* _side_right_type;
      _side_right_type side_right;
      typedef const char* _side_right_uss_type;
      _side_right_uss_type side_right_uss;
      typedef float _side_right_stop_distance_type;
      _side_right_stop_distance_type side_right_stop_distance;
      typedef float _side_right_warning_distance_type;
      _side_right_warning_distance_type side_right_warning_distance;
      typedef const char* _side_left_type;
      _side_left_type side_left;
      typedef const char* _side_left_uss_type;
      _side_left_uss_type side_left_uss;
      typedef float _side_left_stop_distance_type;
      _side_left_stop_distance_type side_left_stop_distance;
      typedef float _side_left_warning_distance_type;
      _side_left_warning_distance_type side_left_warning_distance;
      typedef const char* _rear_type;
      _rear_type rear;
      typedef const char* _rear_uss_type;
      _rear_uss_type rear_uss;
      typedef float _rear_stop_distance_type;
      _rear_stop_distance_type rear_stop_distance;
      typedef float _rear_warning_distance_type;
      _rear_warning_distance_type rear_warning_distance;
      typedef const char* _rear_right_type;
      _rear_right_type rear_right;
      typedef float _rear_right_stop_distance_type;
      _rear_right_stop_distance_type rear_right_stop_distance;
      typedef float _rear_right_warning_distance_type;
      _rear_right_warning_distance_type rear_right_warning_distance;
      typedef const char* _rear_left_type;
      _rear_left_type rear_left;
      typedef float _rear_left_stop_distance_type;
      _rear_left_stop_distance_type rear_left_stop_distance;
      typedef float _rear_left_warning_distance_type;
      _rear_left_warning_distance_type rear_left_warning_distance;
      typedef float _diagonal_dir_sensitivity_right_type;
      _diagonal_dir_sensitivity_right_type diagonal_dir_sensitivity_right;
      typedef float _diagonal_dir_sensitivity_left_type;
      _diagonal_dir_sensitivity_left_type diagonal_dir_sensitivity_left;
      typedef float _max_linear_velocity_type;
      _max_linear_velocity_type max_linear_velocity;
      typedef float _max_angular_velocity_type;
      _max_angular_velocity_type max_angular_velocity;

    SafetyFunc():
      front(""),
      front_stop_distance(0),
      front_warning_distance(0),
      front_right(""),
      front_right_uss(""),
      front_right_stop_distance(0),
      front_right_warning_distance(0),
      front_left(""),
      front_left_uss(""),
      front_left_stop_distance(0),
      front_left_warning_distance(0),
      side_right(""),
      side_right_uss(""),
      side_right_stop_distance(0),
      side_right_warning_distance(0),
      side_left(""),
      side_left_uss(""),
      side_left_stop_distance(0),
      side_left_warning_distance(0),
      rear(""),
      rear_uss(""),
      rear_stop_distance(0),
      rear_warning_distance(0),
      rear_right(""),
      rear_right_stop_distance(0),
      rear_right_warning_distance(0),
      rear_left(""),
      rear_left_stop_distance(0),
      rear_left_warning_distance(0),
      diagonal_dir_sensitivity_right(0),
      diagonal_dir_sensitivity_left(0),
      max_linear_velocity(0),
      max_angular_velocity(0)
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
      union {
        float real;
        uint32_t base;
      } u_front_stop_distance;
      u_front_stop_distance.real = this->front_stop_distance;
      *(outbuffer + offset + 0) = (u_front_stop_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_front_stop_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_front_stop_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_front_stop_distance.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->front_stop_distance);
      union {
        float real;
        uint32_t base;
      } u_front_warning_distance;
      u_front_warning_distance.real = this->front_warning_distance;
      *(outbuffer + offset + 0) = (u_front_warning_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_front_warning_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_front_warning_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_front_warning_distance.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->front_warning_distance);
      uint32_t length_front_right = strlen(this->front_right);
      varToArr(outbuffer + offset, length_front_right);
      offset += 4;
      memcpy(outbuffer + offset, this->front_right, length_front_right);
      offset += length_front_right;
      uint32_t length_front_right_uss = strlen(this->front_right_uss);
      varToArr(outbuffer + offset, length_front_right_uss);
      offset += 4;
      memcpy(outbuffer + offset, this->front_right_uss, length_front_right_uss);
      offset += length_front_right_uss;
      union {
        float real;
        uint32_t base;
      } u_front_right_stop_distance;
      u_front_right_stop_distance.real = this->front_right_stop_distance;
      *(outbuffer + offset + 0) = (u_front_right_stop_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_front_right_stop_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_front_right_stop_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_front_right_stop_distance.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->front_right_stop_distance);
      union {
        float real;
        uint32_t base;
      } u_front_right_warning_distance;
      u_front_right_warning_distance.real = this->front_right_warning_distance;
      *(outbuffer + offset + 0) = (u_front_right_warning_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_front_right_warning_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_front_right_warning_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_front_right_warning_distance.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->front_right_warning_distance);
      uint32_t length_front_left = strlen(this->front_left);
      varToArr(outbuffer + offset, length_front_left);
      offset += 4;
      memcpy(outbuffer + offset, this->front_left, length_front_left);
      offset += length_front_left;
      uint32_t length_front_left_uss = strlen(this->front_left_uss);
      varToArr(outbuffer + offset, length_front_left_uss);
      offset += 4;
      memcpy(outbuffer + offset, this->front_left_uss, length_front_left_uss);
      offset += length_front_left_uss;
      union {
        float real;
        uint32_t base;
      } u_front_left_stop_distance;
      u_front_left_stop_distance.real = this->front_left_stop_distance;
      *(outbuffer + offset + 0) = (u_front_left_stop_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_front_left_stop_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_front_left_stop_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_front_left_stop_distance.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->front_left_stop_distance);
      union {
        float real;
        uint32_t base;
      } u_front_left_warning_distance;
      u_front_left_warning_distance.real = this->front_left_warning_distance;
      *(outbuffer + offset + 0) = (u_front_left_warning_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_front_left_warning_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_front_left_warning_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_front_left_warning_distance.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->front_left_warning_distance);
      uint32_t length_side_right = strlen(this->side_right);
      varToArr(outbuffer + offset, length_side_right);
      offset += 4;
      memcpy(outbuffer + offset, this->side_right, length_side_right);
      offset += length_side_right;
      uint32_t length_side_right_uss = strlen(this->side_right_uss);
      varToArr(outbuffer + offset, length_side_right_uss);
      offset += 4;
      memcpy(outbuffer + offset, this->side_right_uss, length_side_right_uss);
      offset += length_side_right_uss;
      union {
        float real;
        uint32_t base;
      } u_side_right_stop_distance;
      u_side_right_stop_distance.real = this->side_right_stop_distance;
      *(outbuffer + offset + 0) = (u_side_right_stop_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_side_right_stop_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_side_right_stop_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_side_right_stop_distance.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->side_right_stop_distance);
      union {
        float real;
        uint32_t base;
      } u_side_right_warning_distance;
      u_side_right_warning_distance.real = this->side_right_warning_distance;
      *(outbuffer + offset + 0) = (u_side_right_warning_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_side_right_warning_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_side_right_warning_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_side_right_warning_distance.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->side_right_warning_distance);
      uint32_t length_side_left = strlen(this->side_left);
      varToArr(outbuffer + offset, length_side_left);
      offset += 4;
      memcpy(outbuffer + offset, this->side_left, length_side_left);
      offset += length_side_left;
      uint32_t length_side_left_uss = strlen(this->side_left_uss);
      varToArr(outbuffer + offset, length_side_left_uss);
      offset += 4;
      memcpy(outbuffer + offset, this->side_left_uss, length_side_left_uss);
      offset += length_side_left_uss;
      union {
        float real;
        uint32_t base;
      } u_side_left_stop_distance;
      u_side_left_stop_distance.real = this->side_left_stop_distance;
      *(outbuffer + offset + 0) = (u_side_left_stop_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_side_left_stop_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_side_left_stop_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_side_left_stop_distance.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->side_left_stop_distance);
      union {
        float real;
        uint32_t base;
      } u_side_left_warning_distance;
      u_side_left_warning_distance.real = this->side_left_warning_distance;
      *(outbuffer + offset + 0) = (u_side_left_warning_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_side_left_warning_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_side_left_warning_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_side_left_warning_distance.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->side_left_warning_distance);
      uint32_t length_rear = strlen(this->rear);
      varToArr(outbuffer + offset, length_rear);
      offset += 4;
      memcpy(outbuffer + offset, this->rear, length_rear);
      offset += length_rear;
      uint32_t length_rear_uss = strlen(this->rear_uss);
      varToArr(outbuffer + offset, length_rear_uss);
      offset += 4;
      memcpy(outbuffer + offset, this->rear_uss, length_rear_uss);
      offset += length_rear_uss;
      union {
        float real;
        uint32_t base;
      } u_rear_stop_distance;
      u_rear_stop_distance.real = this->rear_stop_distance;
      *(outbuffer + offset + 0) = (u_rear_stop_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rear_stop_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rear_stop_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rear_stop_distance.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->rear_stop_distance);
      union {
        float real;
        uint32_t base;
      } u_rear_warning_distance;
      u_rear_warning_distance.real = this->rear_warning_distance;
      *(outbuffer + offset + 0) = (u_rear_warning_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rear_warning_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rear_warning_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rear_warning_distance.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->rear_warning_distance);
      uint32_t length_rear_right = strlen(this->rear_right);
      varToArr(outbuffer + offset, length_rear_right);
      offset += 4;
      memcpy(outbuffer + offset, this->rear_right, length_rear_right);
      offset += length_rear_right;
      union {
        float real;
        uint32_t base;
      } u_rear_right_stop_distance;
      u_rear_right_stop_distance.real = this->rear_right_stop_distance;
      *(outbuffer + offset + 0) = (u_rear_right_stop_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rear_right_stop_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rear_right_stop_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rear_right_stop_distance.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->rear_right_stop_distance);
      union {
        float real;
        uint32_t base;
      } u_rear_right_warning_distance;
      u_rear_right_warning_distance.real = this->rear_right_warning_distance;
      *(outbuffer + offset + 0) = (u_rear_right_warning_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rear_right_warning_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rear_right_warning_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rear_right_warning_distance.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->rear_right_warning_distance);
      uint32_t length_rear_left = strlen(this->rear_left);
      varToArr(outbuffer + offset, length_rear_left);
      offset += 4;
      memcpy(outbuffer + offset, this->rear_left, length_rear_left);
      offset += length_rear_left;
      union {
        float real;
        uint32_t base;
      } u_rear_left_stop_distance;
      u_rear_left_stop_distance.real = this->rear_left_stop_distance;
      *(outbuffer + offset + 0) = (u_rear_left_stop_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rear_left_stop_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rear_left_stop_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rear_left_stop_distance.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->rear_left_stop_distance);
      union {
        float real;
        uint32_t base;
      } u_rear_left_warning_distance;
      u_rear_left_warning_distance.real = this->rear_left_warning_distance;
      *(outbuffer + offset + 0) = (u_rear_left_warning_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_rear_left_warning_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_rear_left_warning_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_rear_left_warning_distance.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->rear_left_warning_distance);
      union {
        float real;
        uint32_t base;
      } u_diagonal_dir_sensitivity_right;
      u_diagonal_dir_sensitivity_right.real = this->diagonal_dir_sensitivity_right;
      *(outbuffer + offset + 0) = (u_diagonal_dir_sensitivity_right.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_diagonal_dir_sensitivity_right.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_diagonal_dir_sensitivity_right.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_diagonal_dir_sensitivity_right.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->diagonal_dir_sensitivity_right);
      union {
        float real;
        uint32_t base;
      } u_diagonal_dir_sensitivity_left;
      u_diagonal_dir_sensitivity_left.real = this->diagonal_dir_sensitivity_left;
      *(outbuffer + offset + 0) = (u_diagonal_dir_sensitivity_left.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_diagonal_dir_sensitivity_left.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_diagonal_dir_sensitivity_left.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_diagonal_dir_sensitivity_left.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->diagonal_dir_sensitivity_left);
      union {
        float real;
        uint32_t base;
      } u_max_linear_velocity;
      u_max_linear_velocity.real = this->max_linear_velocity;
      *(outbuffer + offset + 0) = (u_max_linear_velocity.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_max_linear_velocity.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_max_linear_velocity.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_max_linear_velocity.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->max_linear_velocity);
      union {
        float real;
        uint32_t base;
      } u_max_angular_velocity;
      u_max_angular_velocity.real = this->max_angular_velocity;
      *(outbuffer + offset + 0) = (u_max_angular_velocity.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_max_angular_velocity.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_max_angular_velocity.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_max_angular_velocity.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->max_angular_velocity);
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
      union {
        float real;
        uint32_t base;
      } u_front_stop_distance;
      u_front_stop_distance.base = 0;
      u_front_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_front_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_front_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_front_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->front_stop_distance = u_front_stop_distance.real;
      offset += sizeof(this->front_stop_distance);
      union {
        float real;
        uint32_t base;
      } u_front_warning_distance;
      u_front_warning_distance.base = 0;
      u_front_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_front_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_front_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_front_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->front_warning_distance = u_front_warning_distance.real;
      offset += sizeof(this->front_warning_distance);
      uint32_t length_front_right;
      arrToVar(length_front_right, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_front_right; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_front_right-1]=0;
      this->front_right = (char *)(inbuffer + offset-1);
      offset += length_front_right;
      uint32_t length_front_right_uss;
      arrToVar(length_front_right_uss, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_front_right_uss; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_front_right_uss-1]=0;
      this->front_right_uss = (char *)(inbuffer + offset-1);
      offset += length_front_right_uss;
      union {
        float real;
        uint32_t base;
      } u_front_right_stop_distance;
      u_front_right_stop_distance.base = 0;
      u_front_right_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_front_right_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_front_right_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_front_right_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->front_right_stop_distance = u_front_right_stop_distance.real;
      offset += sizeof(this->front_right_stop_distance);
      union {
        float real;
        uint32_t base;
      } u_front_right_warning_distance;
      u_front_right_warning_distance.base = 0;
      u_front_right_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_front_right_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_front_right_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_front_right_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->front_right_warning_distance = u_front_right_warning_distance.real;
      offset += sizeof(this->front_right_warning_distance);
      uint32_t length_front_left;
      arrToVar(length_front_left, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_front_left; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_front_left-1]=0;
      this->front_left = (char *)(inbuffer + offset-1);
      offset += length_front_left;
      uint32_t length_front_left_uss;
      arrToVar(length_front_left_uss, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_front_left_uss; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_front_left_uss-1]=0;
      this->front_left_uss = (char *)(inbuffer + offset-1);
      offset += length_front_left_uss;
      union {
        float real;
        uint32_t base;
      } u_front_left_stop_distance;
      u_front_left_stop_distance.base = 0;
      u_front_left_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_front_left_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_front_left_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_front_left_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->front_left_stop_distance = u_front_left_stop_distance.real;
      offset += sizeof(this->front_left_stop_distance);
      union {
        float real;
        uint32_t base;
      } u_front_left_warning_distance;
      u_front_left_warning_distance.base = 0;
      u_front_left_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_front_left_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_front_left_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_front_left_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->front_left_warning_distance = u_front_left_warning_distance.real;
      offset += sizeof(this->front_left_warning_distance);
      uint32_t length_side_right;
      arrToVar(length_side_right, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_side_right; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_side_right-1]=0;
      this->side_right = (char *)(inbuffer + offset-1);
      offset += length_side_right;
      uint32_t length_side_right_uss;
      arrToVar(length_side_right_uss, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_side_right_uss; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_side_right_uss-1]=0;
      this->side_right_uss = (char *)(inbuffer + offset-1);
      offset += length_side_right_uss;
      union {
        float real;
        uint32_t base;
      } u_side_right_stop_distance;
      u_side_right_stop_distance.base = 0;
      u_side_right_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_side_right_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_side_right_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_side_right_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->side_right_stop_distance = u_side_right_stop_distance.real;
      offset += sizeof(this->side_right_stop_distance);
      union {
        float real;
        uint32_t base;
      } u_side_right_warning_distance;
      u_side_right_warning_distance.base = 0;
      u_side_right_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_side_right_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_side_right_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_side_right_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->side_right_warning_distance = u_side_right_warning_distance.real;
      offset += sizeof(this->side_right_warning_distance);
      uint32_t length_side_left;
      arrToVar(length_side_left, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_side_left; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_side_left-1]=0;
      this->side_left = (char *)(inbuffer + offset-1);
      offset += length_side_left;
      uint32_t length_side_left_uss;
      arrToVar(length_side_left_uss, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_side_left_uss; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_side_left_uss-1]=0;
      this->side_left_uss = (char *)(inbuffer + offset-1);
      offset += length_side_left_uss;
      union {
        float real;
        uint32_t base;
      } u_side_left_stop_distance;
      u_side_left_stop_distance.base = 0;
      u_side_left_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_side_left_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_side_left_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_side_left_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->side_left_stop_distance = u_side_left_stop_distance.real;
      offset += sizeof(this->side_left_stop_distance);
      union {
        float real;
        uint32_t base;
      } u_side_left_warning_distance;
      u_side_left_warning_distance.base = 0;
      u_side_left_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_side_left_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_side_left_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_side_left_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->side_left_warning_distance = u_side_left_warning_distance.real;
      offset += sizeof(this->side_left_warning_distance);
      uint32_t length_rear;
      arrToVar(length_rear, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_rear; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_rear-1]=0;
      this->rear = (char *)(inbuffer + offset-1);
      offset += length_rear;
      uint32_t length_rear_uss;
      arrToVar(length_rear_uss, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_rear_uss; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_rear_uss-1]=0;
      this->rear_uss = (char *)(inbuffer + offset-1);
      offset += length_rear_uss;
      union {
        float real;
        uint32_t base;
      } u_rear_stop_distance;
      u_rear_stop_distance.base = 0;
      u_rear_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_rear_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_rear_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_rear_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->rear_stop_distance = u_rear_stop_distance.real;
      offset += sizeof(this->rear_stop_distance);
      union {
        float real;
        uint32_t base;
      } u_rear_warning_distance;
      u_rear_warning_distance.base = 0;
      u_rear_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_rear_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_rear_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_rear_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->rear_warning_distance = u_rear_warning_distance.real;
      offset += sizeof(this->rear_warning_distance);
      uint32_t length_rear_right;
      arrToVar(length_rear_right, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_rear_right; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_rear_right-1]=0;
      this->rear_right = (char *)(inbuffer + offset-1);
      offset += length_rear_right;
      union {
        float real;
        uint32_t base;
      } u_rear_right_stop_distance;
      u_rear_right_stop_distance.base = 0;
      u_rear_right_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_rear_right_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_rear_right_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_rear_right_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->rear_right_stop_distance = u_rear_right_stop_distance.real;
      offset += sizeof(this->rear_right_stop_distance);
      union {
        float real;
        uint32_t base;
      } u_rear_right_warning_distance;
      u_rear_right_warning_distance.base = 0;
      u_rear_right_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_rear_right_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_rear_right_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_rear_right_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->rear_right_warning_distance = u_rear_right_warning_distance.real;
      offset += sizeof(this->rear_right_warning_distance);
      uint32_t length_rear_left;
      arrToVar(length_rear_left, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_rear_left; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_rear_left-1]=0;
      this->rear_left = (char *)(inbuffer + offset-1);
      offset += length_rear_left;
      union {
        float real;
        uint32_t base;
      } u_rear_left_stop_distance;
      u_rear_left_stop_distance.base = 0;
      u_rear_left_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_rear_left_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_rear_left_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_rear_left_stop_distance.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->rear_left_stop_distance = u_rear_left_stop_distance.real;
      offset += sizeof(this->rear_left_stop_distance);
      union {
        float real;
        uint32_t base;
      } u_rear_left_warning_distance;
      u_rear_left_warning_distance.base = 0;
      u_rear_left_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_rear_left_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_rear_left_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_rear_left_warning_distance.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->rear_left_warning_distance = u_rear_left_warning_distance.real;
      offset += sizeof(this->rear_left_warning_distance);
      union {
        float real;
        uint32_t base;
      } u_diagonal_dir_sensitivity_right;
      u_diagonal_dir_sensitivity_right.base = 0;
      u_diagonal_dir_sensitivity_right.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_diagonal_dir_sensitivity_right.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_diagonal_dir_sensitivity_right.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_diagonal_dir_sensitivity_right.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->diagonal_dir_sensitivity_right = u_diagonal_dir_sensitivity_right.real;
      offset += sizeof(this->diagonal_dir_sensitivity_right);
      union {
        float real;
        uint32_t base;
      } u_diagonal_dir_sensitivity_left;
      u_diagonal_dir_sensitivity_left.base = 0;
      u_diagonal_dir_sensitivity_left.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_diagonal_dir_sensitivity_left.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_diagonal_dir_sensitivity_left.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_diagonal_dir_sensitivity_left.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->diagonal_dir_sensitivity_left = u_diagonal_dir_sensitivity_left.real;
      offset += sizeof(this->diagonal_dir_sensitivity_left);
      union {
        float real;
        uint32_t base;
      } u_max_linear_velocity;
      u_max_linear_velocity.base = 0;
      u_max_linear_velocity.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_max_linear_velocity.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_max_linear_velocity.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_max_linear_velocity.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->max_linear_velocity = u_max_linear_velocity.real;
      offset += sizeof(this->max_linear_velocity);
      union {
        float real;
        uint32_t base;
      } u_max_angular_velocity;
      u_max_angular_velocity.base = 0;
      u_max_angular_velocity.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_max_angular_velocity.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_max_angular_velocity.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_max_angular_velocity.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->max_angular_velocity = u_max_angular_velocity.real;
      offset += sizeof(this->max_angular_velocity);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/SafetyFunc"; };
    virtual const char * getMD5() override { return "572db0d4195a2efaeb38814d9505d429"; };

  };

}
#endif
