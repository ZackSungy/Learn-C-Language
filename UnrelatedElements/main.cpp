#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	int n, m;
	int a[1001];
	scanf("%d%d", &n, &m);
	n--;
	a[0] = 1;
	if (m == 1)
		printf("0 ");
	for (int i = 1; i <= n; i++)
	{
		a[i] = a[i - 1] * (n - i + 1) / i;
		if (a[i] % m == 0)
			printf("%d ", i + 1);
	}
	return 0;
}