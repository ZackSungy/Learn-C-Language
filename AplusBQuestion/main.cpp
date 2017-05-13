#include<cstdio>
#include<cstring>
#define Max 3000

int main()
{
	int c = 0, t, C[102], n, i;
	char A[101], B[101], D[101];
	memset(A, 0, sizeof(A));
	memset(B, 0, sizeof(B));
	memset(C, 0, sizeof(C));
	gets(A);
	gets(B);
	int a = strlen(A);
	int b = strlen(B);
	if (a>b)
	{
		strcpy(D, A);
		strcpy(A, B);
		strcpy(B, D);
	}
	for (int i = 0; A[i] != '\0'; i++)
		C[strlen(A) - i - 1] = A[i] - 48;
	for (i = strlen(B) - 1; i >= 0; i--)
	{
		t = B[i] + C[strlen(B) - 1 - i] - 48 + c;
		C[strlen(B) - 1 - i] = t % 10;
		c = t / 10;
	}
	if (c)
	{
		C[strlen(B)] += c;
	}
	for (n = 101; n >= 0; n--)
	if (C[n] != 0)break;
	for (n; n >= 0; n--)
		printf("%d", C[n]);
	return 0;
}


/*912841522392881200354953208156916808692395580535076263172233198235385
7727718624920500761794381861989*/

