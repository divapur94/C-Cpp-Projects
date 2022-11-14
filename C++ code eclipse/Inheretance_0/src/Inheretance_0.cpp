//============================================================================
// Name        : Inheretance_0.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class vehicle {
protected:
	string name;
	int weight;
	string model;
public:
	vehicle (){
		name = "";
		weight = 0;
		model = "";
	}
	vehicle (string n, int w, string m){
		name = n;
		weight = w;
		model = m;
	}
	void print_data(){
		cout << "name:" << name << ", weight:" << weight << ", model:" << model;
	}
};

class car : public vehicle{
	string truck_size;
public:
	car (){
		truck_size = "";
	}
	car (string n1, int w1, string m1, string t_s1)
		:vehicle ( n1,  w1,  m1)
		{
		truck_size = t_s1;
	}
	void print_car_data(){
	print_data();
	cout << ", truck_size:" << truck_size << endl;
	}
};

class ship: public vehicle {
	int n_anchor;
public:
	ship (){
		n_anchor = 0;
	}
	ship (string n, int w, string m, int n_a)
		:vehicle ( n,  w,  m)
		{
		n_anchor = n_a;
	}
	void print_ship_data(){
	print_data();
	cout << ", n_anchor:" << n_anchor << endl;
	}
};

int main() {
	car golf("golf4", 1200, "TDI", "110");
	golf.print_car_data();
	cout << endl;
	ship biggy("rafael", 200000, "HF2", 12);
	biggy.print_ship_data();
	golf.print_data();
	cout << endl;
	golf.print_car_data();
	return 0;
}
