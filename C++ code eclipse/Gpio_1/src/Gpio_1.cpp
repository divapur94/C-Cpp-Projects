//============================================================================
// Name        : Gpio_1.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <unistd.h>
#include "IGpio.hpp"
#include "KinetisGpio.hpp"

using namespace std;

void Toggle(IGpio& p){
	p.toggle();
}

int main() {
	IGpio* pin11;

	KinetisGpio Kin11;
	KinetisGpio Kin22;

	pin11 = &Kin11;
	IGpio& pin22 = Kin22;

	pin11->Read();

	pin22.Write(0);

	for (;;){
		Toggle(pin22);
		//pin22.Read();
		sleep(1);
	}

	return 0;
}
