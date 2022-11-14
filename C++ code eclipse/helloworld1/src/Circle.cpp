/*
 * Circle.c
 *
 *  Created on: May 10, 2022
 *      Author: amir
 */

#include <iostream>
#include "Circle.h"

Circle::Circle(){
	std::cout << "default ctor " << std::endl;
	radius = 1;
	pi = 3.14;
}

Circle::Circle(double r){
	std::cout << "parametrized ctor " << std::endl;
	radius = r;
	pi = 3.14;
}

Circle::Circle(const Circle& other)
{
	std::cout << "copy ctor " << std::endl;
	this->radius = other.radius;
	this->pi = other.pi;
}

double Circle::area(){
	return pi * radius * radius;
}

double Circle::perimeter(){
	return 2 * pi * radius;
}

void Circle::setRadius(double radius)
{
	this->radius = radius;
}
