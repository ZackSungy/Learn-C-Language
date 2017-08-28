#include<iostream>
#include<vector>
using namespace std;


int main()
{
	vector<int> str1(10, 8);
	int int_arr[10];
	for (int i = 0; i < 10; i++)
		int_arr[i] = str1[i];
	for (auto i : int_arr)
		cout << i << " ";
	cout << endl;
	return 0;
}