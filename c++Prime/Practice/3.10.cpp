#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s("Hello , World!!!");
	for (decltype(s.size()) i = 0; i < s.size(); i++)
	{
		if (!ispunct(s[i]))
			cout << s[i];
	}
	cout << endl;
	return 0;
}