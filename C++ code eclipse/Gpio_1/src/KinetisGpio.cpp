/*
 * KinetisGpio.cpp
 *
 *  Created on: Jul 4, 2022
 *      Author: amir
 */

#include "KinetisGpio.hpp"
#include <iostream>

bool t;

bool KinetisGpio::Read (){
	std::cout << "Pin has been read" << std::endl;
	return t;
}

void KinetisGpio::Write(bool a){
	t = a;
	std::cout << "Write " << a << " on pin" << std::endl;
}
