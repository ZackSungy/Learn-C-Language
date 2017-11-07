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
	string word = "aeiouAEIOU";
	char ch;
	while ((ch = getchar()) != EOF)
	{
		if (word.find(ch) < word.size())
			cnt++;
		else if (ch == ' ' || ch == '\t' || ch == '\n')
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}