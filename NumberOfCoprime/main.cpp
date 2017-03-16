#include<stdio.h>  
#include<string.h>  
#include<math.h>  

int a[100000001];

int euler_phi(int n)//    方法一 
{
	int m = (int)sqrt(n + 0.5);
	int ans = n;
	for (int i = 2; i <= m; i++)
	{
		if (n == 0)
			break;
		if (n%i == 0)
		{
			ans = ans / i*(i - 1);
			while (n%i == 0)
				n /= i;
		}
	}
	if (n>1)ans = ans / n*(n - 1);
	return ans;
}


void phi_table(int n)          //方法二 
{
	memset(a, 0, sizeof(a));
	a[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		if (!a[i])
		{
			for (int j = i; j <= n; j += i)
			{
				if (!a[j])
					a[j] = j;
				a[j] = a[j] / i*(i - 1);
			}
		}
	}
}

int main()
{
	int n;
	while (scanf("%d", &n) == 1)
	{
		phi_table(n);
		printf("%d\n", euler_phi(n)); //方法一
		printf("%d\n", a[n]);         //方法二 
	}
	return 0;
}