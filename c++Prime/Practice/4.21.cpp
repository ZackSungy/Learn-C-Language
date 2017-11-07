#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int item;
	vector<int> int_array;
	while (cin >> item)
	{
		int_array.push_back(item);
	}
	for (auto &i : int_array)
	{
		if (i % 2)
			i *= 2;
	}
	for (auto &i : int_array)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}