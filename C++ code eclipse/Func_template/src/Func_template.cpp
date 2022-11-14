//============================================================================
// Name        : Func_template.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template <int N, typename T>
double nTimes(T& n){
	return N * n;
}


template <typename T>
void xchg(T& x, T& y){
	T t = x;
	x = y;
	y = t;
}


int main() {
	double a = 3.3;
	a = nTimes<3, double> (a);
	cout << "N times a is " << a << endl;
	double o= 5.1;
	double p = 7.5;
	cout << "o: " << o << " p: " << p << endl;
	//xchg<int> (o, p);
	xchg (o, p);
	cout << "o: " << o << " p: " << p << endl;
	return 0;
}
