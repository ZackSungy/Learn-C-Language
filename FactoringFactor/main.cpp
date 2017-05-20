#include<cstdio>
using namespace std;

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = n; i <= m; i++)
	{
		printf("%d=", i);
		int k = i;
		for (int j = 2; j<i; j++)
		{
			while (k%j == 0)
			{
				if (k / j == 1)
					printf("%d", j);
				else
					printf("%d*", j);
				k /= j;
			}
		}
		if (i == k)
			printf("%d", i);
		printf("\n");
	}
	return 0;
}