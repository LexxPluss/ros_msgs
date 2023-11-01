#ifndef _ROS_lexxauto_msgs_BoardTemperatures_h
#define _ROS_lexxauto_msgs_BoardTemperatures_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "sensor_msgs/Temperature.h"

namespace lexxauto_msgs
{

  class BoardTemperatures : public ros::Msg
  {
    public:
      typedef sensor_msgs::Temperature _main_type;
      _main_type main;
      typedef sensor_msgs::Temperature _power_type;
      _power_type power;
      typedef sensor_msgs::Temperature _linear_actuator_center_type;
      _linear_actuator_center_type linear_actuator_center;
      typedef sensor_msgs::Temperature _linear_actuator_left_type;
      _linear_actuator_left_type linear_actuator_left;
      typedef sensor_msgs::Temperature _linear_actuator_right_type;
      _linear_actuator_right_type linear_actuator_right;
      typedef sensor_msgs::Temperature _charge_plus_type;
      _charge_plus_type charge_plus;
      typedef sensor_msgs::Temperature _charge_minus_type;
      _charge_minus_type charge_minus;

    BoardTemperatures():
      main(),
      power(),
      linear_actuator_center(),
      linear_actuator_left(),
      linear_actuator_right(),
      charge_plus(),
      charge_minus()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      offset += this->main.serialize(outbuffer + offset);
      offset += this->power.serialize(outbuffer + offset);
      offset += this->linear_actuator_center.serialize(outbuffer + offset);
      offset += this->linear_actuator_left.serialize(outbuffer + offset);
      offset += this->linear_actuator_right.serialize(outbuffer + offset);
      offset += this->charge_plus.serialize(outbuffer + offset);
      offset += this->charge_minus.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      offset += this->main.deserialize(inbuffer + offset);
      offset += this->power.deserialize(inbuffer + offset);
      offset += this->linear_actuator_center.deserialize(inbuffer + offset);
      offset += this->linear_actuator_left.deserialize(inbuffer + offset);
      offset += this->linear_actuator_right.deserialize(inbuffer + offset);
      offset += this->charge_plus.deserialize(inbuffer + offset);
      offset += this->charge_minus.deserialize(inbuffer + offset);
     return offset;
    }

    virtual const char * getType() override { return "lexxauto_msgs/BoardTemperatures"; };
    virtual const char * getMD5() override { return "a42e69a015ec838a78d43fc7898038a0"; };

  };

}
#endif
