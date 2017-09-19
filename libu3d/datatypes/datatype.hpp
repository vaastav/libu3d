#pragma once

#include <cstdint>
#include <fstream>

namespace U3D
{
	typedef uint8_t U8;
	typedef uint16_t U16;
	typedef uint32_t U32;
	typedef uint64_t U64;
	typedef int16_t I16;
	typedef int32_t I32;
	typedef float F32;
	typedef double F64;

	template<class T>
	void write_value(std::ostream& out, T& value)
	{
		out.write(reinterpret_cast<const char*>(&value), sizeof(T));
	}

} // namespace u3d