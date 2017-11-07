#include<iostream>
#include<cstring>
using namespace std;


int main()
{
	char str1[7] = "hello,";
	char str2[7] = "world!";
	char str3[20];
	strcpy(str3, str1);
	strcat(str3, str2);
	cout << str3 << endl;
	return 0;
}