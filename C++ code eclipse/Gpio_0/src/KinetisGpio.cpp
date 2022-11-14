/*
 * KinetisGpio.cpp
 *
 *  Created on: May 18, 2022
 *      Author: amir
 */
#include <iostream>
#include "KinetisGpio.hpp"

bool KinetisGpio::Read(){
	std::cout << "Read from Kinetis GPIO" << std::endl;
	//return false;
}
void KinetisGpio::Write(bool value){
	std::cout << "Write to Kinetis GPIO" << std::endl;
}
