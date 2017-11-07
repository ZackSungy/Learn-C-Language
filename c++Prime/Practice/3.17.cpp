#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	char item;
	vector<char> s;
	while (cin >> item)
	{
		s.push_back(item);
	}
	for (auto &i : s)
		i = toupper(i);
	for (auto i : s)
		cout << i;
	cout << endl;
	return 0;
}