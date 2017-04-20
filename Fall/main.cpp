#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n;
	double sum = 100, s = 100;
	cin >> n;
	for (int i = 1; i<n; i++)
	{
		s /= 2;
		sum += s * 2;
	}
	cout << setprecision(7) << sum << endl;
	return 0;
}