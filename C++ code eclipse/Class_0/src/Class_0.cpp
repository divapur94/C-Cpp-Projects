//============================================================================
// Name        : Class_0.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Date {
	int day, month, year;
public:
	Date(){
		day=0;
		month=0;
		year=0;
	}
	Date (int day, int month, int year){
		this->day = day;
		this->month = month;
		this->year = year;
	}
	void print_info ();
};

void Date::print_info(){
	cout << day << "/" << month << "/" << year << endl;
}

int main() {
	//Date D;
	Date D (2,3,2022);
	D.print_info();
	return 0;
}
