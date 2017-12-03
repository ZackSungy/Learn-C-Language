#include <iostream>
#include <string>
using namespace std;

string (*str(int i))[10]
{
	static string s[10]={"H","e","l","l","O",",","L","i","l","i"};
	if(i%2)
	{
		s[8]="l";
		s[9]="i";
		return &s;	
	}
	else
	{
		s[8]="z";
		s[9]="a";
		return &s;
	}
}

int main()
{
	string (*s)[10]=str(1);
	for(auto i:*s)
		cout<<i;
	cout<<endl;
	return 0;
}
