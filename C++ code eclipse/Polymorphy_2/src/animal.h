#include <iostream>
#include <string>

#ifndef ANIMAL_H_
#define ANIMAL_H_

using namespace std;

class Animal {
protected:

public:
	virtual int GetMaxLivingYears() = 0;
	virtual string GetColor () = 0;
	virtual void SetFood(string) = 0;
	virtual string GetFood () = 0;
};

class Giraffe :public Animal{
	int GetMaxLivingYears();
	string GetColor();
	string GetFood();
	void SetFood(string);
};

class Monkey :public Animal{
	int GetMaxLivingYears();
	string GetColor();
	string GetFood();
	void SetFood(string);
};


#endif /* ANIMAL_HPP_ */
