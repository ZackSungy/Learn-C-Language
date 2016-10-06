#include<stdio.h>
int main()
{
	char a = 126, b = 42, c = 81, d = 65;
	printf("%c%c%c%c%c\n", a, b, b, b, a);
	printf("%c %c %c\n", c, d, c);
	return 0;
}