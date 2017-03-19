#include<stdio.h>  
#include<string.h>  
#include<math.h>  

void honai(int n, char &x, char y, char z)
{
	if (n == 1)
	{
		printf("%c->%c\n", x, z);
		return;
	}
	honai(n - 1, x, z, y);
	printf("%c->%c\n", x, z);
	honai(n - 1, y, x, z);
}

int main()
{
	int n;
	char x = 'x', y = 'y', z = 'z';
	scanf("%d", &n);
	honai(n, x, y, z);
	return 0;
}