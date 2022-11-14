//============================================================================
// Name        : Gpio_0.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <unistd.h>
#include "IGpio.hpp"
#include "SimulationGpio.hpp"
#include "KinetisGpio.hpp"

using namespace std;

void toggle(IGpio& gpio){
//	if(gpio.Read()){
//		gpio.Write(false);
//	}
//	else {
//		gpio.Write(true);
//	}
//	gpio.Write(!gpio.Read());
	gpio.Toggle();
}

int main() {
	IGpio* pin1;
	SimulationGpio sim1;
	SimulationGpio sim2;
	KinetisGpio kinetisPin1;

	pin1 = &sim1;

	IGpio& pin3 = kinetisPin1;

	//IGpio& pin2 = sim2;


	for(;;) {
		toggle(*pin1);
		std::cout << "value of pin: " << pin1->Read() << std::endl;
		std::cout << pin3.Read();
		sleep(1);
	}

	/*
	for(;;) {
		toggle(pin2);
		std::cout << "value of pin: " << pin2.Read() << std::endl;
		std::cout << "value of sim: " << sim2.Read() << std::endl;
		sleep(1);
	}
	*/

	return 0;
}
