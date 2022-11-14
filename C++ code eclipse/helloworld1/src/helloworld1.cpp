//============================================================================
// Name        : helloworld1.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Circle.h"

using namespace std;


void foo(Circle& c8) {
	std::cout << "foo called" << std::endl;
	c8.setRadius(3);
	cout << "new area is " << c8.area() << std::endl;
}

int main() {
	Circle c {2};
	cout << "new area is " << c.area() << std::endl;

	Circle c2 (c);
	cout << "new area is " << c2.area() << std::endl;

	foo(c);

	cout << "new area is " << c2.area() << std::endl;
	return 0;

}
