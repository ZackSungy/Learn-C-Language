#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
	char n[100001];
	int m;
	scanf("%s%d", n, &m);
	int len = strlen(n);
	int ans = 0;
	for (int i = 0; i<len; i++)
		ans = (int)(((long long)ans * 10 + (n[i] - 48)) % m);
	printf("%d\n", ans);
	return 0;
}