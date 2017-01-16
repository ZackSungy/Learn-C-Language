#include<stdio.h>
int main()
{
	int n, m = 0;
	scanf("%d", &n);
	m = n;
	for (n; 3 <= n; n -= 3)
	{
		n++;
		m++;
	}
	printf("%d", m);
	return 0;
}