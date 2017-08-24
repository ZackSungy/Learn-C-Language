#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s("Hello , World!!!");
	for (auto &c : s)
	{
		if (ispunct(c))
			c = 'X';
	}
	cout << s << endl;
	return 0;
}