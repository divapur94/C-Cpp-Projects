//============================================================================
// Name        : Stdfunction_0.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <functional>

using namespace std;

int addtoone(int a){
	return a+1;
}
const std::function <int(int)> makeAdder(int value_1){
	return [value_1](int value_2){return value_1 + value_2;};
}

int main() {
	auto add5 = makeAdder(5);
	auto add6 = makeAdder(6);
	std::cout << add5(11) << std::endl;
	std::cout << add6(14) << std::endl;

	return 0;
}
