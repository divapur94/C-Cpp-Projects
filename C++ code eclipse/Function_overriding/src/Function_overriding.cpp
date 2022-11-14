//============================================================================
// Name        : Function_overriding.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Employee{
protected:
	string name;
	int ID;
	int reportsTo;
public:
	Employee (string _name, int _ID, int _reportsTo) : name(_name), ID(_ID), reportsTo(_reportsTo){}
	string getName(){
		return name;
	}
	int getID(){
		return ID;
	}
	int getBoss(){
		return reportsTo;
	}
	void Display(){
		cout << endl << getID() << " " << getName() << " "  << getBoss();
	}
	void Display(string salutation){
		cout << endl << salutation << " " << getID() << " "  << getName() << " "  << getBoss() ;
	}
};

class Manager : public Employee {
	protected:
		string Team;
	public:
		Manager(string _name, int _ID, int _reportsTo, string _Team) : Employee(_name, _ID, _reportsTo), Team(_Team){}
		void Display(){
			Employee :: Display();
			cout << Team;
		}
};

int main() {
	Employee worker ("John", 1, 2);
	worker.Display("Mr. ");
	Manager ceo("Eli", 2, 0, "go to the way");
	ceo.Display();
	return 0;
}
