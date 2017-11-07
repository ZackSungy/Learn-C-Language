#include<iostream>
using std::cout;
using std::cin;
using std::endl;

void swap(int &x, int &y)
{
	int t = x;
	x = y;
	y = t;
}

int main()
{

	int a = 10;
	int b = 121;
	cout << a << " " << b << endl;
	swap(a, b);
	cout << a << " " << b << endl;
	return 0;
}