#include<stdio.h>
#include<string.h>
#include<math.h>

int pow_mod(int a, int n, int m)
{
	int x;
	if (n)
	{
		x = pow_mod(a, n / 2, m);
	}
	long long ans = (long long)x*x%m;
	if (n % 2 == 1)ans = ans*a%m;
	return (int)ans;
}

int main()
{
	int a, n, m;
	scanf("%d%d%d", &a, &n, &m);
	printf("%d", pow_mod(a, n, m));
	return 0;
}