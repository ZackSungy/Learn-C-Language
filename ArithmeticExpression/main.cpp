#include<iostream>
#include<vector>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
char s1[10001];
vector<char> bra;
vector<char> a;
vector<char> cal;
vector<int> num;

int main()
{
	gets(s1);
	vector<char> s(s1, s1 + strlen(s1));
	for (int i = 0; i<s.size(); i++)
	{
		int k = 1;
		if ('0' <= s[i] && s[i] <= '9')
		{
			if (i != 0 && '0' <= s[i - 1] && s[i - 1] <= '9')
			{
				char n;
				n = bra[bra.size() - 1] - 48;
				n = n * 10 + (s[i] - 48);
				n += 48;
				bra.pop_back();
				bra.push_back(n);
			}
			else
				bra.push_back(s[i]);
		}
		else if (s[i] == ')')
		while (1)
		{
			if (a[a.size() - 1] == '(')
			{
				a.pop_back();
				break;
			}
			bra.push_back(a[a.size() - 1]);
			a.pop_back();
		}
		else
			a.push_back(s[i]);


		if (a.size() >= 2)
		{
			for (int i = 0; i<a.size() - 1; i++)
			{
				int k;
				if (a[i] == '*' || a[i] == '/')
				{
					k = 1;
					for (int j = i + 1; j<a.size(); j++)
					if (a[j] == '(')
					{
						k = 0;
						break;
					}
					if (k)
					{
						bra.push_back(a[i]);
						a.erase(a.begin() + i);
						i--;
					}
				}

				else if (a[i] == '+' || a[i] == '-')
				{
					k = 1;
					for (int j = i + 1; j<a.size(); j++)
					if (a[j] == '(')
					{
						k = 0;
						break;
					}
					if (k&&a[i + 1] == '+' || a[i + 1] == '-')
					{
						bra.push_back(a[i]);
						a.erase(a.begin() + i);
						i--;
					}
				}



			}
		}
	}

	while (!a.empty())
	{
		bra.push_back(a[a.size() - 1]);
		a.pop_back();
	}

	for (int i = 0; i<bra.size(); i++)
	{
		if (bra[i] == '+' || bra[i] == '-' || bra[i] == '*' || bra[i] == '/')
		{
			int c;
			if (bra[i] == '+')
			{
				c = num[num.size() - 1] + num[num.size() - 2];
				num.pop_back();
				num.pop_back();
				num.push_back(c);
			}
			else if (bra[i] == '-')
			{
				c = num[num.size() - 2] - num[num.size() - 1];
				num.pop_back();
				num.pop_back();
				num.push_back(c);
			}
			else if (bra[i] == '*')
			{
				c = num[num.size() - 1] * num[num.size() - 2];
				num.pop_back();
				num.pop_back();
				num.push_back(c);
			}
			else if (bra[i] == '/')
			{
				c = num[num.size() - 2] / num[num.size() - 1];
				num.pop_back();
				num.pop_back();
				num.push_back(c);
			}
		}
		else
		{
			num.push_back(bra[i] - 48);
		}
	}

	for (int i = 0; i<num.size(); i++)
		cout << num[i] << endl;
	return 0;
}