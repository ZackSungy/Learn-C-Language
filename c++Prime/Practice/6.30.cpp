#include <iostream>
#include <string>
using namespace std;

bool str_subrange(const string &str1,const string &str2)
{
	if(str1.size()==str2.size())
		return str1==str2;
	auto size=str1.size()<str2.size()?str1.size():str2.size();
	for(decltype(size) i=0;i!=size;i++)
	{
		if(str1[i]!=str2[i])
		//	return false;
		;
	}
	//return true;
}

int main()
{
	string str1="123s",str2="12344";
	cout<<str_subrange(str1,str2)<<endl;
	return 0;
}