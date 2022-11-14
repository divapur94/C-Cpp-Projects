//============================================================================
// Name        : Class_template_Account_Array.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;



class Account {
public:
	explicit Account (double b=0.0) : balance(b){}
	void withdraw (double a){
		balance -= a;
	}

	void deposite (double a){
		balance += a;
	}

	double getBalance() const;

private:
	double balance;
};
double Account :: getBalance() const{
	return balance;
}




template <class T, int l>
class Array{
public:
	Array () = default;
	int getSize() const;
private:
	T x[l];
};

template <class T, int l>
int Array <T,l> :: getSize() const{
	return l;
}



int main() {
	Account f(50);
	Array <double, 10> a;
	Array <Account, 1000> b;
	cout << f.getBalance() << endl;
	cout << a.getSize() << endl;
	cout << b.getSize() << endl;

	return 0;
}
