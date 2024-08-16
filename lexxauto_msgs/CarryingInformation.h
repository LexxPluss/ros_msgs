#ifndef _ROS_lexxauto_msgs_CarryingInformation_h
#define _ROS_lexxauto_msgs_CarryingInformation_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "geometry_msgs/Polygon.h"

namespace lexxauto_msgs
{

  class CarryingInformation : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef geometry_msgs::Polygon _footprint_type;
      _footprint_type footprint;
      typedef const char* _carrying_mode_type;
      _carrying_mode_type carrying_mode;
      typedef const char* _footprint_mode_type;
      _footprint_mode_type footprint_mode;
      typedef bool _weight_applied_type;
      _weight_applied_type weight_applied;
      typedef bool _sub_wheel_grounded_type;
      _sub_wheel_grounded_type sub_wheel_grounded;
      typedef bool _cart_rotation_enabled_type;
      _cart_rotation_enabled_type cart_rotation_enabled;
      typedef double _cart_angle_type;
      _cart_angle_type cart_angle;
      typedef bool _lost_cart_type;
      _lost_cart_type lost_cart;
      enum { CARRYING_MODE_SOLO = solo };
      enum { CARRYING_MODE_TUG_H = tug_h };
      enum { CARRYING_MODE_TUNNELING = tunneling };
      enum { CARRYING_MODE_LIFT = lift };
      enum { FOOTPRINT_MODE_ORIGINAL = original };
      enum { FOOTPRINT_MODE_CARRYING = carrying };

    CarryingInformation():
      header(),
      footprint(),
      carrying_mode(""),
      footprint_mode(""),
      weight_applied(0),
      sub_wheel_grounded(0),
      cart_rotation_enabled(0),
      cart_angle(0),
      lost_cart(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->footprint.serialize(outbuffer + offset);
      uint32_t length_carrying_mode = strlen(this->carrying_mode);
      varToArr(outbuffer + offset, length_carrying_mode);
      offset += 4;
      memcpy(outbuffer + offset, this->carrying_mode, length_carrying_mode);
      offset += length_carrying_mode;
      uint32_t length_footprint_mode = strlen(this->footprint_mode);
      varToArr(outbuffer + offset, length_footprint_mode);
      offset += 4;
      memcpy(outbuffer + offset, this->footprint_mode, length_footprint_mode);
      offset += length_footprint_mode;
      union {
        bool real;
        uint8_t base;
      } u_weight_applied;
      u_weight_applied.real = this->weight_applied;
      *(outbuffer + offset + 0) = (u_weight_applied.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->weight_applied);
      union {
        bool real;
        uint8_t base;
      } u_sub_wheel_grounded;
      u_sub_wheel_grounded.real = this->sub_wheel_grounded;
      *(outbuffer + offset + 0) = (u_sub_wheel_grounded.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->sub_wheel_grounded);
      union {
        bool real;
        uint8_t base;
      } u_cart_rotation_enabled;
      u_cart_rotation_enabled.real = this->cart_rotation_enabled;
      *(outbuffer + offset + 0) = (u_cart_rotation_enabled.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->cart_rotation_enabled);
      union {
        double real;
        uint64_t base;
      } u_cart_angle;
      u_cart_angle.real = this->cart_angle;
      *(outbuffer + offset + 0) = (u_cart_angle.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cart_angle.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cart_angle.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cart_angle.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_cart_angle.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_cart_angle.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_cart_angle.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_cart_angle.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->cart_angle);
      union {
        bool real;
        uint8_t base;
      } u_lost_cart;
      u_lost_cart.real = this->lost_cart;
      *(outbuffer + offset + 0) = (u_lost_cart.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->lost_cart);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->footprint.deserialize(inbuffer + offset);
      uint32_t length_carrying_mode;
      arrToVar(length_carrying_mode, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_carrying_mode; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_carrying_mode-1]=0;
      this->carrying_mode = (char *)(inbuffer + offset-1);
      offset += length_carrying_mode;
      uint32_t length_footprint_mode;
      arrToVar(length_footprint_mode, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_footprint_mode; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_footprint_mode-1]=0;
      this->footprint_mode = (char *)(inbuffer + offset-1);
      offset += length_footprint_mode;
      union {
        bool real;
        uint8_t base;
      } u_weight_applied;
      u_weight_applied.base = 0;
      u_weight_applied.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->weight_applied = u_weight_applied.real;
      offset += sizeof(this->weight_applied);
      union {
        bool real;
        uint8_t base;
      } u_sub_wheel_grounded;
      u_sub_wheel_grounded.base = 0;
      u_sub_wheel_grounded.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->sub_wheel_grounded = u_sub_wheel_grounded.real;
      offset += sizeof(this->sub_wheel_grounded);
      union {
        bool real;
        uint8_t base;
      } u_cart_rotation_enabled;
      u_cart_rotation_enabled.base = 0;
      u_cart_rotation_enabled.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->cart_rotation_enabled = u_cart_rotation_enabled.real;
      offset += sizeof(this->cart_rotation_enabled);
      union {
        double real;
        uint64_t base;
      } u_cart_angle;
      u_cart_angle.base = 0;
      u_cart_angle.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cart_angle.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cart_angle.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cart_angle.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_cart_angle.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_cart_angle.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_cart_angle.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_cart_angle.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->cart_angle = u_cart_angle.real;
      offset += sizeof(this->cart_angle);
      union {
        bool real;
        uint8_t base;
      } u_lost_cart;
      u_lost_cart.base = 0;
      u_lost_cart.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->lost_cart = u_lost_cart.real;
      offset += sizeof(this->lost_cart);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/CarryingInformation"; };
    virtual const char * getMD5() override { return "bfcac7246553745d4aad542aa1262dde"; };

  };

}
#endif
