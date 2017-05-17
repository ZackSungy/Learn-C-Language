#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	string s1 = "A", s2;
	cin >> n;
	for (int i = 1; i<n; i++)
	{
		s2 = s1;
		s1 += 'A' + i;
		s1 += s2;
	}
	cout << s1;
}