//============================================================================
// Name        : Callbacks_0.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

typedef void (*callback_t)(void);

void sayHello(){
	cout << "!!!Hello World3!!!" << endl;
}

struct account{
	account& operator + (double x){
		balance += (2*x);
		return *this;
	}
	double balance;
};

int main() {
	callback_t amir;
	//void (*amir)(){&sayHello};
	cout << "before " << amir <<endl;
	amir = sayHello;
	cout << "after " << amir <<endl;
	amir();

	account A;
	A.balance = 10;
	A = A + 12;
	cout << A.balance << endl;
	return 0;
}
