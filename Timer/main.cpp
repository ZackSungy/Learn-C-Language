#include<cstdio>
#include<iostream>
#include<cstring>
#define Max 8
using namespace std;

string t[21] = { "zero", "one", "two", "three", "four", "five", "six", "seven"
, "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen"
, "seventeen", "eighteen", "nineteen", "twenty" };

string t1[3] = { "thirty", "forty", "fifty" };

int main()
{
	int h, m;
	scanf("%d%d", &h, &m);
	if (h <= 20)
		cout << t[h] << " ";
	else
		cout << t[20] << " " << t[h % 20] << " ";
	if (m == 0)
		cout << "o'clock";
	else if (m <= 20)
		cout << t[m] << " ";
	else if (m <= 29)
		cout << t[20] << " " << t[m % 20] << " ";
	else if (m == 30)
		cout << t1[0] << " ";
	else if (m <= 39)
		cout << t1[0] << " " << t[m % 30] << " ";
	else if (m == 40)
		cout << t1[1] << " ";
	else if (m <= 49)
		cout << t1[1] << " " << t[m % 40] << " ";
	else if (m == 50)
		cout << t[2] << " ";
	else
		cout << t1[2] << " " << t[m % 50] << " ";
	return 0;
}