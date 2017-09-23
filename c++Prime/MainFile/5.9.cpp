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
	int cnt = 0;
	string word = "aeiou";
	char ch;
	while (cin >> ch)
	{
		if (word.find(ch) < word.size())
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}