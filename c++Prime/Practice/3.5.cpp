#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	string item;
	while (cin >> item)
	{
		str = str + item + " ";
	}
	cout << str << endl;
	return 0;
}