#include<stdio.h>
int n;

void A(int a, int b)
{
	if (b<a)return;
	printf("sin(%d", a);
	if (a % 2 == 1 && b != a)
		printf("-");
	else if (a % 2 == 0 && b != a)
		printf("+");
	A(a + 1, b);
	printf(")");
}

void print(int s)
{
	if (s<1)return;
	if (s != n)
		printf("(");
	print(s - 1);
	A(1, s);
	if (s % 2 == 1 && s != n)
		printf("+%d", n);
	else if (s % 2 == 0 && s != n)
		printf("+%d", n - 1);
	if (s != n)
		printf(")");
}

int main()
{
	scanf("%d", &n);
	print(n);
	printf("+1");
	return 0;
}