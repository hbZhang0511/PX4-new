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

/* Auto-generated by genmsg_cpp from file /home/zhb/PX4-new/PX4-Autopilot/msg/EstimatorAidSource1d.msg */


#pragma once


#include <uORB/uORB.h>


#ifndef __cplusplus

#endif


#ifdef __cplusplus
struct __EXPORT estimator_aid_source1d_s {
#else
struct estimator_aid_source1d_s {
#endif
	uint64_t timestamp;
	uint64_t timestamp_sample;
	uint64_t time_last_fuse;
	uint32_t device_id;
	float observation;
	float observation_variance;
	float innovation;
	float innovation_variance;
	float test_ratio;
	uint8_t estimator_instance;
	bool fusion_enabled;
	bool innovation_rejected;
	bool fused;
	uint8_t _padding0[4]; // required for logger


#ifdef __cplusplus

#endif
};

#ifdef __cplusplus
namespace px4 {
	namespace msg {
		using EstimatorAidSource1d = estimator_aid_source1d_s;
	} // namespace msg
} // namespace px4
#endif

/* register this as object request broker structure */
ORB_DECLARE(estimator_aid_src_baro_hgt);
ORB_DECLARE(estimator_aid_src_ev_hgt);
ORB_DECLARE(estimator_aid_src_gnss_hgt);
ORB_DECLARE(estimator_aid_src_rng_hgt);
ORB_DECLARE(estimator_aid_src_airspeed);
ORB_DECLARE(estimator_aid_src_sideslip);
ORB_DECLARE(estimator_aid_src_fake_hgt);
ORB_DECLARE(estimator_aid_src_mag_heading);
ORB_DECLARE(estimator_aid_src_gnss_yaw);
ORB_DECLARE(estimator_aid_src_ev_yaw);


#ifdef __cplusplus
void print_message(const orb_metadata *meta, const estimator_aid_source1d_s& message);
#endif
