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

/* Auto-generated by genmsg_cpp from file /home/zhb/PX4-new/PX4-Autopilot/msg/VehicleGlobalPosition.msg */


#include <inttypes.h>
#include <px4_platform_common/log.h>
#include <px4_platform_common/defines.h>
#include <uORB/topics/vehicle_global_position.h>
#include <uORB/topics/uORBTopics.hpp>
#include <drivers/drv_hrt.h>
#include <lib/drivers/device/Device.hpp>
#include <lib/matrix/matrix/math.hpp>
#include <lib/mathlib/mathlib.h>

constexpr char __orb_vehicle_global_position_fields[] = "\x89 timestamp;\x89 timestamp_sample;\x8b lat;\x8b lon;\x8a alt;\x8a alt_ellipsoid;\x8a delta_alt;\x8a eph;\x8a epv;\x8a terrain_alt;\x86 lat_lon_reset_counter;\x86 alt_reset_counter;\x8c terrain_alt_valid;\x8c dead_reckoning;\x86[4] _padding0;";

ORB_DEFINE(vehicle_global_position, struct vehicle_global_position_s, 60, __orb_vehicle_global_position_fields, static_cast<uint8_t>(ORB_ID::vehicle_global_position));
ORB_DEFINE(vehicle_global_position_groundtruth, struct vehicle_global_position_s, 60, __orb_vehicle_global_position_fields, static_cast<uint8_t>(ORB_ID::vehicle_global_position_groundtruth));
ORB_DEFINE(external_ins_global_position, struct vehicle_global_position_s, 60, __orb_vehicle_global_position_fields, static_cast<uint8_t>(ORB_ID::external_ins_global_position));
ORB_DEFINE(estimator_global_position, struct vehicle_global_position_s, 60, __orb_vehicle_global_position_fields, static_cast<uint8_t>(ORB_ID::estimator_global_position));


void print_message(const orb_metadata *meta, const vehicle_global_position_s& message)
{
	if (sizeof(message) != meta->o_size) {
		printf("unexpected message size for %s: %zu != %i\n", meta->o_name, sizeof(message), meta->o_size);
		return;
	}
	orb_print_message_internal(meta, &message, true);
}
