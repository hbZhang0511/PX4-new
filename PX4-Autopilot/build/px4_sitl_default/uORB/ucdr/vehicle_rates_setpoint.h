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


// auto-generated file

#pragma once

#include <ucdr/microcdr.h>
#include <string.h>
#include <uORB/topics/vehicle_rates_setpoint.h>


static inline constexpr int ucdr_topic_size_vehicle_rates_setpoint()
{
	return 33;
}

bool ucdr_serialize_vehicle_rates_setpoint(const vehicle_rates_setpoint_s& topic, ucdrBuffer& buf, int64_t time_offset = 0)
{
	static_assert(sizeof(topic.timestamp) == 8, "size mismatch");
	const uint64_t timestamp_adjusted = topic.timestamp + time_offset;
	memcpy(buf.iterator, &timestamp_adjusted, sizeof(topic.timestamp));
	buf.iterator += sizeof(topic.timestamp);
	buf.offset += sizeof(topic.timestamp);
	static_assert(sizeof(topic.roll) == 4, "size mismatch");
	memcpy(buf.iterator, &topic.roll, sizeof(topic.roll));
	buf.iterator += sizeof(topic.roll);
	buf.offset += sizeof(topic.roll);
	static_assert(sizeof(topic.pitch) == 4, "size mismatch");
	memcpy(buf.iterator, &topic.pitch, sizeof(topic.pitch));
	buf.iterator += sizeof(topic.pitch);
	buf.offset += sizeof(topic.pitch);
	static_assert(sizeof(topic.yaw) == 4, "size mismatch");
	memcpy(buf.iterator, &topic.yaw, sizeof(topic.yaw));
	buf.iterator += sizeof(topic.yaw);
	buf.offset += sizeof(topic.yaw);
	static_assert(sizeof(topic.thrust_body) == 12, "size mismatch");
	memcpy(buf.iterator, &topic.thrust_body, sizeof(topic.thrust_body));
	buf.iterator += sizeof(topic.thrust_body);
	buf.offset += sizeof(topic.thrust_body);
	static_assert(sizeof(topic.reset_integral) == 1, "size mismatch");
	memcpy(buf.iterator, &topic.reset_integral, sizeof(topic.reset_integral));
	buf.iterator += sizeof(topic.reset_integral);
	buf.offset += sizeof(topic.reset_integral);
	return true;
}

bool ucdr_deserialize_vehicle_rates_setpoint(ucdrBuffer& buf, vehicle_rates_setpoint_s& topic, int64_t time_offset = 0)
{
	static_assert(sizeof(topic.timestamp) == 8, "size mismatch");
	memcpy(&topic.timestamp, buf.iterator, sizeof(topic.timestamp));
	if (topic.timestamp == 0) topic.timestamp = hrt_absolute_time();
	else topic.timestamp = math::min(topic.timestamp - time_offset, hrt_absolute_time());
	buf.iterator += sizeof(topic.timestamp);
	buf.offset += sizeof(topic.timestamp);
	static_assert(sizeof(topic.roll) == 4, "size mismatch");
	memcpy(&topic.roll, buf.iterator, sizeof(topic.roll));
	buf.iterator += sizeof(topic.roll);
	buf.offset += sizeof(topic.roll);
	static_assert(sizeof(topic.pitch) == 4, "size mismatch");
	memcpy(&topic.pitch, buf.iterator, sizeof(topic.pitch));
	buf.iterator += sizeof(topic.pitch);
	buf.offset += sizeof(topic.pitch);
	static_assert(sizeof(topic.yaw) == 4, "size mismatch");
	memcpy(&topic.yaw, buf.iterator, sizeof(topic.yaw));
	buf.iterator += sizeof(topic.yaw);
	buf.offset += sizeof(topic.yaw);
	static_assert(sizeof(topic.thrust_body) == 12, "size mismatch");
	memcpy(&topic.thrust_body, buf.iterator, sizeof(topic.thrust_body));
	buf.iterator += sizeof(topic.thrust_body);
	buf.offset += sizeof(topic.thrust_body);
	static_assert(sizeof(topic.reset_integral) == 1, "size mismatch");
	memcpy(&topic.reset_integral, buf.iterator, sizeof(topic.reset_integral));
	buf.iterator += sizeof(topic.reset_integral);
	buf.offset += sizeof(topic.reset_integral);
	return true;
}