#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

string make_plural(const string str1,const string str2)
{
	return str1.size()<=str2.size()?str1:str2;
}

int main()
{
	string str1="hello,world",str2="hello,ZackSunGY";
	string str3=make_plural(str1,str2);
	for(auto &i:str3){
		cout<<i;
	}
	cout<<endl;
	return 0;
}
