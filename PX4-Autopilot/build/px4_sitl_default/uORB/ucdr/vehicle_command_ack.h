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
#include <uORB/topics/vehicle_command_ack.h>


static inline constexpr int ucdr_topic_size_vehicle_command_ack()
{
	return 23;
}

bool ucdr_serialize_vehicle_command_ack(const vehicle_command_ack_s& topic, ucdrBuffer& buf, int64_t time_offset = 0)
{
	static_assert(sizeof(topic.timestamp) == 8, "size mismatch");
	const uint64_t timestamp_adjusted = topic.timestamp + time_offset;
	memcpy(buf.iterator, &timestamp_adjusted, sizeof(topic.timestamp));
	buf.iterator += sizeof(topic.timestamp);
	buf.offset += sizeof(topic.timestamp);
	static_assert(sizeof(topic.command) == 4, "size mismatch");
	memcpy(buf.iterator, &topic.command, sizeof(topic.command));
	buf.iterator += sizeof(topic.command);
	buf.offset += sizeof(topic.command);
	static_assert(sizeof(topic.result) == 1, "size mismatch");
	memcpy(buf.iterator, &topic.result, sizeof(topic.result));
	buf.iterator += sizeof(topic.result);
	buf.offset += sizeof(topic.result);
	static_assert(sizeof(topic.result_param1) == 1, "size mismatch");
	memcpy(buf.iterator, &topic.result_param1, sizeof(topic.result_param1));
	buf.iterator += sizeof(topic.result_param1);
	buf.offset += sizeof(topic.result_param1);
	buf.iterator += 2; // padding
	buf.offset += 2; // padding
	static_assert(sizeof(topic.result_param2) == 4, "size mismatch");
	memcpy(buf.iterator, &topic.result_param2, sizeof(topic.result_param2));
	buf.iterator += sizeof(topic.result_param2);
	buf.offset += sizeof(topic.result_param2);
	static_assert(sizeof(topic.target_system) == 1, "size mismatch");
	memcpy(buf.iterator, &topic.target_system, sizeof(topic.target_system));
	buf.iterator += sizeof(topic.target_system);
	buf.offset += sizeof(topic.target_system);
	static_assert(sizeof(topic.target_component) == 1, "size mismatch");
	memcpy(buf.iterator, &topic.target_component, sizeof(topic.target_component));
	buf.iterator += sizeof(topic.target_component);
	buf.offset += sizeof(topic.target_component);
	static_assert(sizeof(topic.from_external) == 1, "size mismatch");
	memcpy(buf.iterator, &topic.from_external, sizeof(topic.from_external));
	buf.iterator += sizeof(topic.from_external);
	buf.offset += sizeof(topic.from_external);
	return true;
}

bool ucdr_deserialize_vehicle_command_ack(ucdrBuffer& buf, vehicle_command_ack_s& topic, int64_t time_offset = 0)
{
	static_assert(sizeof(topic.timestamp) == 8, "size mismatch");
	memcpy(&topic.timestamp, buf.iterator, sizeof(topic.timestamp));
	if (topic.timestamp == 0) topic.timestamp = hrt_absolute_time();
	else topic.timestamp = math::min(topic.timestamp - time_offset, hrt_absolute_time());
	buf.iterator += sizeof(topic.timestamp);
	buf.offset += sizeof(topic.timestamp);
	static_assert(sizeof(topic.command) == 4, "size mismatch");
	memcpy(&topic.command, buf.iterator, sizeof(topic.command));
	buf.iterator += sizeof(topic.command);
	buf.offset += sizeof(topic.command);
	static_assert(sizeof(topic.result) == 1, "size mismatch");
	memcpy(&topic.result, buf.iterator, sizeof(topic.result));
	buf.iterator += sizeof(topic.result);
	buf.offset += sizeof(topic.result);
	static_assert(sizeof(topic.result_param1) == 1, "size mismatch");
	memcpy(&topic.result_param1, buf.iterator, sizeof(topic.result_param1));
	buf.iterator += sizeof(topic.result_param1);
	buf.offset += sizeof(topic.result_param1);
	buf.iterator += 2; // padding
	buf.offset += 2; // padding
	static_assert(sizeof(topic.result_param2) == 4, "size mismatch");
	memcpy(&topic.result_param2, buf.iterator, sizeof(topic.result_param2));
	buf.iterator += sizeof(topic.result_param2);
	buf.offset += sizeof(topic.result_param2);
	static_assert(sizeof(topic.target_system) == 1, "size mismatch");
	memcpy(&topic.target_system, buf.iterator, sizeof(topic.target_system));
	buf.iterator += sizeof(topic.target_system);
	buf.offset += sizeof(topic.target_system);
	static_assert(sizeof(topic.target_component) == 1, "size mismatch");
	memcpy(&topic.target_component, buf.iterator, sizeof(topic.target_component));
	buf.iterator += sizeof(topic.target_component);
	buf.offset += sizeof(topic.target_component);
	static_assert(sizeof(topic.from_external) == 1, "size mismatch");
	memcpy(&topic.from_external, buf.iterator, sizeof(topic.from_external));
	buf.iterator += sizeof(topic.from_external);
	buf.offset += sizeof(topic.from_external);
	return true;
}
