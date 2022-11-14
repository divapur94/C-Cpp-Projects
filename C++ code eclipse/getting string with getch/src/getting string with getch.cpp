
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{

    int c,i=0;
    char str[100];
    string s;
	while(1){
		cout << "Enter characters, Press Enter to stop\n";
		fflush(stdin);
		cin >> s;
		do
		{
			c = getchar();
			str[i] = c;
			i++;
		} while(c!='\n');

		cout << str << endl;
	}
    return 0;
}
