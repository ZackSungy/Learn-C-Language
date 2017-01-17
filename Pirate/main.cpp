#include<stdio.h>
int main()
{
	int i, j, k, l;
	for (i = 4; i <= 20; i++)
	for (j = 3; j <= 20; j++)
	for (k = 2; k <= 20; k++)
	for (l = 1; l <= 20; l++)
	if (i*j*k*l == j*k*l + i*k*l + i*j*l + i*j*k&&i > j&&j > k&&k > l)
	{
		printf("%d %d %d %d 0", i, j, k, l);
		printf("\n");
	}
	return 0;
}