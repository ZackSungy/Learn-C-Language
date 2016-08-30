#include<stdio.h>
int main()
{
	int  a[] = { 1, 2, 3, 4, 5, 6 };
	printf("a=%d\n", a);
	printf("&a=%d\n", &a);
	printf("a+1=%d\n", a + 1);
	printf("&a+1=%d\n", &a + 1);
	printf("a[0]=%d\n", a[0]);
	printf("a[0]+1=%d\n", a[0] + 1);
	printf("&a[0]=%d\n", &a[0]);
	printf("&a[0]+1=%d\n", &a[0] + 1);
	return 0;
}