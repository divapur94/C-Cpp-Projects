#include <iostream>
#include "Classes_ch1.hpp"
using namespace std;

int main() {
	Rectangle R(5,6);
	cout << "Area is: " << R.area() << " and Perimeter is: " << R.perimeter() << endl;
	return 0;
}
