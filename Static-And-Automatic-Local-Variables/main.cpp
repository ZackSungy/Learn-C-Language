#include<stdio.h>
void fun()
{
	auto n1 = 0;
	static int n2 = 0;
	n1++;
	n2++;
	printf("n1=%d,n2=%d\n", n1, n2);
}
int main()
{
	void fun();
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("第%d次调用fun（）:", i + 1);
		fun();
	}
}