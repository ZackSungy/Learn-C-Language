#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	for (int i = 100; i<1000; i++)
	{
		int k = 0;
		double m = i;
		for (int j = 2; j <= sqrt(m); j++)
		if (i%j == 0)
		{
			k = 1;
			break;
		}
		if (k)continue;
		if (i % 10 != i / 100)continue;
		cout << i << endl;
	}
	return 0;
}