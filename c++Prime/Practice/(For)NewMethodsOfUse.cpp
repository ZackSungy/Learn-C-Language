#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str("Some string");
	for (auto c : str)
		cout << c << endl;
	return 0;
}