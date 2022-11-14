#include "Animal.hpp"

using namespace std;

	string animalFood;
	string animalColor;

	int Monkey :: GetMaxLivingYear() {
		return 50;
	}

	string Monkey :: GetColor(){
		return animalColor;
	}

	string Monkey :: GetFood(){
		return animalFood;
	}

	void Monkey :: SetColor(string color){
		animalColor = color;
	}

	void Monkey :: SetFood(string food) {
		animalFood = food;
	}

	int Dog :: GetMaxLivingYear() {
		return 45;
	}

	string Dog :: GetColor(){
		return animalColor;
	}

	string Dog :: GetFood(){
		return animalFood;
	}

	void Dog :: SetColor(string color){
		animalColor = color;
	}

	void Dog :: SetFood(string food) {
		animalFood = food;
	}
