#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int item;
	vector<int> array1;
	while (cin >> item)
	{
		array1.push_back(item);
	}
	for (int i = 0; i < array1.size() - 1; i++)
	{
		cout << array1[i] + array1[i + 1] << " ";
	}
	cout << endl;
	return 0;
}