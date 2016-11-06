#include<cstdio>
#include<queue>
using namespace std;
queue<int>q;
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		q.push(i + 1);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", q.front());
		if (q.size() != 1)
		{
			q.pop();
			q.push(q.front());
			q.pop();
		}
	}
	printf("\n");
	return 0;
}