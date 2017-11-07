#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int item = 113;
	cout << ((~item << 6) & 255) << endl;
	return 0;
}