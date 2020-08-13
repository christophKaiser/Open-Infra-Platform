/*
	Copyright (c) 2018 Technical University of Munich
	Chair of Computational Modeling and Simulation.

	TUM Open Infra Platform is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License Version 3
	as published by the Free Software Foundation.

	TUM Open Infra Platform is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include <vector>
#include "IfcGeometryConverter/CarveHeaders.h"

namespace OpenInfraPlatform
{
	namespace UserInterface
	{
		/*! \brief The class provides functions to interpret / convert the stroke of a sketch to an alignment.
		 *
		 * \c convertSketchToAlignment is the current main function.
		 */
		class SplineInterpretation
		{
		public:
			// CONSTRUCTOR
			/*! \brief Default constructor of \c SplineInterpretation
			 */
			SplineInterpretation();

			// FUNCTIONS
			/*! \brief Converts the stroke of a sketch to an alignment.
			 *
			 * During execution, the user decides whether the input data will be sketched on screen or 
			 * will be loaded from a file. The function interprets the data and convert it to an alignment.
			 */
			void convertSketchToAlignment();

		private:
			// VARIABLES

			// FUNCTIONS
			/*! \brief Generates the open uniform knot array of a B-Spline.
			 *
			 * The elements \c x_i of an open uniform knot array is defined by: \n
			 * \c x_i=0 if \c 1<=i<=order \n
			 * \c x_i=i-order if \c order+1<=i<=numberOfControlPoints \n
			 * \c x_i=numberOfControlPoints-order+1 if \c numberOfControlPoints+1<=i<=numberOfControlPoints+order \n
			 * (vector indices according to mathematical one-based definition)
			 */
			std::vector<double> obtainKnotArrayOpenUniform(const size_t nPoints, const int order);

		}; // end of class SplineInterpretation
	}
}