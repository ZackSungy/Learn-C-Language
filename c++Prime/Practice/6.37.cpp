#include <iostream>
using namespace std;

using arrT=string [10];
string arr[10]={"H","e","l","l","O",",","Z","a","c","k"};
arrT* str(int i)
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

auto str1(int i)->string (*)[10]
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

decltype (arr) *str2()
{
	return &arr;
}
int main()
{
	arrT *s=str(0);

	for(auto i:*s)
		cout<<i;
	cout<<endl;

	arrT *s1=str1(1);

	for(auto i:*s1)
		cout<<i;
	cout<<endl;

	arrT *s2=str2();

	for(auto i:*s2)
		cout<<i;
	cout<<endl;
	return 0;
}
