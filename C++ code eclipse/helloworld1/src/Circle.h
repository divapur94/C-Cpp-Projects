/*
 * Circle.h
 *
 *  Created on: May 10, 2022
 *      Author: amir
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle{
	double radius;
	double pi;

public:
	// default constructor:
	Circle ();

	// parametrized ctor:
	Circle (double r);

	// copy ctor:
	Circle (const Circle& other);

	double area();
	double perimeter();

	void setRadius(double radius);
};


#endif /* CIRCLE_H_ */
