#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
	int k = 1;
	char A[10001];
	gets(A);
	char c = A[0];
	for (int i = strlen(A) - 1; i >= 1; i--)
	{
		if (A[i]>A[i - 1])
		{
			char t = A[i];
			A[i] = A[i - 1];
			A[i - 1] = t;
			k = 0;
			break;
		}
	}
	if (1)
	{
		sort(A, A + strlen(A));
		for (int i = 0; i<strlen(A); i++)
		if (A[i]>c)
		{
			char t = A[i];
			for (int j = i; j >= 1; j--)
				A[j] = A[j - 1];
			A[0] = t;
			sort(A + 1, A + strlen(A));
			break;
		}
	}
	puts(A);
	return 0;
}