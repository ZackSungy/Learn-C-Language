#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> arr1;
	for (auto i = 0; i < 10; i++)
		arr1.push_back(i + 1);
	for (auto i : arr1)
		cout << i << " ";
	cout << endl;
	return 0;
}