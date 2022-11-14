
#include "Classes_ch1.hpp"

Rectangle::Rectangle(float l, float h){
	_length=l;
	_height=h;
}
float Rectangle::perimeter(){
	return 2*_length + 2*_height;
}
float Rectangle::area(){
	return _length*_height;
}

