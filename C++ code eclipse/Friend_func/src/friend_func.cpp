//============================================================================
// Name        : friend_func.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Ball {
private:
	double radius;
	string color;
public:
	Ball(){
		radius = 0;
		color = "";
	}
	Ball(double r = 0, string c = "not modified") : radius (r) , color (c){}
	void printVolume ();
	void printRadius ();
	void printColor ();
	friend void setRadius(Ball& _b, double r);
};

void Ball :: printVolume(){
	double vol = (4/3) * 3.14 * radius * radius * radius;
	cout << "Volume is " << vol << endl;
}

void Ball :: printRadius(){
	cout << "Radius is " << radius << endl;
}

void Ball ::  printColor(){
	cout << "color is " << color << endl;
}

void setRadius(Ball& _b, double r){
	_b.radius = r;
}

int main() {

	Ball volleyball(10, "blue");
	volleyball.printRadius();
	volleyball.printVolume();
	volleyball.printColor();

	setRadius(volleyball, 4);
	volleyball.printRadius();
	volleyball.printVolume();
	volleyball.printColor();

	return 0;
}
