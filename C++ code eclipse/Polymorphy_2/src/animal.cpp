
#include <iostream>
#include <string>
#include "animal.h"

using namespace std;

string Animal_Food;

	int Giraffe :: GetMaxLivingYears() {
		return 30;
	}
	string Giraffe :: GetColor (){
		return "Yellow";
	}
	string Giraffe :: GetFood (){
		return Animal_Food;
	}
	void Giraffe :: SetFood(string food){
		Animal_Food = food;
	}

	int Monkey :: GetMaxLivingYears() {
		return 19;
	}
	string Monkey :: GetColor (){
		return "Brown";
	}
	string Monkey :: GetFood (){
		return Animal_Food;
	}
	void Monkey :: SetFood(string food){
		Animal_Food = food;
	}
