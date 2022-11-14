//============================================================================
// Name        : Polymorphy_Challenge.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Account {
protected:
	double balance;
public:
	Account(double initial){
		balance = initial;
	}
	virtual void Deposit(double value) = 0;
	virtual void Withdraw(double value) = 0;
	virtual void Display() = 0;
};

class Savings : public Account {
	float interest_rate = 0.8;
public:
	Savings(double initial) : Account(initial) {}
	virtual void Deposit(double value) ;
	virtual void Withdraw(double value) ;
	virtual void Display() ;
};

class Current : public Account {
public:
	Current(double initial) : Account(initial){}
	virtual void Deposit(double value) ;
	virtual void Withdraw(double value) ;
	virtual void Display();
};

void Savings::Deposit(double value){
	balance += value + value*interest_rate;
}

void Savings::Withdraw(double value){
	balance -= value + value*interest_rate;
}

void Savings::Display(){
	cout << "Savings balance is " << balance << endl;
}

void Current::Deposit(double value){
	balance += value;
}
void Current::Withdraw(double value){
	balance -= value;
}

void Current::Display(){
	cout << "Current balance is " << balance << endl;
}

int main() {
	Account* A[2];
	A[0] = new Savings(50000);
	A[0] -> Deposit(1000);
	A[0] -> Display();

	A[0]->Withdraw(3000);
	A[0]->Display();

	cout << endl;

	A[1] = new Current (50000);
	A[1] -> Deposit (1000);
	A[1] -> Display();

	A[1] -> Withdraw(3000);
	A[1] -> Display();

	auto a= 1222;
	cout << a << endl;
	return 0;
}
