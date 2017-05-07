#include<iostream> 
#include<vector>
#include<fstream>
using namespace std;
int main()
{
	ifstream in("abc.txt");
	vector<string> a;
	int Num = 0;
	for (string b; in >> b;)
		a.push_back(b);
	for (int i = 0; i<a.size(); i++)
	{
		if (a[i].find("25") != -1)
		{
			if (a[i + 1].find('*') != -1)
				Num += 2;
			else
				Num++;
		}

	}
	cout << Num;
	in.close();
	return 0;
}