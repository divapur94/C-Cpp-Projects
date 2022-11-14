#include "circ.h"

circle :: circle (){
}

circle :: circle (double r){
	radius = r;
}

circle :: circle (circle& other){
	this->radius = other.radius;
}

double circle :: area (){
	return 3.14 * radius * radius;
}

void circle :: setRadius(double r){
	radius =r;
}
