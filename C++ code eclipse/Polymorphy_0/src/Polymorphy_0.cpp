//============================================================================
// Name        : Polymorphy_0.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class Shape {
public:
	virtual double getArea() = 0;

	virtual void WhoAmI(){
		cout << "I am a Shape" << endl;
	}

	void WhoAmIFromNotVirtualMethod() {
		cout << "I am a Shape (from not virtual method)" << endl;
	}
};

class Circle: public Shape {
private:
	double radius;
public:
	Circle (double r){
		radius = r;
	}
	virtual double getArea() override {
		return 3.14 * radius * radius;
	}

	virtual void WhoAmI() override {
		cout << "I am a Circle" << endl;
	}

	void WhoAmIFromNotVirtualMethod(){
	  cout << "I am a Circle (from not virtual method)" << endl;
	}
};

class Rectangle: public Shape {
private:
	double width, length;
public:
	Rectangle (double w, double l){
		width = w;
		length = l;
	}

	virtual double getArea() override {
		return length * width;
	}

	virtual void WhoAmI() override {
		cout << "I am a Rectangle" << endl;
	}

	void WhoAmIFromNotVirtualMethod() {
	  cout << "I am a Rectangle (from not virtual method)" << endl;
	}
};

void TellMeWhoIAm(Shape& shape) {
	shape.WhoAmI();
	shape.WhoAmIFromNotVirtualMethod();
}

int main() {
	cout << "Program starting" << endl;

	// real objects
	Circle circle(2);
	Rectangle rectangle(2,3);

	// pointers / references using abstract base class
	Shape* pointerToSomeShape = &circle;
	Shape* pointerToAnotherShape = &rectangle;
	Shape& referenceToAShape = circle;

	cout << "Area of Circle: " << circle.getArea() << endl;
	cout << "Area Rect:" << rectangle.getArea() << endl;
	cout << "Area of pointerToSomeShape" << pointerToSomeShape->getArea() << endl;
	cout << "Area of pointerToAnotherShape" << pointerToAnotherShape->getArea() << endl;
	cout << "Area of referenceToAShape" << referenceToAShape.getArea() << endl;

	cout << endl << "calling TellMeWhoIAm with circle:" << endl;
	TellMeWhoIAm(circle);
	circle.WhoAmIFromNotVirtualMethod();

	cout << endl << "calling TellMeWhoIAm with rectangle:" << endl;
	TellMeWhoIAm(rectangle);
	rectangle.WhoAmIFromNotVirtualMethod();

	cout << endl << "calling TellMeWhoIAm with pointerToSomeShape:" << endl;
	TellMeWhoIAm(*pointerToSomeShape);
	pointerToSomeShape->WhoAmIFromNotVirtualMethod();

	cout << endl << "calling TellMeWhoIAm with pointerToAnotherShape:" << endl;
	TellMeWhoIAm(*pointerToAnotherShape);
	pointerToAnotherShape->WhoAmIFromNotVirtualMethod();

	cout << endl << "calling TellMeWhoIAm with referenceToAShape:" << endl;
	TellMeWhoIAm(referenceToAShape);
	referenceToAShape.WhoAmIFromNotVirtualMethod();

	return 0;
}


