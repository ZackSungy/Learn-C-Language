#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> process()
{
	string expected="i am a man";
	string actual="i am a man";
	if(expected.empty())
		return {};
	else if (expected==actual)
		return {"functionX","okay"};
	else
		return {"functionX", expected,actual};
}

int main()
{
	vector<string> a=process();
	for(auto i : a)
		cout<<i<<endl;
	return 0;
}
