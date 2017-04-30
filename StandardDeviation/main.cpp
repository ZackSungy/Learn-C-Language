#include<iostream> 
#include<vector>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	vector<double> a;
	char b;
	double c, sum = 0, avg = 0;
	while (cin >> c)
	{
		a.push_back(c);
		if (getchar() == '\n')
			break;
	}
	for (int i = 0; i<a.size(); i++)
		avg += a[i];
	avg /= a.size();
	for (int i = 0; i<a.size(); i++)
		sum = sum + (a[i] - avg)*(a[i] - avg);
	sum = sum / a.size();
	sum = sqrt(sum);
	cout << sum << endl;
	return 0;
}