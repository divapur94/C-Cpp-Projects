//============================================================================
// Name        : Stepper_Driver.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ITimer.hpp"
#include "LPCTimer.hpp"

using namespace std;

int main() {
	ITimer* timer;
	LPCTimer LPC_timer;
	timer = &LPC_timer;
	timer->startTimer();

	auto myfunc = [](){cout<<"lambda called"<<endl;};
	timer->registerCallback(myfunc);
	return 0;
}
