
#include <iostream>
#include "Animal.hpp"
using namespace std;

int main() {

	Animal* Animal1;
	Monkey Monkey1;
	Dog Dog1;

	string name;
	string color;
	string food;
	string *address;

	cout << "enter the animal name:" << endl;
	cin >> name;
	cout << "Entered name: " << name << endl;

	if (name == "Monkey")
		Animal1 = &Monkey1;
	else if (name == "Dog")
		Animal1 = &Dog1;

	string str = "sample string";
	address = &str;
	cout << *address << endl;
	cout << "enter the " << name << "'s " << "color" << endl;
	cin >> color;
	Animal1->SetColor(color);
	cout << "Animal's Color:" << " " << Animal1->GetColor() << endl;

	cout << "enter the " << name << "'s " << "food" << endl;
	cin >> food;
	Animal1->SetFood(food);
	cout << "Animal's Food: " << Animal1->GetFood() << endl;

	return 0;
}
