//============================================================================
// Name        : Func_template_0.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*template<typename T>
void printDouble(T value){
	cout << "Double value is: " << 2*value << endl;
}*/

/*
template <class T, class T1>
T Add(const T& x, const T1& y){			//&: reference of the same object is passed not a copy.
										//const: the function will not going to change the returned parameter's value
	T Result;
	Result = x + 2*y;
	return Result;
}
*/

//template <class T>
//void PrintSize(){
//	cout << "Size of this type is:" << sizeof(T);
//}


//template <class T>
//T add_ (T a, T b){
//	T t = double();
//	t=a+(int)b;
////	cout << t << endl;
//	return t;
//}

template <class T>
void Filter_ (T arr[], int size_, T filtered_ = T(2.2)){ // T() is default constructor which is 0
	for (int i = 0; i < size_; i++){
		if (arr[i] != filtered_){
			cout << "Output of filter:" << arr[i] <<endl;
		}
	}
}


int main() {
	/*printDouble <double> (10.2);
	printDouble (10.111f);*/

	/*double a=14.4;
	double b=16;
	cout << "Add Result is: " << Add(a, b);*/

//	PrintSize<long int>();

//	cout << add_ <double>(5.2,1.1);

	double a[] = {4,5.1,1.4,0,2.2}; // you need just change this line and it will change the function input type
	cout << "address right after end of array: "<< *(&a +1)<<endl;
	cout << "address of start of array: " << a << endl;
	cout << "address of a[0]: " << &a[0] << endl;
	cout << "address of a[1]: " << &a[1] << endl;
	cout << "address of a[2]: " << &a[2] << endl;
	cout << "address of a[3]: " << &a[3] << endl;
	cout << "address of a[4]: " << &a[4] << endl;

	cout << "size of each: " << sizeof(a[0]) << endl;
	cout << "right after end - start address: " << *(&a +1) - a << endl;
	cout << "end - start address + 1: " << (&a[4] - &a[0]) +1 << endl;
	int size_ = sizeof (a) / sizeof (a[0]);
	cout << "size: " << size_ << endl;
	Filter_(a, size_,1.4);
	cout << endl;
	Filter_(a, size_, 5.1);
	cout << endl;
	Filter_(a, size_);
	//Filter_ ()

	return 0;
}
