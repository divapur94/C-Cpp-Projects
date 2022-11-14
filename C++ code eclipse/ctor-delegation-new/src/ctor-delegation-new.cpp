#include <iostream>
using namespace std;

class Collector{
private:
	int _size;
	int _capacity;
	int* _list;
public:
	Collector(int cap): _capacity(cap), _size(0){
		_list = new int[cap];
	}
	Collector(): Collector(0){}
	bool Append(int val){
		if(_size < _capacity){
			_list[_size++] = val;
			return true;
		}
		else
			return false;
	}
	int showData(int index){
		return _list[index];
	}
	friend void setData(Collector& C, int index, int value);
	~Collector(){
		cout << "deleting the object " << endl;
		delete[] _list;
	}
};

void setData(Collector& C, int index, int value){
	C._list[index] = value;
}

int main(){
	Collector c(25);
	for(int i=0; i<30; i++)
		cout << c.Append(i+5) << endl;
	setData(c, 12, 777);
	for(int i=0; i<20; i++)
		cout << "data " << i << "=" << c.showData(i) << endl;
	return 0;
}
