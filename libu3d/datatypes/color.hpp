#pragma once

#include "datatype.hpp"

namespace U3D 
{

	/**
	 * Object representing a Color in RGB format
	 *
	 * @note Values of r, g and b must lie in the range [0.0,1.0]
	 */
	class Color
	{
		F32 m_r, m_g, m_b;

	public:

		Color() : m_r(0.0f), m_g(0.0f), m_b(0.0f) {}
		Color(F32 r, F32 g, F32 b) : m_r(r), m_g(g), m_b(b) {}

		F32 r() const { return m_r; }
		F32 g() const { return m_g; }
		F32 b() const { return m_b; }

		void setR(F32 r) { m_r = r; }
		void setG(F32 g) { m_g = g; }
		void setB(F32 b) { m_b = b; }

		void write(std::ostream& out)
		{
			write_value<F32>(out,m_r);
			write_value<F32>(out,m_g);
			write_value<F32>(out,m_b);
		}
	};

} // namespace u3d
