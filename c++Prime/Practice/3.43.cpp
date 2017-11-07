#include<iostream>
using namespace std;


int main()
{
	const size_t rowCnt = 3, colCnt = 4;
	int ia[rowCnt][colCnt];
	for (size_t i = 0; i < rowCnt; i++)
	{
		for (size_t j = 0; j < colCnt; j++)
		{
			ia[i][j] = i*colCnt + j;
		}
	}

	for (auto &row : ia)
	{
		for (auto col : row)
			cout << col << ' ';
		cout << endl;
	}

	for (auto p = ia; p != ia + 3; p++)
	{
		for (auto q = *p; q != (*p) + 4; q++)
			cout << *q << ' ';
		cout << endl;
	}

	for (auto p = begin(ia); p != end(ia); p++)
	{
		for (auto q = begin(*p); q != end(*p); q++)
			cout << *q << ' ';
		cout << endl;
	}
	return 0;
}