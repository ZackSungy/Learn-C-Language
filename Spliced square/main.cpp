#include<stdio.h>
#include<math.h>

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = n; i <= m; i++)
	{
		int k = 0;
		for (int j = 10; j<i; j *= 10)
		{
			int t = sqrt(i);
			if (t*t != i)continue;
			double a = i%j;
			double b = i / j;
			a = sqrt(a);
			b = sqrt(b);
			if (a == floor(a + 0.99999999) && b == floor(b + 0.99999999) && a != 0 && b != 0)
			{
				k = 1;
				break;
			}
		}
		if (k)
			printf("%d\n", i);
	}
	return 0;
}