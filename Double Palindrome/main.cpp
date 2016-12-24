#include<stdio.h>
#include<string.h>

int s[1000];

int f(int a, int b)
{
	int i, j, k = 1;
	for (a, b, i = 0; a / b > 0; a /= b, i++)
		s[i] = a%b;
	s[i] = a%b;
	for (j = 0, i; j <= i; j++, i--)
	if (s[i] != s[j])
	{
		k = 0;
		break;
	}
	if (k)
		return 1;
	else
		return 0;
}


int main()
{
	int a, i, k, count = 0;
	scanf("%d", &a);
	for (a++;; a++)
	{
		count = 0;
		for (i = 2; i <= 10; i++)
		{
			k = f(a, i);
			if (k)
				count++;
			if (count == 2)
				break;
		}
		if (count == 2)
			break;
	}
	printf("%d\n", a);
	return 0;
}