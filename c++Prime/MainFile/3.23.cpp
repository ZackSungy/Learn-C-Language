#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	vector<int> Arr;
	for (int i = 1; i < 10; i++)
		Arr.push_back(i);
	for (auto it = Arr.begin(); it != Arr.end(); ++it)
		*it *= *it;
	for (auto i : Arr)
		cout << i << " ";
	cout << endl;
	return 0;
}