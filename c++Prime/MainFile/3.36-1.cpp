#include<iostream>
using namespace std;


int main()
{
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 1, 2, 3, 4, 6 };
	int *p = arr1, *last1 = end(arr1);
	int *q = arr2, *last2 = end(arr2);
	while (*p == *q&&p != last1&&q != last2)
	{
		p++, q++;
	}
	if (p == last1 && q == last2)
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
	return 0;
}