#include<iostream>
#include<string>
using namespace std;


int main()
{
	string s("Hello,world!");
	const char *str = s.c_str();
	for (auto it = str; *it != '\0'; ++it)
		cout << *it;
	cout << endl;
	s.push_back('!');
	for (auto it = str; *it != '\0'; ++it)
		cout << *it;
	cout << endl;
	return 0;
}