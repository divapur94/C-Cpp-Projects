//============================================================================
// Name        : Class_template.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


enum direction
{
	West=3,
	East=5,
	South=2,
	North=122
	};

template <typename T>
class Base {
public:
	void func1() const {
		cout << "func1()" << endl;
	}
	void func2() const{
		cout << "func2()" << endl;
	}
	void func3() const{
		cout << "func3()" << endl;
	}
};

template <typename T>
class Derived : public Base <T> {
public:
	using Base<T>::func2;
	void CallFunctionFromDerived(){
		Base<T>::func1();
		func2();
		this->func3();
	}
};

int main() {
	Derived<int> d;
	d.CallFunctionFromDerived();
	direction L;
	L = North;
	cout << L << endl;

	return 0;
}
