#include<cstdio>
#include<vector>
using namespace std;
#define Max 1000

int main()
{
	int A[Max], n, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
		scanf("%d", &A[i]);
	vector<int> s(A, A + n);
	for (int i = 0; i<n - 1; i++)
	{
		int a = s[0], b = 0, k = 0;
		for (int j = 0; j<n - i; j++)
		if (a>s[j])
		{
			a = s[j];
			k = j;
		}
		sum += a;
		b += a;
		s.erase(s.begin() + k);
		a = s[0], k = 0;
		for (int j = 0; j<n - i - 1; j++)
		if (a>s[j])
		{
			a = s[j];
			k = j;
		}
		sum += a;
		b += a;
		s.erase(s.begin() + k);
		s.push_back(b);
	}
	printf("%d", sum);
	return 0;
}