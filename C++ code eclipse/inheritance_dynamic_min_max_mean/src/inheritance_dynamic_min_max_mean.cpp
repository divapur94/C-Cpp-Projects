//============================================================================
// Name        : inheritance_dynamic_min_max_mean.cpp
// Author      : adas
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <assert.h>

using namespace std;

class DynamicArray {

	int *array;
	int capacity = 2;
	int size;

public:
	DynamicArray(){
		array = new int [capacity];
		size = 0;
	}

	void append(int element){
		insertAt(element, size);
	}

	int length(){
		return size;
	}

	int get(int pos){
		return array[pos];
	}
private:
	void insertAt(int element, int pos){
		assert (0 <= pos && pos <= size);
		if (size == capacity){
			resize();
		}
		for (int i=size ; i>pos ; i--){
			array[i] = array [i-1];
		}
	}
};

class DynamicArrayWithStats : public DynamicArray {
	int max(){}
	int min(){}
	int mean(){}
};

int main() {

	return 0;
}
