#include<stdio.h>
#include<string.h>
int _link(char s[100], int a, int b)//Delete x(ɾ��x��
{
	int n;
	n = strlen(s);
	n -= a;
	for (n; 0 <= n; n--)
	{
		s[a] = s[b];
		a++;
		b++;
	}
	return s[100];
}
int _insert(char x, char s[100], int a, int b)//��x����y������ұ�
{
	int n;
	n = strlen(s);
	n--;
	if (x == 'A')
	{
		for (n; a - 2 <= n; n--)
		{
			s[n + 1] = s[n];
		}
		s[a - 2] = b + 48;
	}
	else
	{
		for (n; a - 1 <= n; n--)
		{
			s[n + 1] = s[n];
		}
		s[a - 1] = b + 48;
	}
	return s[100];
}
int main()
{
	char s[100], g;
	int x, y, z, i, a, b, n, m, k;
	scanf("%s", s);
	b = strlen(s);
	(scanf("\n%c%d%d", &g, &x, &y) != EOF);
	for (i = 0;; i++)
	{
		if ((s[i] - 48) == y)
		{
			z = i;
			break;
		}
	}
	for (i = 0;; i++)
	{
		if ((s[i] - 48) == x)
		{
			a = i + 1;
			break;
		}
	}
	if ((a - 1) > z)//���a-1λ��zλ����z+1������x���ڵ�λ��y���Ҫ+1.
		z = z + 1;
	_link(s, a - 1, a);
	a - 1;
	_insert(g, s, z + 1, x);
	for (i = 0; i < b; i++)
	{
		printf("%c", s[i]);
	}
	return 0;
}
