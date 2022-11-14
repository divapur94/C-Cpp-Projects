//============================================================================
// Name        : Test_0.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int b = 2;
	int& a = b;
	a = 11;

	int *aa;
	int bb =2;
	aa = &bb;
	cout << *aa << endl;
	cout << b << endl;
	return 0;
}
