#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s("Hello , World!!!");
	decltype(s.size()) i=0;
	while (i<s.size())
	{
		if (ispunct(s[i++]))
		{
			s[i - 1] = 'X';
		}
	}
	cout << s << endl;
	return 0;
}