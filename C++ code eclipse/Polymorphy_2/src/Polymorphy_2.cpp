#include <iostream>
#include <string>
#include "animal.h"

using namespace std;

int main() {

	string input_food;
	string input_animal;
	Giraffe Giraffe1;
	Monkey Monkey1;
	Animal *animal;

	cout << "Please choose an animal:" << endl;
	cin >> input_animal;

	if (input_animal == "Giraffe"){
		animal = &Giraffe1;
	}

	else if (input_animal == "Monkey"){
		animal = &Monkey1;
	}

	cout << animal->GetColor() << endl;
	cout << "please enter the food: " << endl;
	cin >> input_food;
	animal->SetFood(input_food);
	cout << endl << "favourite food is " << animal->GetFood();
	return 0;
}
