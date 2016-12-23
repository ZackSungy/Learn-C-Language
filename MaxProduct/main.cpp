#include<stdio.h>
int main()
{
	int n, s[100], i, k = 0, a = 1;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &s[i]);
	for (i = 0; i < n; i++)
	{
		if (s[i]>0)
		{
			a *= s[i];
			k = 1;
		}
	}
	if (k)
		printf("%d\n", a);
	else
		printf("-1\n");
	return 0;
}