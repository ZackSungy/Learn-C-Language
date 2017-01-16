#include<stdio.h>
#include<string.h>

int main()
{
	char A[10000], B[10000];
	int C[100000], i, j, a = 0;
	memset(A, 0, sizeof(A));
	memset(B, 0, sizeof(B));
	memset(C, 0, sizeof(C));
	gets(A);
	gets(B);
	for (i = 0; A[i] != '\0'; i++);
	for (j = 0; B[j] != '\0'; j++);
	i--;
	j--;
	for (i, j; 0 <= i && 0 <= j; i--, j--)
	{
		int c = 0;
		c = A[i] + B[j] - 48 - 48;
		C[a] = c % 10 + C[a];
		a++;
		if (c >= 10)
			C[a] += 1;
	}
	if ((i - j) != 0)
	for (i, j; 0 <= i || 0 <= j; i--, j--)
	{
		if (i > j)
			C[a] += A[i] - 48;
		else
			C[a] += B[j] - 48;
		a++;
	}
	if (i == j && (A[0] + B[0] - 48 - 48) >= 10)
		a++;
	for (a--; 0 <= a; a--)
		printf("%d", C[a]);
	return 0;
}