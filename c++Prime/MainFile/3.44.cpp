#include<iostream>
using namespace std;

int main()
{
	typedef int int_array[4];
	const size_t rowCnt = 3, colCnt = 4;
	int ia[rowCnt][colCnt];
	for (size_t i = 0; i < rowCnt; i++)
	{
		for (size_t j = 0; j < colCnt; j++)
		{
			ia[i][j] = i*colCnt + j;
		}
	}

	for (int_array *p = begin(ia); p != end(ia); p++)
	{
		for (int *q = *p; q != end(*p); q++)
			cout << *q << " ";
		cout << endl;
	}
	return 0;
}