

#include "IGpio.hpp"

void IGpio::Toggle()
{
	//bool currentValue = this-> Read();
	//bool inverseValue = !Read();
	//this->Write(inverseValue);
	Write(!Read());
}

