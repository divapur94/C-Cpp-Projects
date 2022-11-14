//============================================================================
// Name        : Polymorphy_1.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Shape{
public:
	virtual float getArea() = 0;
};

class Circle: public Shape{
private:
	float radius;
public:
	Circle(float r){
		radius = r;
	}
	virtual float getArea(){
		return 3.14 * radius * radius;
	}
};

class Rectangle: public Shape{
private:
	float width, length;
public:
	Rectangle(float w, float l){
		width = w;
		length = l;
	}
	virtual float getArea(){
		return width * length;
	}
};

int main() {
	Circle circle_0(11);
	Rectangle rectangle_0(6,3);
	//Shape* pointerToShapeCircle = &circle_0;
	//Shape* pointerToShapeRectangle = &rectangle_0;
	Shape& refToShapeCircle = circle_0;
	Shape& refToShapeRectangle = rectangle_0;
	//cout << endl << "area of Circle_0 is: " << pointerToShapeCircle -> getArea() << endl;
	//cout << "area of Rectangle_0 is: " << pointerToShapeRectangle.getArea() << endl;
	cout << endl << "area of Circle_0 is: " << refToShapeCircle.getArea() << endl;
	cout << "area of Rectangle_0 is: " << refToShapeRectangle.getArea() << endl;
	return 0;
}
