//============================================================================
// Name        : Class_template_multiTypes.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template <class Type1, class Type2>
struct Pair{
	Pair () : first(Type1(7)), second(Type2(13)){}
	Pair (const Type1& t1, const Type2& t2) : first(t1), second(t2){}
	Pair (const Pair<Type1,Type2>& OtherPair): first(OtherPair.first), second(OtherPair.second){}
	Type1 first;
	Type2 second;
};

int main() {
	Pair <int, int> point1(0,2);
	Pair <int, int> point2(point1);

	//point1.first = 12;
	//point1.second = 5;
	cout << "first " << point2.first << " and second " << point2.second << endl;
	return 0;
}
