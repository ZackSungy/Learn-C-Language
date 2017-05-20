#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int abs(int a)
{
	return a>0 ? a : -a;
}

int main()
{
	int len, k = 1, ans = 0, vis[10001];
	char s[10001];
	scanf("%d\n", &len);
	for (int i = 0; i<len; i++)
		scanf("%c", &s[i]);
	for (int i = 0; i<len / 2; i++)
	for (int j = len - 1 - i; j >= 0; j--)
	{
		if (s[i] == s[j] && i != j)
		{
			ans += abs(len - 1 - i - j);
			char a = s[j];
			for (int x = j; x<len - i - 1; x++)
				s[x] = s[x + 1];
			s[len - 1 - i] = a;
			vis[len - 1 - i] = 1;
			break;
		}
		else if (i == j&&len % 2 == 0)
		{
			k = 0;
			break;
		}
		else if (i == j)
		{
			ans += abs(i - len / 2);
			for (int x = i; x<len - 1; x++)
				s[x] = s[x + 1];
			len--;
			i--;
			break;
		}
		if (!k)
			break;
	}
	if (k)
		printf("%d", ans);
	else
		printf("Impossible");

	return 0;
}