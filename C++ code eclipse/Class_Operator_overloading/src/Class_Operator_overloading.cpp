//============================================================================
// Name        : Class_Operator_overloading.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template <class T>
class Complex {
	T re, im;
public:
	Complex (){
		im = 0;
		re = 0;
	}
	Complex (T a, T b){
		im = b;
		re = a;
	}
	Complex operator + (Complex const &obj){
		Complex Result;
		Result.re = re + obj.re;
		Result.im = im + obj.im;
		return Result;
	}
	void PrintComplex(){
		cout << re << " + i" << im << endl;
	}
};

int main() {
	Complex<double> a (3.1, 4.1);
	Complex<double> b (2.3, 5.2);
	Complex<double> c;
	a.PrintComplex();
	b.PrintComplex();
	c.PrintComplex();
	c = a+b;
	c.PrintComplex();
	return 0;
}
