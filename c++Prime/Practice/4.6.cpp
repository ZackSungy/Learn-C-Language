#include<iostream>
using namespace std;

int main()
{
	int item;
	cin >> item;
	if (item % 2 == 0)
	{
		cout << item << " is even";
	}
	else
	{
		cout << item << " is odd";
	}
	return 0;
}