#ifndef _ROS_scbdriver_Imu_h
#define _ROS_scbdriver_Imu_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "geometry_msgs/Vector3.h"

namespace scbdriver
{

  class Imu : public ros::Msg
  {
    public:
      typedef geometry_msgs::Vector3 _vel_type;
      _vel_type vel;
      typedef geometry_msgs::Vector3 _accel_type;
      _accel_type accel;
      typedef geometry_msgs::Vector3 _ang_type;
      _ang_type ang;
      typedef geometry_msgs::Vector3 _gyro_type;
      _gyro_type gyro;

    Imu():
      vel(),
      accel(),
      ang(),
      gyro()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->vel.serialize(outbuffer + offset);
      offset += this->accel.serialize(outbuffer + offset);
      offset += this->ang.serialize(outbuffer + offset);
      offset += this->gyro.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->vel.deserialize(inbuffer + offset);
      offset += this->accel.deserialize(inbuffer + offset);
      offset += this->ang.deserialize(inbuffer + offset);
      offset += this->gyro.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return "scbdriver/Imu"; };
    virtual const char * getMD5() override { return "a3dd8e0f22c6b70b08a627b100690339"; };

  };

}
#endif
