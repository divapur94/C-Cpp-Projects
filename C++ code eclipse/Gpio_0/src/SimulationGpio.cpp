/*
 * SimulationGpio.cpp
 *
 *  Created on: May 18, 2022
 *      Author: amir
 */

#include "SimulationGpio.hpp"

SimulationGpio::SimulationGpio() {}
	// TODO Auto-generated constructor stub
bool SimulationGpio::Read(){
	return _value;
}
void SimulationGpio::Write(bool value){
	_value = value;
}


