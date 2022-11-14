/*
 * calc.hpp
 *
 *  Created on: Jul 21, 2022
 *      Author: amir
 */

#ifndef CALC_HPP_
#define CALC_HPP_
#include <functional>

class calc {
public:
	int calculate (int, const std::function <int(int)>&, const std::function <int(int)>&);
};

#endif /* CALC_HPP_ */
