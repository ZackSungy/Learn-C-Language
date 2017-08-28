#include<iostream>
#include<vector>
using namespace std;


int main()
{
	int int_arr[] = { 1, 2, 3, 4, 5, 6 };
	vector<int> s(begin(int_arr), end(int_arr));
	vector<int> s1(int_arr + 1, int_arr + 4);
	for (auto i : s)
		cout << i << " ";
	cout << endl;
	for (auto i : s1)
		cout << i << " ";
	cout << endl;
	return 0;
}