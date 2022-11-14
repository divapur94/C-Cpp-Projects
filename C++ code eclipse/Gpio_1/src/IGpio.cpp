/*
 * IGpio.cpp
 *
 *  Created on: Jul 4, 2022
 *      Author: amir
 */

#include "IGpio.hpp"

void IGpio::toggle(){
	Write(!Read());
}
