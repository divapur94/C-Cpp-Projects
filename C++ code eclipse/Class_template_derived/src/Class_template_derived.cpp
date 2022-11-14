//============================================================================
// Name        : Class_template_derived.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template <class T>
struct Base_Class {
//public:
	void func(){
		cout << "Calling func from Base_Class" << endl;
	}
};

template <class T>
struct Derived_Class : Base_Class<T> {
//public:
	void func2(){
		cout << "Calling func2 from Derived_Class" << endl;
		Base_Class<T> ::func();
	}
};

int main() {
	Derived_Class<char> a;
	a.func2();
	return 0;
}
