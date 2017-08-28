#include<iostream>
#include<vector>
using namespace std;


int main()
{
	vector<int> arr1{ 1, 2, 3, 4, 5 };
	vector<int> arr2{ 1, 2, 3, 4, 6 };
	if (arr1 == arr2)
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
	return 0;
}