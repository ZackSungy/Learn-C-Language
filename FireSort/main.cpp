#include<iostream>
#include<algorithm>
#include<sstream>
#include<vector>
#include<fstream>
using namespace std;

typedef vector<vector<int> >Mat;

Mat input()
{
	ifstream in("aaa.txt");
	Mat a;
	for (string s; getline(in, s);)
	{
		vector<int> b;
		istringstream sin(s);
		for (int ia; sin >> ia;)
			b.push_back(ia);
		a.push_back(b);
	}
	in.close();
	return a;
}

void mySort(Mat &a)
{
	for (int pass = 1; pass<a.size(); ++pass)
	for (int i = 0; i<a.size() - pass; ++i)
	if (a[i + 1].size()<a[i].size())
		a[i].swap(a[i + 1]);
}

void print(const Mat&a)
{
	for (int i = 0; i<a.size(); ++i)
	{
		for (int j = 0; j<a[i].size(); ++j)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

int main()
{
	Mat a = input();
	mySort(a);
	print(a);
	return 0;
}