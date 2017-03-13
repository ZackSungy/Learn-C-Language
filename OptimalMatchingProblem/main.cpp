#include<stdio.h>
#include<string.h>
#include<math.h>

double node1[1001], node2[1001], node3[1001], d[101][101];

double dist(int i, int j)
{
	return sqrt((node1[i] - node1[j])*(node1[i] - node1[j]) + (node2[i] - node2[j])*(node2[i] - node2[j]) + (node3[i] - node3[j])*(node3[i] - node3[j]));
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lf%lf%lf", &node1[i], &node2[i], &node3[i]);
	}
	memset(d, 0, sizeof(d));
	for (int i = 0; i < n; i++)
	for (int S = 0; S < (1 << n); S++)
	{
		d[i][S] = 10000000;
		for (int j = 0; j < i; j++)
		{
			if (S&(1 << j))
			{
				if (d[i - 1][S ^ (1 << i) ^ (1 << j)] == 10000000)
					d[i - 1][S ^ (1 << i) ^ (1 << j)] = 0;
				d[i][S] = d[i][S] < (dist(i, j) + d[i - 1][S ^ (1 << i) ^ (1 << j)]) ?
					d[i][S] : (dist(i, j) + d[i - 1][S ^ (1 << i) ^ (1 << j)]);
			}
		}
	}
	printf("%lf\n", d[n - 1][(1 << n) - 1]);
	return 0;
}