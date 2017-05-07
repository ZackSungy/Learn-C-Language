#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
	char A[1000];
	while (1)
	{
		int bj = 1;
		long long sum = 0;
		gets(A);
		if (A[0] == '-')break;
		for (int i = 0; i<strlen(A); i++)
		{
			if (!(A[i] == '0' || A[i] == '1'))
			{
				bj = 0;
				break;
			}
			long long a = 1;
			for (int j = 0; j<strlen(A) - i - 1; j++)
				a *= 2;
			sum += (A[i] - 48)*a;
		}
		if (bj)
			cout << sum << endl;
		else
			cout << "输入非二进制数" << endl;
	}
	return 0;
}