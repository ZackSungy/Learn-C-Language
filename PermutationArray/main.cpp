#include<iostream>
#include<fstream>
#include<cstring>
#include<algorithm>

using namespace std;
int main()
{
	int n, x, y, r, m, a;
	ifstream in("aaa.txt");
	in >> a;
	for (; in >> n;)
	{
		in >> x;
		in >> y;
		in >> r;
		in >> m;
		if (x == 1)
		{
			if (y == 1)
			{
				cout << (m%r == 0 ? m / r : m / r + 1) << " ";
				cout << (m%r == 0 ? r : m%r) << endl;
			}
			else
			{
				cout << (m%r == 0 ? r : m%r) << " ";
				cout << (m%r == 0 ? m / r : m / r + 1) << endl;
			}
		}
		else
		{
			if (y == 1)
			{
				int a;
				cout << ((m%r) <= ((r + 1) / 2) ? (m / r) * 2 + 1 : (m / r) * 2) << " ";
				a = m%r;
				if (a>(r + 1) / 2)
					cout << (a % (r + 1) / 2) * 2 << endl;
				else
					cout << a * 2 - 1 << endl;
			}
			else
			{
				int a;
				a = m%r;
				if (a>(r + 1) / 2)
					cout << (a % (r + 1) / 2) * 2 << " ";
				else
					cout << a * 2 - 1 << " ";
				cout << ((m%r) <= ((r + 1) / 2) ? (m / r) * 2 + 1 : (m / r) * 2) << endl;
			}
		}
	}
	return 0;
}