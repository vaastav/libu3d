#pragma once

#include "../datatypes/datatype.hpp"

namespace U3D
{
	namespace Utility
	{
		/**
		 * Inverse Quantization function mandated by ECMA 363 in Section 5.3.3
		 *
		 * @param predVal Predicted Value
		 * @param sign    Sign of the prediction difference
		 * @param qpd     Quantized Prediction Difference
		 * @param iqf     Inverse Quantization Factor
		 *
		 * @return Reconstructed Value calculated using the formula provided in section 5.3.3
		 *
		 * @note recVal = predVal + (1 - 2*sign) * qpd * iqf
		 */
		F32 InverseQuant(F32 predVal, U32 sign, U32 qpd, F32 iqf);

		/**
		 * Calculate the sign for quantization
		 *
		 * @param origVal Original Value
		 * @param predVal Predicted Value
         *
		 * @return The sign of the prediction difference
		 */
		U32 CalcQuantSign(F32 origVal, F32 predVal);

		/**
		 * Calculate the Quanitzed Prediction Difference
		 *
		 * @param origVal Original Value
		 * @param predVal Predicted Value
		 * @param iqf     Inverse Quantization Factor
		 *
		 * @return Quantized Prediction Difference
		 */
		U32 CalcQuantPredictionDifference(F32 origVal, F32 predVal, F32 iqf);
	} // namespace U3D::Utility
} // namespace U3D

