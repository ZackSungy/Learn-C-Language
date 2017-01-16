#include<stdio.h>
int main()
{
	int i, j, k = 0;
	for (i = 1; i <= 49; i++)
	{
		for (j = 1; j <= 49; j++)
		if ((1225 - i - (i + 1) - j - (j + 1) + i*(i + 1) + j*(j + 1)) == 2015)
		if (i != 10 && j != 10)
		{
			printf("%d\n", i);
			k = 1;
		}
		if (k)
			break;
	}
	return 0;
}