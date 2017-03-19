#include<stdio.h>  
#include<string.h>  
#include<math.h>  

double birthday(int n, int m)
{
	double ans = 1;
	for (int i = 0; i<m; i++)
		ans = ans*(n - i) / n;
	return 1 - ans;
}

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	printf("%lf", birthday(n, m));
	return 0;
}