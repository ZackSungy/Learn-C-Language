#include<stdio.h>

void print(int a)
{
	if (a<0)return;
	print(a - 1);
	printf("%c", 'A' + a);
	print(a - 1);

}

int main()
{
	int n;
	scanf("%d", &n);
	print(n - 1);
	return 0;
}