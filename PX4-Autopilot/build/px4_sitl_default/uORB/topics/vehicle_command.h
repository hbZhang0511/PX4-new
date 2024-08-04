/****************************************************************************
 *
 *   Copyright (C) 2013-2022 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/* Auto-generated by genmsg_cpp from file /home/zhb/PX4-new/PX4-Autopilot/msg/VehicleCommand.msg */


#pragma once


#include <uORB/uORB.h>


#ifndef __cplusplus
#define VEHICLE_COMMAND_VEHICLE_CMD_CUSTOM_0 0
#define VEHICLE_COMMAND_VEHICLE_CMD_CUSTOM_1 1
#define VEHICLE_COMMAND_VEHICLE_CMD_CUSTOM_2 2
#define VEHICLE_COMMAND_VEHICLE_CMD_NAV_WAYPOINT 16
#define VEHICLE_COMMAND_VEHICLE_CMD_NAV_LOITER_UNLIM 17
#define VEHICLE_COMMAND_VEHICLE_CMD_NAV_LOITER_TURNS 18
#define VEHICLE_COMMAND_VEHICLE_CMD_NAV_LOITER_TIME 19
#define VEHICLE_COMMAND_VEHICLE_CMD_NAV_RETURN_TO_LAUNCH 20
#define VEHICLE_COMMAND_VEHICLE_CMD_NAV_LAND 21
#define VEHICLE_COMMAND_VEHICLE_CMD_NAV_TAKEOFF 22
#define VEHICLE_COMMAND_VEHICLE_CMD_NAV_PRECLAND 23
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_ORBIT 34
#define VEHICLE_COMMAND_VEHICLE_CMD_NAV_ROI 80
#define VEHICLE_COMMAND_VEHICLE_CMD_NAV_PATHPLANNING 81
#define VEHICLE_COMMAND_VEHICLE_CMD_NAV_VTOL_TAKEOFF 84
#define VEHICLE_COMMAND_VEHICLE_CMD_NAV_VTOL_LAND 85
#define VEHICLE_COMMAND_VEHICLE_CMD_NAV_GUIDED_LIMITS 90
#define VEHICLE_COMMAND_VEHICLE_CMD_NAV_GUIDED_MASTER 91
#define VEHICLE_COMMAND_VEHICLE_CMD_NAV_DELAY 93
#define VEHICLE_COMMAND_VEHICLE_CMD_NAV_LAST 95
#define VEHICLE_COMMAND_VEHICLE_CMD_CONDITION_DELAY 112
#define VEHICLE_COMMAND_VEHICLE_CMD_CONDITION_CHANGE_ALT 113
#define VEHICLE_COMMAND_VEHICLE_CMD_CONDITION_DISTANCE 114
#define VEHICLE_COMMAND_VEHICLE_CMD_CONDITION_YAW 115
#define VEHICLE_COMMAND_VEHICLE_CMD_CONDITION_LAST 159
#define VEHICLE_COMMAND_VEHICLE_CMD_CONDITION_GATE 4501
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_SET_MODE 176
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_JUMP 177
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_CHANGE_SPEED 178
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_SET_HOME 179
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_SET_PARAMETER 180
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_SET_RELAY 181
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_REPEAT_RELAY 182
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_REPEAT_SERVO 184
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_FLIGHTTERMINATION 185
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_CHANGE_ALTITUDE 186
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_SET_ACTUATOR 187
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_LAND_START 189
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_GO_AROUND 191
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_REPOSITION 192
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_PAUSE_CONTINUE 193
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_SET_ROI_LOCATION 195
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_SET_ROI_WPNEXT_OFFSET 196
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_SET_ROI_NONE 197
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_CONTROL_VIDEO 200
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_SET_ROI 201
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_DIGICAM_CONTROL 203
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_MOUNT_CONFIGURE 204
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_MOUNT_CONTROL 205
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_SET_CAM_TRIGG_DIST 206
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_FENCE_ENABLE 207
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_PARACHUTE 208
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_MOTOR_TEST 209
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_INVERTED_FLIGHT 210
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_GRIPPER 211
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_SET_CAM_TRIGG_INTERVAL 214
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_MOUNT_CONTROL_QUAT 220
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_GUIDED_MASTER 221
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_GUIDED_LIMITS 222
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_LAST 240
#define VEHICLE_COMMAND_VEHICLE_CMD_PREFLIGHT_CALIBRATION 241
#define VEHICLE_COMMAND_PREFLIGHT_CALIBRATION_TEMPERATURE_CALIBRATION 3
#define VEHICLE_COMMAND_VEHICLE_CMD_PREFLIGHT_SET_SENSOR_OFFSETS 242
#define VEHICLE_COMMAND_VEHICLE_CMD_PREFLIGHT_UAVCAN 243
#define VEHICLE_COMMAND_VEHICLE_CMD_PREFLIGHT_STORAGE 245
#define VEHICLE_COMMAND_VEHICLE_CMD_PREFLIGHT_REBOOT_SHUTDOWN 246
#define VEHICLE_COMMAND_VEHICLE_CMD_OBLIQUE_SURVEY 260
#define VEHICLE_COMMAND_VEHICLE_CMD_GIMBAL_DEVICE_INFORMATION 283
#define VEHICLE_COMMAND_VEHICLE_CMD_MISSION_START 300
#define VEHICLE_COMMAND_VEHICLE_CMD_ACTUATOR_TEST 310
#define VEHICLE_COMMAND_VEHICLE_CMD_CONFIGURE_ACTUATOR 311
#define VEHICLE_COMMAND_VEHICLE_CMD_COMPONENT_ARM_DISARM 400
#define VEHICLE_COMMAND_VEHICLE_CMD_RUN_PREARM_CHECKS 401
#define VEHICLE_COMMAND_VEHICLE_CMD_INJECT_FAILURE 420
#define VEHICLE_COMMAND_VEHICLE_CMD_START_RX_PAIR 500
#define VEHICLE_COMMAND_VEHICLE_CMD_REQUEST_MESSAGE 512
#define VEHICLE_COMMAND_VEHICLE_CMD_SET_CAMERA_MODE 530
#define VEHICLE_COMMAND_VEHICLE_CMD_SET_CAMERA_ZOOM 531
#define VEHICLE_COMMAND_VEHICLE_CMD_SET_CAMERA_FOCUS 532
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_GIMBAL_MANAGER_PITCHYAW 1000
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_GIMBAL_MANAGER_CONFIGURE 1001
#define VEHICLE_COMMAND_VEHICLE_CMD_IMAGE_START_CAPTURE 2000
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_TRIGGER_CONTROL 2003
#define VEHICLE_COMMAND_VEHICLE_CMD_VIDEO_START_CAPTURE 2500
#define VEHICLE_COMMAND_VEHICLE_CMD_VIDEO_STOP_CAPTURE 2501
#define VEHICLE_COMMAND_VEHICLE_CMD_LOGGING_START 2510
#define VEHICLE_COMMAND_VEHICLE_CMD_LOGGING_STOP 2511
#define VEHICLE_COMMAND_VEHICLE_CMD_CONTROL_HIGH_LATENCY 2600
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_VTOL_TRANSITION 3000
#define VEHICLE_COMMAND_VEHICLE_CMD_ARM_AUTHORIZATION_REQUEST 3001
#define VEHICLE_COMMAND_VEHICLE_CMD_PAYLOAD_PREPARE_DEPLOY 30001
#define VEHICLE_COMMAND_VEHICLE_CMD_PAYLOAD_CONTROL_DEPLOY 30002
#define VEHICLE_COMMAND_VEHICLE_CMD_FIXED_MAG_CAL_YAW 42006
#define VEHICLE_COMMAND_VEHICLE_CMD_DO_WINCH 42600
#define VEHICLE_COMMAND_VEHICLE_CMD_PX4_INTERNAL_START 65537
#define VEHICLE_COMMAND_VEHICLE_CMD_SET_GPS_GLOBAL_ORIGIN 100000
#define VEHICLE_COMMAND_VEHICLE_MOUNT_MODE_RETRACT 0
#define VEHICLE_COMMAND_VEHICLE_MOUNT_MODE_NEUTRAL 1
#define VEHICLE_COMMAND_VEHICLE_MOUNT_MODE_MAVLINK_TARGETING 2
#define VEHICLE_COMMAND_VEHICLE_MOUNT_MODE_RC_TARGETING 3
#define VEHICLE_COMMAND_VEHICLE_MOUNT_MODE_GPS_POINT 4
#define VEHICLE_COMMAND_VEHICLE_MOUNT_MODE_ENUM_END 5
#define VEHICLE_COMMAND_VEHICLE_ROI_NONE 0
#define VEHICLE_COMMAND_VEHICLE_ROI_WPNEXT 1
#define VEHICLE_COMMAND_VEHICLE_ROI_WPINDEX 2
#define VEHICLE_COMMAND_VEHICLE_ROI_LOCATION 3
#define VEHICLE_COMMAND_VEHICLE_ROI_TARGET 4
#define VEHICLE_COMMAND_VEHICLE_ROI_ENUM_END 5
#define VEHICLE_COMMAND_PARACHUTE_ACTION_DISABLE 0
#define VEHICLE_COMMAND_PARACHUTE_ACTION_ENABLE 1
#define VEHICLE_COMMAND_PARACHUTE_ACTION_RELEASE 2
#define VEHICLE_COMMAND_FAILURE_UNIT_SENSOR_GYRO 0
#define VEHICLE_COMMAND_FAILURE_UNIT_SENSOR_ACCEL 1
#define VEHICLE_COMMAND_FAILURE_UNIT_SENSOR_MAG 2
#define VEHICLE_COMMAND_FAILURE_UNIT_SENSOR_BARO 3
#define VEHICLE_COMMAND_FAILURE_UNIT_SENSOR_GPS 4
#define VEHICLE_COMMAND_FAILURE_UNIT_SENSOR_OPTICAL_FLOW 5
#define VEHICLE_COMMAND_FAILURE_UNIT_SENSOR_VIO 6
#define VEHICLE_COMMAND_FAILURE_UNIT_SENSOR_DISTANCE_SENSOR 7
#define VEHICLE_COMMAND_FAILURE_UNIT_SENSOR_AIRSPEED 8
#define VEHICLE_COMMAND_FAILURE_UNIT_SYSTEM_BATTERY 100
#define VEHICLE_COMMAND_FAILURE_UNIT_SYSTEM_MOTOR 101
#define VEHICLE_COMMAND_FAILURE_UNIT_SYSTEM_SERVO 102
#define VEHICLE_COMMAND_FAILURE_UNIT_SYSTEM_AVOIDANCE 103
#define VEHICLE_COMMAND_FAILURE_UNIT_SYSTEM_RC_SIGNAL 104
#define VEHICLE_COMMAND_FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL 105
#define VEHICLE_COMMAND_FAILURE_TYPE_OK 0
#define VEHICLE_COMMAND_FAILURE_TYPE_OFF 1
#define VEHICLE_COMMAND_FAILURE_TYPE_STUCK 2
#define VEHICLE_COMMAND_FAILURE_TYPE_GARBAGE 3
#define VEHICLE_COMMAND_FAILURE_TYPE_WRONG 4
#define VEHICLE_COMMAND_FAILURE_TYPE_SLOW 5
#define VEHICLE_COMMAND_FAILURE_TYPE_DELAYED 6
#define VEHICLE_COMMAND_FAILURE_TYPE_INTERMITTENT 7
#define VEHICLE_COMMAND_SPEED_TYPE_AIRSPEED 0
#define VEHICLE_COMMAND_SPEED_TYPE_GROUNDSPEED 1
#define VEHICLE_COMMAND_SPEED_TYPE_CLIMB_SPEED 2
#define VEHICLE_COMMAND_SPEED_TYPE_DESCEND_SPEED 3
#define VEHICLE_COMMAND_ARMING_ACTION_DISARM 0
#define VEHICLE_COMMAND_ARMING_ACTION_ARM 1
#define VEHICLE_COMMAND_GRIPPER_ACTION_RELEASE 0
#define VEHICLE_COMMAND_GRIPPER_ACTION_GRAB 1
#define VEHICLE_COMMAND_ORB_QUEUE_LENGTH 8

#endif


#ifdef __cplusplus
struct __EXPORT vehicle_command_s {
#else
struct vehicle_command_s {
#endif
	uint64_t timestamp;
	double param5;
	double param6;
	float param1;
	float param2;
	float param3;
	float param4;
	float param7;
	uint32_t command;
	uint8_t target_system;
	uint8_t target_component;
	uint8_t source_system;
	uint8_t source_component;
	uint8_t confirmation;
	bool from_external;
	uint8_t _padding0[2]; // required for logger


#ifdef __cplusplus
	static constexpr uint16_t VEHICLE_CMD_CUSTOM_0 = 0;
	static constexpr uint16_t VEHICLE_CMD_CUSTOM_1 = 1;
	static constexpr uint16_t VEHICLE_CMD_CUSTOM_2 = 2;
	static constexpr uint16_t VEHICLE_CMD_NAV_WAYPOINT = 16;
	static constexpr uint16_t VEHICLE_CMD_NAV_LOITER_UNLIM = 17;
	static constexpr uint16_t VEHICLE_CMD_NAV_LOITER_TURNS = 18;
	static constexpr uint16_t VEHICLE_CMD_NAV_LOITER_TIME = 19;
	static constexpr uint16_t VEHICLE_CMD_NAV_RETURN_TO_LAUNCH = 20;
	static constexpr uint16_t VEHICLE_CMD_NAV_LAND = 21;
	static constexpr uint16_t VEHICLE_CMD_NAV_TAKEOFF = 22;
	static constexpr uint16_t VEHICLE_CMD_NAV_PRECLAND = 23;
	static constexpr uint16_t VEHICLE_CMD_DO_ORBIT = 34;
	static constexpr uint16_t VEHICLE_CMD_NAV_ROI = 80;
	static constexpr uint16_t VEHICLE_CMD_NAV_PATHPLANNING = 81;
	static constexpr uint16_t VEHICLE_CMD_NAV_VTOL_TAKEOFF = 84;
	static constexpr uint16_t VEHICLE_CMD_NAV_VTOL_LAND = 85;
	static constexpr uint16_t VEHICLE_CMD_NAV_GUIDED_LIMITS = 90;
	static constexpr uint16_t VEHICLE_CMD_NAV_GUIDED_MASTER = 91;
	static constexpr uint16_t VEHICLE_CMD_NAV_DELAY = 93;
	static constexpr uint16_t VEHICLE_CMD_NAV_LAST = 95;
	static constexpr uint16_t VEHICLE_CMD_CONDITION_DELAY = 112;
	static constexpr uint16_t VEHICLE_CMD_CONDITION_CHANGE_ALT = 113;
	static constexpr uint16_t VEHICLE_CMD_CONDITION_DISTANCE = 114;
	static constexpr uint16_t VEHICLE_CMD_CONDITION_YAW = 115;
	static constexpr uint16_t VEHICLE_CMD_CONDITION_LAST = 159;
	static constexpr uint16_t VEHICLE_CMD_CONDITION_GATE = 4501;
	static constexpr uint16_t VEHICLE_CMD_DO_SET_MODE = 176;
	static constexpr uint16_t VEHICLE_CMD_DO_JUMP = 177;
	static constexpr uint16_t VEHICLE_CMD_DO_CHANGE_SPEED = 178;
	static constexpr uint16_t VEHICLE_CMD_DO_SET_HOME = 179;
	static constexpr uint16_t VEHICLE_CMD_DO_SET_PARAMETER = 180;
	static constexpr uint16_t VEHICLE_CMD_DO_SET_RELAY = 181;
	static constexpr uint16_t VEHICLE_CMD_DO_REPEAT_RELAY = 182;
	static constexpr uint16_t VEHICLE_CMD_DO_REPEAT_SERVO = 184;
	static constexpr uint16_t VEHICLE_CMD_DO_FLIGHTTERMINATION = 185;
	static constexpr uint16_t VEHICLE_CMD_DO_CHANGE_ALTITUDE = 186;
	static constexpr uint16_t VEHICLE_CMD_DO_SET_ACTUATOR = 187;
	static constexpr uint16_t VEHICLE_CMD_DO_LAND_START = 189;
	static constexpr uint16_t VEHICLE_CMD_DO_GO_AROUND = 191;
	static constexpr uint16_t VEHICLE_CMD_DO_REPOSITION = 192;
	static constexpr uint16_t VEHICLE_CMD_DO_PAUSE_CONTINUE = 193;
	static constexpr uint16_t VEHICLE_CMD_DO_SET_ROI_LOCATION = 195;
	static constexpr uint16_t VEHICLE_CMD_DO_SET_ROI_WPNEXT_OFFSET = 196;
	static constexpr uint16_t VEHICLE_CMD_DO_SET_ROI_NONE = 197;
	static constexpr uint16_t VEHICLE_CMD_DO_CONTROL_VIDEO = 200;
	static constexpr uint16_t VEHICLE_CMD_DO_SET_ROI = 201;
	static constexpr uint16_t VEHICLE_CMD_DO_DIGICAM_CONTROL = 203;
	static constexpr uint16_t VEHICLE_CMD_DO_MOUNT_CONFIGURE = 204;
	static constexpr uint16_t VEHICLE_CMD_DO_MOUNT_CONTROL = 205;
	static constexpr uint16_t VEHICLE_CMD_DO_SET_CAM_TRIGG_DIST = 206;
	static constexpr uint16_t VEHICLE_CMD_DO_FENCE_ENABLE = 207;
	static constexpr uint16_t VEHICLE_CMD_DO_PARACHUTE = 208;
	static constexpr uint16_t VEHICLE_CMD_DO_MOTOR_TEST = 209;
	static constexpr uint16_t VEHICLE_CMD_DO_INVERTED_FLIGHT = 210;
	static constexpr uint16_t VEHICLE_CMD_DO_GRIPPER = 211;
	static constexpr uint16_t VEHICLE_CMD_DO_SET_CAM_TRIGG_INTERVAL = 214;
	static constexpr uint16_t VEHICLE_CMD_DO_MOUNT_CONTROL_QUAT = 220;
	static constexpr uint16_t VEHICLE_CMD_DO_GUIDED_MASTER = 221;
	static constexpr uint16_t VEHICLE_CMD_DO_GUIDED_LIMITS = 222;
	static constexpr uint16_t VEHICLE_CMD_DO_LAST = 240;
	static constexpr uint16_t VEHICLE_CMD_PREFLIGHT_CALIBRATION = 241;
	static constexpr uint16_t PREFLIGHT_CALIBRATION_TEMPERATURE_CALIBRATION = 3;
	static constexpr uint16_t VEHICLE_CMD_PREFLIGHT_SET_SENSOR_OFFSETS = 242;
	static constexpr uint16_t VEHICLE_CMD_PREFLIGHT_UAVCAN = 243;
	static constexpr uint16_t VEHICLE_CMD_PREFLIGHT_STORAGE = 245;
	static constexpr uint16_t VEHICLE_CMD_PREFLIGHT_REBOOT_SHUTDOWN = 246;
	static constexpr uint16_t VEHICLE_CMD_OBLIQUE_SURVEY = 260;
	static constexpr uint16_t VEHICLE_CMD_GIMBAL_DEVICE_INFORMATION = 283;
	static constexpr uint16_t VEHICLE_CMD_MISSION_START = 300;
	static constexpr uint16_t VEHICLE_CMD_ACTUATOR_TEST = 310;
	static constexpr uint16_t VEHICLE_CMD_CONFIGURE_ACTUATOR = 311;
	static constexpr uint16_t VEHICLE_CMD_COMPONENT_ARM_DISARM = 400;
	static constexpr uint16_t VEHICLE_CMD_RUN_PREARM_CHECKS = 401;
	static constexpr uint16_t VEHICLE_CMD_INJECT_FAILURE = 420;
	static constexpr uint16_t VEHICLE_CMD_START_RX_PAIR = 500;
	static constexpr uint16_t VEHICLE_CMD_REQUEST_MESSAGE = 512;
	static constexpr uint16_t VEHICLE_CMD_SET_CAMERA_MODE = 530;
	static constexpr uint16_t VEHICLE_CMD_SET_CAMERA_ZOOM = 531;
	static constexpr uint16_t VEHICLE_CMD_SET_CAMERA_FOCUS = 532;
	static constexpr uint16_t VEHICLE_CMD_DO_GIMBAL_MANAGER_PITCHYAW = 1000;
	static constexpr uint16_t VEHICLE_CMD_DO_GIMBAL_MANAGER_CONFIGURE = 1001;
	static constexpr uint16_t VEHICLE_CMD_IMAGE_START_CAPTURE = 2000;
	static constexpr uint16_t VEHICLE_CMD_DO_TRIGGER_CONTROL = 2003;
	static constexpr uint16_t VEHICLE_CMD_VIDEO_START_CAPTURE = 2500;
	static constexpr uint16_t VEHICLE_CMD_VIDEO_STOP_CAPTURE = 2501;
	static constexpr uint16_t VEHICLE_CMD_LOGGING_START = 2510;
	static constexpr uint16_t VEHICLE_CMD_LOGGING_STOP = 2511;
	static constexpr uint16_t VEHICLE_CMD_CONTROL_HIGH_LATENCY = 2600;
	static constexpr uint16_t VEHICLE_CMD_DO_VTOL_TRANSITION = 3000;
	static constexpr uint16_t VEHICLE_CMD_ARM_AUTHORIZATION_REQUEST = 3001;
	static constexpr uint16_t VEHICLE_CMD_PAYLOAD_PREPARE_DEPLOY = 30001;
	static constexpr uint16_t VEHICLE_CMD_PAYLOAD_CONTROL_DEPLOY = 30002;
	static constexpr uint16_t VEHICLE_CMD_FIXED_MAG_CAL_YAW = 42006;
	static constexpr uint16_t VEHICLE_CMD_DO_WINCH = 42600;
	static constexpr uint32_t VEHICLE_CMD_PX4_INTERNAL_START = 65537;
	static constexpr uint32_t VEHICLE_CMD_SET_GPS_GLOBAL_ORIGIN = 100000;
	static constexpr uint8_t VEHICLE_MOUNT_MODE_RETRACT = 0;
	static constexpr uint8_t VEHICLE_MOUNT_MODE_NEUTRAL = 1;
	static constexpr uint8_t VEHICLE_MOUNT_MODE_MAVLINK_TARGETING = 2;
	static constexpr uint8_t VEHICLE_MOUNT_MODE_RC_TARGETING = 3;
	static constexpr uint8_t VEHICLE_MOUNT_MODE_GPS_POINT = 4;
	static constexpr uint8_t VEHICLE_MOUNT_MODE_ENUM_END = 5;
	static constexpr uint8_t VEHICLE_ROI_NONE = 0;
	static constexpr uint8_t VEHICLE_ROI_WPNEXT = 1;
	static constexpr uint8_t VEHICLE_ROI_WPINDEX = 2;
	static constexpr uint8_t VEHICLE_ROI_LOCATION = 3;
	static constexpr uint8_t VEHICLE_ROI_TARGET = 4;
	static constexpr uint8_t VEHICLE_ROI_ENUM_END = 5;
	static constexpr uint8_t PARACHUTE_ACTION_DISABLE = 0;
	static constexpr uint8_t PARACHUTE_ACTION_ENABLE = 1;
	static constexpr uint8_t PARACHUTE_ACTION_RELEASE = 2;
	static constexpr uint8_t FAILURE_UNIT_SENSOR_GYRO = 0;
	static constexpr uint8_t FAILURE_UNIT_SENSOR_ACCEL = 1;
	static constexpr uint8_t FAILURE_UNIT_SENSOR_MAG = 2;
	static constexpr uint8_t FAILURE_UNIT_SENSOR_BARO = 3;
	static constexpr uint8_t FAILURE_UNIT_SENSOR_GPS = 4;
	static constexpr uint8_t FAILURE_UNIT_SENSOR_OPTICAL_FLOW = 5;
	static constexpr uint8_t FAILURE_UNIT_SENSOR_VIO = 6;
	static constexpr uint8_t FAILURE_UNIT_SENSOR_DISTANCE_SENSOR = 7;
	static constexpr uint8_t FAILURE_UNIT_SENSOR_AIRSPEED = 8;
	static constexpr uint8_t FAILURE_UNIT_SYSTEM_BATTERY = 100;
	static constexpr uint8_t FAILURE_UNIT_SYSTEM_MOTOR = 101;
	static constexpr uint8_t FAILURE_UNIT_SYSTEM_SERVO = 102;
	static constexpr uint8_t FAILURE_UNIT_SYSTEM_AVOIDANCE = 103;
	static constexpr uint8_t FAILURE_UNIT_SYSTEM_RC_SIGNAL = 104;
	static constexpr uint8_t FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL = 105;
	static constexpr uint8_t FAILURE_TYPE_OK = 0;
	static constexpr uint8_t FAILURE_TYPE_OFF = 1;
	static constexpr uint8_t FAILURE_TYPE_STUCK = 2;
	static constexpr uint8_t FAILURE_TYPE_GARBAGE = 3;
	static constexpr uint8_t FAILURE_TYPE_WRONG = 4;
	static constexpr uint8_t FAILURE_TYPE_SLOW = 5;
	static constexpr uint8_t FAILURE_TYPE_DELAYED = 6;
	static constexpr uint8_t FAILURE_TYPE_INTERMITTENT = 7;
	static constexpr uint8_t SPEED_TYPE_AIRSPEED = 0;
	static constexpr uint8_t SPEED_TYPE_GROUNDSPEED = 1;
	static constexpr uint8_t SPEED_TYPE_CLIMB_SPEED = 2;
	static constexpr uint8_t SPEED_TYPE_DESCEND_SPEED = 3;
	static constexpr int8_t ARMING_ACTION_DISARM = 0;
	static constexpr int8_t ARMING_ACTION_ARM = 1;
	static constexpr uint8_t GRIPPER_ACTION_RELEASE = 0;
	static constexpr uint8_t GRIPPER_ACTION_GRAB = 1;
	static constexpr uint8_t ORB_QUEUE_LENGTH = 8;

#endif
};

#ifdef __cplusplus
namespace px4 {
	namespace msg {
		using VehicleCommand = vehicle_command_s;
	} // namespace msg
} // namespace px4
#endif

/* register this as object request broker structure */
ORB_DECLARE(vehicle_command);
ORB_DECLARE(gimbal_v1_command);


#ifdef __cplusplus
void print_message(const orb_metadata *meta, const vehicle_command_s& message);
#endif
