#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str1;
	string str2;
	cin >> str1 >> str2;
	if (str1.size > str2.size)
		cout << str1 << endl;
	else if (str2.size > str1.size)
		cout << str2 << endl;
	else
		cout << "equal" << endl;
	return 0;
}