//============================================================================
// Name        : Inheretance_1.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template <typename Z> Z myMax(Z x, Z y)
{
	return x>y ? x : y;
}


class base {
public:
	base (){
		cout << "base class, default constructor" << endl;
	}
	base (float i){
		cout << "base class, parameterized constructor " << i <<endl;
	}
};

class derived {
public:
	derived () {
		cout << "derived class, default constructor" << endl;
	}
	derived (float i){
		cout << "derived class, parameterized constructor " << i << endl;
	}
};

int main() {
	base b;
	base b2{2};
	derived d;
	derived d2{2.2};
	int a=12;
	int e=10;
	float c = static_cast<float> (a)/e;
	cout << "C is: " << c << endl;
	cout << "myMax is: " << myMax <int> (3,5) << endl;
	return 0;
}
