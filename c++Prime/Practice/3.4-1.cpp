#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str1;
	string str2;
	cin >> str1 >> str2;
	if (str1 > str2)
		cout << str1 << endl;
	else if (str2 > str1)
		cout << str2 << endl;
	else
		cout << "equal" << endl;
	return 0;
}