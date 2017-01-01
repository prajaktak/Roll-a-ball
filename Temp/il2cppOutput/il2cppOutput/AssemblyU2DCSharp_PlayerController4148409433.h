﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerController::speed
	float ___speed_2;
	// UnityEngine.UI.Text PlayerController::countText
	Text_t356221433 * ___countText_3;
	// UnityEngine.UI.Text PlayerController::winText
	Text_t356221433 * ___winText_4;
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t4233889191 * ___rb_5;
	// System.Int32 PlayerController::count
	int32_t ___count_6;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_countText_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___countText_3)); }
	inline Text_t356221433 * get_countText_3() const { return ___countText_3; }
	inline Text_t356221433 ** get_address_of_countText_3() { return &___countText_3; }
	inline void set_countText_3(Text_t356221433 * value)
	{
		___countText_3 = value;
		Il2CppCodeGenWriteBarrier(&___countText_3, value);
	}

	inline static int32_t get_offset_of_winText_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___winText_4)); }
	inline Text_t356221433 * get_winText_4() const { return ___winText_4; }
	inline Text_t356221433 ** get_address_of_winText_4() { return &___winText_4; }
	inline void set_winText_4(Text_t356221433 * value)
	{
		___winText_4 = value;
		Il2CppCodeGenWriteBarrier(&___winText_4, value);
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___rb_5)); }
	inline Rigidbody_t4233889191 * get_rb_5() const { return ___rb_5; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody_t4233889191 * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier(&___rb_5, value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___count_6)); }
	inline int32_t get_count_6() const { return ___count_6; }
	inline int32_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(int32_t value)
	{
		___count_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
