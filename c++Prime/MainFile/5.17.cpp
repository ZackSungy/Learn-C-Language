#include<iostream>
#include<string>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<int> array1{ 0, 1, 2, 3, 4, 5 };
	vector<int> array2{ 0, 1, 2, 3, 5 };
	bool sign = true;
	for (decltype(array1.size()) i = 0; i < (array1.size() >= array2.size() ? array2.size() : array1.size()); i++)
	{
		if (array1[i] != array2[i])
		{
			sign = false;
			break;
		}
	}
	if (sign)
	{
		cout << "equal!";
	}
	else
	{
		cout << "don't equal!";
	}
	return 0;
}