#pragma once

#include "datatype.hpp"

#include <string>

namespace U3D
{

	class U3DString
	{
		U16 m_size;
		std::string m_string;
	public:

		U3DString(const std::string& s)
		{
			m_size = s.size();
			m_string = s;
		}

		void write(std::ostream& out)
		{
			write_value<U16>(out, m_size);
			//out.write(m_string.c_str(), m_size);
		}

	};
} // namespace u3d
