//============================================================================
// Name        : lambda_callback.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;
volatile int val=2;

int main() {

	auto Operation = [](int a, int b, string op) -> double{
		if(op == "sum"){
			return a+b-val;
		}
		else if(op == "avg"){
			return (a+b)/2.0;
		}
	};
	auto Adder = Operation(3,4,"sum");
	auto avg = 	Operation(3,4,"avg");
	cout << Adder << endl;
	cout << avg << endl;
	return 0;
}
