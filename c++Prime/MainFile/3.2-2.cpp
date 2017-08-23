#include<iostream>
#include<string>
using namespace std;

int main()
{
	char input;
	string str;
	while (cin >> input)
	{
		str += input;
	}
	cout << str << endl;
	return 0;
}