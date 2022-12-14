#pragma once

#include "vector"
#include "string"

namespace Odyssey
{
	template <typename T>
	using Vector = std::vector<T>;
	using String = std::string;

	using u32 = uint32_t;
	using u16 = uint16_t;
	using u8 = uint8_t;
	using i32 = int32_t;
	using i16 = int16_t;
	using i8 = int8_t;
}