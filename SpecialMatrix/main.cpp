#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "\t";
		for (int j = 6; j <= 12; j++)
			cout << (i + j) % 7 << " ";
		cout << "\n";
	}
	return 0;
}