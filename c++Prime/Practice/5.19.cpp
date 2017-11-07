#include<iostream>
#include<string>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	string s1, s2;
	do {
		cout << "input two string:" << endl;
		getline(cin, s1);
		getline(cin, s2);
		cout << (!(s1.size()>s2.size())?s1:s2) << endl;
	} while (!s1.empty()&&!s2.empty());
	return 0;
}