#pragma once

#include "datatype.hpp"

namespace U3D 
{

	class Texture
	{
		F32 m_u, m_v, m_w, m_x;

	public:
		Texture( F32 u, F32 v, F32 w, F32 x) : m_u(u), m_v(v), m_w(w), m_x(x) {}
		Texture( F32 u, F32 v) : m_u(u), m_v(v), m_w(0.0f), m_x(0.0f) {}

		void setU(F32 u) { m_u = u; }
		void setV(F32 v) { m_v = v; }
		void setW(F32 w) { m_w = w; }
		void setX(F32 x) { m_x = x; }

		F32 U() { return m_u; }
		F32 V() { return m_v; }
		F32 W() { return m_w; }
		F32 X() { return m_x; }
	};
} // namespace u3d