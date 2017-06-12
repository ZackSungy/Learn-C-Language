#include<iostream>
#include<fstream>
#include<cstring>
#include<algorithm>

using namespace std;
int main()
{
	ifstream in("ada.txt");
	string s1;
	string s2;
	for (string s; getline(in, s);)
	if (s.size() != 0)
	{
		int i;
		s1 = s;
		getline(in, s);
		s2 = s;
		sort(s1.begin(), s1.end());
		sort(s2.begin(), s2.end());
		if (s1.size() == s2.size())
		{
			for (i = 0; i<s1.size(); i++)
			if (s1[i] != s2[i])
				break;
		}
		if (i == s1.size() && i != 0)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}