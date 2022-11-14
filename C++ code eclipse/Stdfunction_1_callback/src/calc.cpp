/*
 * calc.cpp
 *
 *  Created on: Jul 21, 2022
 *      Author: amir
 */

#include "calc.hpp"

int calc::calculate(int a, const std::function<int(int)> &calcSquare, const std::function<int(int)> &calcCube){
	if(a%2 == 0){
		return calcSquare(a);
	}
	else{
		return calcCube(a);
	}
}
