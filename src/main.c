/**
* @license Apache-2.0
*
* Copyright (c) 2022 The Stdlib Authors.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*    http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include "stdlib/math/base/special/rad2deg.h"

// 180.0 / π
static const double CONST_180_DIV_PI = 57.29577951308232;

/**
* Converts an angle from radians to degrees.
*
* @param x    input value (in radians)
* @return     output value (in degrees)
*
* @example
* double x = 3.141592653589793/2.0;
*
* double out = stdlib_base_rad2deg( x );
* // returns 90.0
*/
double stdlib_base_rad2deg( const double x ) {
	return x * CONST_180_DIV_PI;
}
