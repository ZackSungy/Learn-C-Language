#include<stdio.h>  
#include<string.h>  
#include<math.h>


int main()                        //µÝÍÆ 
{
	int n, k, f[501][501];
	scanf("%d%d", &n, &k);
	memset(f, 0, sizeof(f));
	f[-1][-1] = f[0][-1] = 1;
	for (int i = 1; i <= n; i++)
	for (int j = -1; j <= k; j++)
	{
		f[i][j] = f[i - 1][j];
		if (j - i<0)
			f[i][j] += f[i - 2][-1];
		else
			f[i][j] += f[i - 2][j - i];
	}
	printf("%d\n", f[n][k]);
	return 0;
}

#include<stdio.h>  
#include<string.h>  
#include<math.h>

int count = 0;                     //µÝ¹é 

void fa(int n, int k, int i)
{
	if (k - i<0)
		count++;
	for (int j = 2; j < n; j++)
	{
		if (i + j>n)break;
		fa(n, k - i, i + j);
	}
	return;
}

int main()
{
	int n, k, f[501][501];
	scanf("%d%d", &n, &k);
	for (int i = 1; i <= n; i++)
	{
		fa(n, k, i);
	}
	printf("%d\n", count);
	return 0;
}