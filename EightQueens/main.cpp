#include<stdio.h>

int n, tot = 0, C[100];

void search(int cur)
{
	int i, j;
	if (cur == n)tot++;
	else for (i = 0; i < n; i++)
	{
		int ok = 1;
		C[cur] = i;
		for (j = 0; j < cur; j++)
		if (C[cur] == C[j] || cur - C[cur] == j - C[j] || cur + C[cur] == j + C[j])
		{
			ok = 0;
			break;
		}
		if (ok)search(cur + 1);
	}
}


int main()
{
	scanf("%d", &n);
	search(0);
	printf("%d", tot);
	return 0;
}