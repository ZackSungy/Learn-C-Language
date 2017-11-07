#include<iostream>
#include<string>
#include<vector>
using namespace std;

auto Lookup(string a, int item)
{
	auto beg = a.begin();
	auto end = a.end();
	auto mid = a.begin() + (end - beg) / 2;
	while (mid != end && *mid != item)
	{
		if (item < *mid)
		{
			end = mid;
		}
		else
		{
			beg = mid + 1;
		}
		mid = beg + (end - beg) / 2;
	}
	return mid;
}

int main()
{
	string a = { 1, 4, 5, 7, 10, 13, 14, 18, 90, 100 };
	auto num = Lookup(a, 90);
	auto c = a.end() - a.begin();
	cout << (a.end() - num) << endl;
	return 0;
}