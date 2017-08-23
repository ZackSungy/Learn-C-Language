#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;   //定义std::string类
	cin >> s;	//输入
	cout << s << endl; //endl刷新输出流缓存区，使数据真正进入输出流
	return 0;	//结束
}