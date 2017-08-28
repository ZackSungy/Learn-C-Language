#include<iostream>
using namespace std;


int main()
{
	int ia[5] = { 10, 11, 125, 13, 14 };
	int *p1 = ia;
	for (int &i : ia)
		i = 0;
	for (int i : ia)
		cout << i << " ";
	cout << endl;
	return 0;
}