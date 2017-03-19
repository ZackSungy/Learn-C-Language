#include<stdio.h>  
#include<string.h>  
#include<math.h>  

int main()
{
	int n, a, f[1001], g[1001];
	while (scanf("%d", &n) == 1)
	{
		memset(f, 0, sizeof(f));
		memset(g, 0, sizeof(g));
		g[0] = 1; g[1] = 2; g[2] = 4;
		for (int i = 2; i<n - 1; i++)
		{
			if (i>2)
			{
				a = 0;
				for (int j = 2; j < i - 1; j++)
					a += g[j - 2] * (1 << (i - j - 2));
				a += (1 << (i - 3));
				g[i] = (1 << i) - a;
			}
			f[i] = f[i - 1] + g[i - 2] * (1 << (n - i - 2));
		}
		printf("%d\n", f[n - 2] + (1 << (n - 3)));
	}
	return 0;
}