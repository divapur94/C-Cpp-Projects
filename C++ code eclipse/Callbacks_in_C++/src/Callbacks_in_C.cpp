//============================================================================
// Name        : Callbacks_in_C.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//define the type of function used for callback
typedef void (*callback_t)(int);

//define a function that is used to register a callback
void test_call_back(int a){
	std::cout << "I am func from callback" << a << std::endl;
}

//void call_back_func (callback_t BACK){
//	int a = 5;
//	BACK(a);
//}

int main(){
	//void (*call_back)(int);
	//call_back = test_call_back;
	//call_back_func(call_back);

	callback_t BACK_1;
	BACK_1 = test_call_back;
	//call_back_func(BACK_1);
	BACK_1(6);
	return 0;
}
