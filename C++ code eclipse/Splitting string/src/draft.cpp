#include <iostream>
#include <vector>
#include <array>
using namespace std;

vector<string> splitstring(string str, string delimiter);
using functionpointer = void(*)(void);
int main() {
	std::string s = "scott>=amir>=hossein";
	std::string delimiter = "=";
	std::vector<std::string> v;
	v = splitstring(s, delimiter);
	for (auto &str1 : v)
		std::cout << "string is: " << str1 << std::endl;
	return 0;
}

vector<string> splitstring(string s, string delimiter) {
	unsigned int i = 0;
	size_t pos = 0;
	std::vector<std::string> v;
	std::string token;
	while ((pos = s.find(delimiter)) != std::string::npos) {
		token = s.substr(0, pos);
		v.push_back(token);
		i++;
		s.erase(0, pos + delimiter.length());
	}
	v.push_back(s);
	return v;
}

//str1 out
//s in
