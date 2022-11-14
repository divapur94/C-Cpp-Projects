
#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>

using namespace std;

class Animal {

public:
	virtual int GetMaxLivingYear() = 0;
	virtual string GetColor() = 0;
	virtual string GetFood() = 0;
	virtual void SetColor(string) = 0;
	virtual void SetFood(string) = 0;
};

class Monkey : public Animal{
	virtual int GetMaxLivingYear() override;
	virtual string GetColor() override;
	virtual string GetFood() override;
	virtual void SetColor(string) override;
	virtual void SetFood(string) override;
};

class Dog : public Animal{
	virtual int GetMaxLivingYear() override;
	virtual string GetColor() override;
	virtual string GetFood() override;
	virtual void SetColor(string) override;
	virtual void SetFood(string) override;
};

#endif /* ANIMAL_HPP_ */
