#include<stdio.h>
#define MAXN 1000+10
int target[MAXN], n;
int main()
{

	while (scanf("%d", &n) == 1);//Enter N and press Ctrl+Z
	{
		for (int i = 1; i <= n; i++)
			scanf("%d", &target[i]);
		for (int i = 1; i <= n; i++)
			printf("%d", target[i]);
		int stack[MAXN], top = 0;
		int A = 1, B = 1;
		int ok = 1;
		while (B <= n)
		{
			if (A == target[B])
			{

				A++;
				B++;
			}
			else if (top&&stack[top] == target[B])
			{
				top--;
				B++;
			}
			else if (A <= n)
			{
				stack[++top] = A++;
			}
			else
			{
				ok = 0;
				break;
			}
		}
		printf("%s\n", ok ? "yes" : " no");
	}
	return 0;
}#include<stdio.h>
#define MAXN 1000+10
int target[MAXN], n;
int main()
{

	while (scanf("%d", &n) == 1);
	{
		for (int i = 1; i <= n; i++)
			scanf("%d", &target[i]);
		for (int i = 1; i <= n; i++)
			printf("%d", target[i]);//
		int stack[MAXN], top = 0;
		int A = 1, B = 1;
		int ok = 1;
		while (B <= n)
		{
			if (A == target[B])
			{

				A++;
				B++;
			}
			else if (top&&stack[top] == target[B])
			{
				top--;
				B++;
			}
			else if (A <= n)
			{
				stack[++top] = A++;
			}
			else
			{
				ok = 0;
				break;
			}
		}
		printf("%s\n", ok ? "yes" : " no");
	}
	return 0;
}