/* Quaternion32.h
 * MSG file auto generated by "Rutgers avr_bridge"
 */
#ifndef QUATERNION32_H_
#define QUATERNION32_H_
#include "avr_ros/Msg.h"
#include "avr_ros/vector.h"
#include "avr_ros/ros_string.h"
namespace higgs_arduino {
	class Quaternion32 : public ros::Msg {
	public:
		virtual ros::MsgSz bytes();
		virtual ros::MsgSz serialize(uint8_t *out_buffer);
		virtual ros::MsgSz deserialize(uint8_t *data);
		float x;
		float y;
		float z;
		float w;
	}; /* class Quaternion32 */
} /* namespace higgs_arduino */
#endif /* QUATERNION32_H_ */
