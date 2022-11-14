//============================================================================
// Name        : Training_draft.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <array>

using namespace std;

enum class fruit{
	None = 8,
	Banana ,
	Apple
};

int main() {

	static std::array<int, 4> amir = {3,4,5,6};
	cout << amir[3] << endl;
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

    fruit fruit_yummi = fruit::Apple;
//	int mive = static_cast <int> (fruit::Banana);
	if(fruit_yummi==fruit::Apple){
		cout << "bbbbabnana"<< endl;
	}

	return 0;
}
