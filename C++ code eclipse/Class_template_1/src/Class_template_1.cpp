//============================================================================
// Name        : Class_template_1.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template <class T>
class Class_0 {
	T data0;
	T data;
public:
	Class_0(T l) : data(T(l)){
	}
//	Class_0(T D)
//	{
//		data = D;
//	}
	void SetData(T d){
		data = d;
	}
	T GetData(void) const{
		return data;
	}
	void PrintData(void) const {
		cout << "Data is: " << data << endl;
	}
};

int main() {

//	Class_0 <double> a(8.6);
	Class_0 <double> a(5.6);
	Class_0 <char *> c("hi");
	//a.SetData(8.1);
	int b = a.GetData();
	a.PrintData();
    cout << "b is: " << b << " with size: "<< sizeof(a) <<  endl;
    c.PrintData();
	return 0;

}
