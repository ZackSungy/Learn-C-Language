#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int item;
	vector<int> a;
	while (cin >> item)
	{
		a.push_back(item);
	}
	for (decltype(a.size()) i = 0; i < a.size(); i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}