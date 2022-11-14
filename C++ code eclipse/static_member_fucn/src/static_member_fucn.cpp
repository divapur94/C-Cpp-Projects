//============================================================================
// Name        : static_member_fucn.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class generateID{
	static int nx_ID;
public:
	static int getnx_ID();
};

int generateID::nx_ID {2};
int generateID::getnx_ID(){
	return generateID::nx_ID++;
}

enum class student{
	akbar=0,
	asghar,
	hadi,
	mehdi
};

int main() {
	for(int i{0}; i<8 ; ++i){
		cout << "Next ID is (using static):" << generateID::getnx_ID() << endl;
		student a = student::akbar;
		if(a == student::akbar)
			cout << "akbar is here" << endl;
	}
	return 0;
}
