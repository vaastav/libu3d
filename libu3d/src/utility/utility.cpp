#include "../../utilities/utility.hpp"
#include <cmath>

namespace U3D
{
	F32 Utility::InverseQuant(F32 predVal, U32 sign, U32 qpd, F32 iqf)
	{
		F32 reconstructedVal = predVal + (1 - 2 * sign) * qpd * iqf;
		return reconstructedVal;
	}

	U32 Utility::CalcQuantSign(F32 origVal, F32 predVal)
	{
		U32 sign = 0;
		if (predVal > origVal)
		{
			sign = 1;
		}
		return sign;
	}

	U32 Utility::CalcQuantPredictionDifference(F32 origVal, F32 predVal, F32 iqf)
	{
		U32 qpd = 0;
		qpd = abs(origVal - predVal) * (1.0 / iqf) + 0.5;
		return qpd;
	}
}
