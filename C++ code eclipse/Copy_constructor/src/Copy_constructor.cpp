
#include <iostream>
#include "circ.h"

using namespace std;

void func(circle& c){
	c.setRadius(8);
	cout << c.area()<<endl;
}

int main() {
	circle c {2};
	circle c2 (c);
	cout << c2.area()<<endl;
	func(c);
	return 0;
}
