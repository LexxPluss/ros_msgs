#ifndef _ROS_lexxauto_msgs_LocalizationReliability_h
#define _ROS_lexxauto_msgs_LocalizationReliability_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace lexxauto_msgs
{

  class LocalizationReliability : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef float _covar_mat_reliability_type;
      _covar_mat_reliability_type covar_mat_reliability;
      typedef float _odom_drift_reliability_type;
      _odom_drift_reliability_type odom_drift_reliability;
      typedef float _odom_jump_reliability_type;
      _odom_jump_reliability_type odom_jump_reliability;
      typedef float _amcl_pose_within_map_reliability_type;
      _amcl_pose_within_map_reliability_type amcl_pose_within_map_reliability;
      typedef float _particlecloud_spread_reliability_type;
      _particlecloud_spread_reliability_type particlecloud_spread_reliability;
      typedef float _scan_map_matching_reliability_type;
      _scan_map_matching_reliability_type scan_map_matching_reliability;
      typedef float _total_estimated_reliability_type;
      _total_estimated_reliability_type total_estimated_reliability;

    LocalizationReliability():
      header(),
      covar_mat_reliability(0),
      odom_drift_reliability(0),
      odom_jump_reliability(0),
      amcl_pose_within_map_reliability(0),
      particlecloud_spread_reliability(0),
      scan_map_matching_reliability(0),
      total_estimated_reliability(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        float real;
        uint32_t base;
      } u_covar_mat_reliability;
      u_covar_mat_reliability.real = this->covar_mat_reliability;
      *(outbuffer + offset + 0) = (u_covar_mat_reliability.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_covar_mat_reliability.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_covar_mat_reliability.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_covar_mat_reliability.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->covar_mat_reliability);
      union {
        float real;
        uint32_t base;
      } u_odom_drift_reliability;
      u_odom_drift_reliability.real = this->odom_drift_reliability;
      *(outbuffer + offset + 0) = (u_odom_drift_reliability.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_odom_drift_reliability.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_odom_drift_reliability.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_odom_drift_reliability.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->odom_drift_reliability);
      union {
        float real;
        uint32_t base;
      } u_odom_jump_reliability;
      u_odom_jump_reliability.real = this->odom_jump_reliability;
      *(outbuffer + offset + 0) = (u_odom_jump_reliability.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_odom_jump_reliability.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_odom_jump_reliability.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_odom_jump_reliability.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->odom_jump_reliability);
      union {
        float real;
        uint32_t base;
      } u_amcl_pose_within_map_reliability;
      u_amcl_pose_within_map_reliability.real = this->amcl_pose_within_map_reliability;
      *(outbuffer + offset + 0) = (u_amcl_pose_within_map_reliability.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_amcl_pose_within_map_reliability.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_amcl_pose_within_map_reliability.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_amcl_pose_within_map_reliability.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->amcl_pose_within_map_reliability);
      union {
        float real;
        uint32_t base;
      } u_particlecloud_spread_reliability;
      u_particlecloud_spread_reliability.real = this->particlecloud_spread_reliability;
      *(outbuffer + offset + 0) = (u_particlecloud_spread_reliability.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_particlecloud_spread_reliability.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_particlecloud_spread_reliability.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_particlecloud_spread_reliability.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->particlecloud_spread_reliability);
      union {
        float real;
        uint32_t base;
      } u_scan_map_matching_reliability;
      u_scan_map_matching_reliability.real = this->scan_map_matching_reliability;
      *(outbuffer + offset + 0) = (u_scan_map_matching_reliability.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_scan_map_matching_reliability.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_scan_map_matching_reliability.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_scan_map_matching_reliability.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->scan_map_matching_reliability);
      union {
        float real;
        uint32_t base;
      } u_total_estimated_reliability;
      u_total_estimated_reliability.real = this->total_estimated_reliability;
      *(outbuffer + offset + 0) = (u_total_estimated_reliability.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_total_estimated_reliability.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_total_estimated_reliability.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_total_estimated_reliability.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->total_estimated_reliability);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        float real;
        uint32_t base;
      } u_covar_mat_reliability;
      u_covar_mat_reliability.base = 0;
      u_covar_mat_reliability.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_covar_mat_reliability.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_covar_mat_reliability.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_covar_mat_reliability.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->covar_mat_reliability = u_covar_mat_reliability.real;
      offset += sizeof(this->covar_mat_reliability);
      union {
        float real;
        uint32_t base;
      } u_odom_drift_reliability;
      u_odom_drift_reliability.base = 0;
      u_odom_drift_reliability.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_odom_drift_reliability.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_odom_drift_reliability.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_odom_drift_reliability.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->odom_drift_reliability = u_odom_drift_reliability.real;
      offset += sizeof(this->odom_drift_reliability);
      union {
        float real;
        uint32_t base;
      } u_odom_jump_reliability;
      u_odom_jump_reliability.base = 0;
      u_odom_jump_reliability.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_odom_jump_reliability.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_odom_jump_reliability.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_odom_jump_reliability.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->odom_jump_reliability = u_odom_jump_reliability.real;
      offset += sizeof(this->odom_jump_reliability);
      union {
        float real;
        uint32_t base;
      } u_amcl_pose_within_map_reliability;
      u_amcl_pose_within_map_reliability.base = 0;
      u_amcl_pose_within_map_reliability.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_amcl_pose_within_map_reliability.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_amcl_pose_within_map_reliability.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_amcl_pose_within_map_reliability.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->amcl_pose_within_map_reliability = u_amcl_pose_within_map_reliability.real;
      offset += sizeof(this->amcl_pose_within_map_reliability);
      union {
        float real;
        uint32_t base;
      } u_particlecloud_spread_reliability;
      u_particlecloud_spread_reliability.base = 0;
      u_particlecloud_spread_reliability.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_particlecloud_spread_reliability.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_particlecloud_spread_reliability.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_particlecloud_spread_reliability.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->particlecloud_spread_reliability = u_particlecloud_spread_reliability.real;
      offset += sizeof(this->particlecloud_spread_reliability);
      union {
        float real;
        uint32_t base;
      } u_scan_map_matching_reliability;
      u_scan_map_matching_reliability.base = 0;
      u_scan_map_matching_reliability.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_scan_map_matching_reliability.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_scan_map_matching_reliability.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_scan_map_matching_reliability.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->scan_map_matching_reliability = u_scan_map_matching_reliability.real;
      offset += sizeof(this->scan_map_matching_reliability);
      union {
        float real;
        uint32_t base;
      } u_total_estimated_reliability;
      u_total_estimated_reliability.base = 0;
      u_total_estimated_reliability.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_total_estimated_reliability.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_total_estimated_reliability.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_total_estimated_reliability.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->total_estimated_reliability = u_total_estimated_reliability.real;
      offset += sizeof(this->total_estimated_reliability);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/LocalizationReliability"; };
    virtual const char * getMD5() override { return "41512cc8d349ba1e32ae5969b7a1f46f"; };

  };

}
#endif
