//============================================================================
// Name        : Test_1.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/*
#include <iostream>
using namespace std;

void swap (int& first, int& second)
{
	int temp = first;
	first = second;
	second = temp;
}

int main() {
	int a = 5, b = 6;
	swap (a,b);
	cout << a << " " << b << endl;
	return 0;
}

*/

#include <iostream>
using namespace std;

class Shape {
  public:
  virtual float getArea() = 0;
};

class Rectangle : public Shape {
  private:
  float width;
  float height;

  public:
  Rectangle(float wid, float heigh) {
    width = wid;
    height = heigh;
  }
  float getArea(){
    return width * height;
  }
};

int main() {
  //Shape * shp = new Rectangle(4, 5);
  Shape* shp;
  Rectangle rtg(3,4);
  shp = &rtg;
  float num = shp->getArea();
  cout << "Area of rectagle is " << num << endl;
}
