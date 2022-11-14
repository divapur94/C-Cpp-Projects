//============================================================================
// Name        : function_pointer.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void func1(){
	cout << "hello from func1" << endl;
}

void func2(){
	cout << "hello from func2" << endl;
}

int main() {
	void (*func_test[])() = {func1, func2};
	(func_test[0])();
	return 0;
}
