#include<stdio.h>

int ca[1000][1000], pe;

void Calendar(int n)
{
	if (n == pe)
		return;
	int biger = n * 2;
	printf("\n\n");
	for (int x = 0; x < biger; x++)
	for (int y = 0; y < biger; y++)
	{
		ca[x + biger][y + biger] = ca[x][y];
		ca[x][y + biger] = ca[x][y] + biger;
		ca[x + biger][y] = ca[x][y + biger];
	}
	Calendar(biger);
}

int main()
{
	int k;
	scanf("%d", &k);
	pe = 1 << k;
	ca[0][0] = 1;
	ca[0][1] = 2;
	ca[1][0] = 2;
	ca[1][1] = 1;
	Calendar(1);
	for (int i = 0; i < pe; i++)
	{
		for (int j = 0; j < pe; j++)
			printf("%-4d", ca[i][j]);
		printf("\n");
	}
	return 0;
}
