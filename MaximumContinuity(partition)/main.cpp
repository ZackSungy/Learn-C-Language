#include<stdio.h>

int maxsum(int *A, int x, int y)
{
	int L, R, max, v, m;
	if (y - x == 1)
		return A[x];
	m = x + (y - x) / 2;
	max = maxsum(A, x, m) > maxsum(A, m, y) ? maxsum(A, x, m) : maxsum(A, m, y);
	v = 0;
	L = A[m - 1];
	for (int i = m - 1; x <= i; i--)
		L = L > (v += A[i]) ? L : v;
	v = 0;
	R = A[m];
	for (int i = m; i <= y; i++)
		R = R > (v += A[i]) ? R : v;
	return max = max > (L + R) ? max : (L + R);
}
int main()


{
	int A[100], n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &A[i]);
	printf("%d", maxsum(A, 0, n));
	return 0;
}