/*
 * circ.hpp
 *
 *  Created on: May 17, 2022
 *      Author: amir
 */

#ifndef CIRC_H_
#define CIRC_H_

class circle {
private:
	double radius;
public:
	circle ();
	circle (double r);
	circle (circle& other);
	double area();
	void setRadius(double r);
};

#endif /* CIRC_H_ */
