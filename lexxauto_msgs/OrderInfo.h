#ifndef _ROS_lexxauto_msgs_OrderInfo_h
#define _ROS_lexxauto_msgs_OrderInfo_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "lexxauto_msgs/ModeInfo.h"

namespace lexxauto_msgs
{

  class OrderInfo : public ros::Msg
  {
    public:
      typedef int32_t _scenario_id_type;
      _scenario_id_type scenario_id;
      typedef const char* _task_uuid_type;
      _task_uuid_type task_uuid;
      typedef const char* _status_type;
      _status_type status;
      typedef lexxauto_msgs::ModeInfo _current_type;
      _current_type current;
      typedef uint32_t _total_elapsed_sec_type;
      _total_elapsed_sec_type total_elapsed_sec;
      typedef float _progress_type;
      _progress_type progress;
      typedef float _traveled_distance_type;
      _traveled_distance_type traveled_distance;
      uint32_t plan_length;
      typedef lexxauto_msgs::ModeInfo _plan_type;
      _plan_type st_plan;
      _plan_type * plan;
      uint32_t history_length;
      typedef lexxauto_msgs::ModeInfo _history_type;
      _history_type st_history;
      _history_type * history;

    OrderInfo():
      scenario_id(0),
      task_uuid(""),
      status(""),
      current(),
      total_elapsed_sec(0),
      progress(0),
      traveled_distance(0),
      plan_length(0), st_plan(), plan(nullptr),
      history_length(0), st_history(), history(nullptr)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_scenario_id;
      u_scenario_id.real = this->scenario_id;
      *(outbuffer + offset + 0) = (u_scenario_id.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_scenario_id.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_scenario_id.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_scenario_id.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->scenario_id);
      uint32_t length_task_uuid = strlen(this->task_uuid);
      varToArr(outbuffer + offset, length_task_uuid);
      offset += 4;
      memcpy(outbuffer + offset, this->task_uuid, length_task_uuid);
      offset += length_task_uuid;
      uint32_t length_status = strlen(this->status);
      varToArr(outbuffer + offset, length_status);
      offset += 4;
      memcpy(outbuffer + offset, this->status, length_status);
      offset += length_status;
      offset += this->current.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->total_elapsed_sec >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->total_elapsed_sec >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->total_elapsed_sec >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->total_elapsed_sec >> (8 * 3)) & 0xFF;
      offset += sizeof(this->total_elapsed_sec);
      union {
        float real;
        uint32_t base;
      } u_progress;
      u_progress.real = this->progress;
      *(outbuffer + offset + 0) = (u_progress.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_progress.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_progress.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_progress.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->progress);
      union {
        float real;
        uint32_t base;
      } u_traveled_distance;
      u_traveled_distance.real = this->traveled_distance;
      *(outbuffer + offset + 0) = (u_traveled_distance.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_traveled_distance.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_traveled_distance.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_traveled_distance.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->traveled_distance);
      *(outbuffer + offset + 0) = (this->plan_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->plan_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->plan_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->plan_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->plan_length);
      for( uint32_t i = 0; i < plan_length; i++){
      offset += this->plan[i].serialize(outbuffer + offset);
      }
      *(outbuffer + offset + 0) = (this->history_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->history_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->history_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->history_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->history_length);
      for( uint32_t i = 0; i < history_length; i++){
      offset += this->history[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_scenario_id;
      u_scenario_id.base = 0;
      u_scenario_id.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_scenario_id.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_scenario_id.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_scenario_id.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->scenario_id = u_scenario_id.real;
      offset += sizeof(this->scenario_id);
      uint32_t length_task_uuid;
      arrToVar(length_task_uuid, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_task_uuid; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_task_uuid-1]=0;
      this->task_uuid = (char *)(inbuffer + offset-1);
      offset += length_task_uuid;
      uint32_t length_status;
      arrToVar(length_status, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_status-1]=0;
      this->status = (char *)(inbuffer + offset-1);
      offset += length_status;
      offset += this->current.deserialize(inbuffer + offset);
      this->total_elapsed_sec =  ((uint32_t) (*(inbuffer + offset)));
      this->total_elapsed_sec |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->total_elapsed_sec |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->total_elapsed_sec |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->total_elapsed_sec);
      union {
        float real;
        uint32_t base;
      } u_progress;
      u_progress.base = 0;
      u_progress.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_progress.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_progress.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_progress.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->progress = u_progress.real;
      offset += sizeof(this->progress);
      union {
        float real;
        uint32_t base;
      } u_traveled_distance;
      u_traveled_distance.base = 0;
      u_traveled_distance.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_traveled_distance.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_traveled_distance.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_traveled_distance.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->traveled_distance = u_traveled_distance.real;
      offset += sizeof(this->traveled_distance);
      uint32_t plan_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      plan_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      plan_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      plan_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->plan_length);
      if(plan_lengthT > plan_length)
        this->plan = (lexxauto_msgs::ModeInfo*)realloc(this->plan, plan_lengthT * sizeof(lexxauto_msgs::ModeInfo));
      plan_length = plan_lengthT;
      for( uint32_t i = 0; i < plan_length; i++){
      offset += this->st_plan.deserialize(inbuffer + offset);
        memcpy( &(this->plan[i]), &(this->st_plan), sizeof(lexxauto_msgs::ModeInfo));
      }
      uint32_t history_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      history_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      history_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      history_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->history_length);
      if(history_lengthT > history_length)
        this->history = (lexxauto_msgs::ModeInfo*)realloc(this->history, history_lengthT * sizeof(lexxauto_msgs::ModeInfo));
      history_length = history_lengthT;
      for( uint32_t i = 0; i < history_length; i++){
      offset += this->st_history.deserialize(inbuffer + offset);
        memcpy( &(this->history[i]), &(this->st_history), sizeof(lexxauto_msgs::ModeInfo));
      }
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/OrderInfo"; };
    virtual const char * getMD5() override { return "36735ac637ca773d0017409fcf3fe09d"; };

  };

}
#endif
