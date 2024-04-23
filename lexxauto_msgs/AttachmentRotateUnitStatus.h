#ifndef _ROS_lexxauto_msgs_AttachmentRotateUnitStatus_h
#define _ROS_lexxauto_msgs_AttachmentRotateUnitStatus_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace lexxauto_msgs
{

  class AttachmentRotateUnitStatus : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef bool _is_available_type;
      _is_available_type is_available;
      typedef double _attachment_rotation_unit_angle_type;
      _attachment_rotation_unit_angle_type attachment_rotation_unit_angle;

    AttachmentRotateUnitStatus():
      header(),
      is_available(0),
      attachment_rotation_unit_angle(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_is_available;
      u_is_available.real = this->is_available;
      *(outbuffer + offset + 0) = (u_is_available.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->is_available);
      union {
        double real;
        uint64_t base;
      } u_attachment_rotation_unit_angle;
      u_attachment_rotation_unit_angle.real = this->attachment_rotation_unit_angle;
      *(outbuffer + offset + 0) = (u_attachment_rotation_unit_angle.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_attachment_rotation_unit_angle.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_attachment_rotation_unit_angle.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_attachment_rotation_unit_angle.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_attachment_rotation_unit_angle.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_attachment_rotation_unit_angle.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_attachment_rotation_unit_angle.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_attachment_rotation_unit_angle.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->attachment_rotation_unit_angle);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_is_available;
      u_is_available.base = 0;
      u_is_available.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->is_available = u_is_available.real;
      offset += sizeof(this->is_available);
      union {
        double real;
        uint64_t base;
      } u_attachment_rotation_unit_angle;
      u_attachment_rotation_unit_angle.base = 0;
      u_attachment_rotation_unit_angle.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_attachment_rotation_unit_angle.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_attachment_rotation_unit_angle.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_attachment_rotation_unit_angle.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_attachment_rotation_unit_angle.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_attachment_rotation_unit_angle.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_attachment_rotation_unit_angle.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_attachment_rotation_unit_angle.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->attachment_rotation_unit_angle = u_attachment_rotation_unit_angle.real;
      offset += sizeof(this->attachment_rotation_unit_angle);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/AttachmentRotateUnitStatus"; };
    virtual const char * getMD5() override { return "d81201d68205ca43dfab91a8c019da3f"; };

  };

}
#endif
