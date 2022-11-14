//============================================================================
// Name        : Stdfunction_1_callback.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <functional>
#include "calc.hpp"

using namespace std;

int main() {
	int a;
	calc B;
	auto square = [](int x)-> int { return x*x;};
	auto cube = [](int x)-> int {return x*x*x;};
	cout << "Enter a number: " << endl;
	cin >> a;
	a = B.calculate(a, square, cube);
	cout << endl << a;
	return 0;
}
