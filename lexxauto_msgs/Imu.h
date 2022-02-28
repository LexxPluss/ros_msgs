#ifndef _ROS_lexxauto_msgs_Imu_h
#define _ROS_lexxauto_msgs_Imu_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "geometry_msgs/Vector3.h"

namespace lexxauto_msgs
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

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->vel.serialize(outbuffer + offset);
      offset += this->accel.serialize(outbuffer + offset);
      offset += this->ang.serialize(outbuffer + offset);
      offset += this->gyro.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->vel.deserialize(inbuffer + offset);
      offset += this->accel.deserialize(inbuffer + offset);
      offset += this->ang.deserialize(inbuffer + offset);
      offset += this->gyro.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "lexxauto_msgs/Imu"; };
    const char * getMD5(){ return "a3dd8e0f22c6b70b08a627b100690339"; };

  };

}
#endif
