# namespace的用法

## 1.什么是命名空间
通常我们学c++的时候经常看见头文件下有一句using namespace std，有什么用呢？
例如：
'''
#include<iostream>
using namespace std;

int main()
{
	cout << "Hello,World!" << endl;
	return 0;
}
'''
如果我们去掉这句的话，程序就会报未声明变量cout和未声明变量endl。
原来**std命名空间是C++中标准库类型对象的命名空间。**如果我们去掉using namespace std这句话，cout就成了一个未定义的变量。

## 2.namespace命名空间有什么用呢
namespace命名空间是在大型项目开发中，为了避免命名冲突而引入的一种机制。
比如A公司定义了命名变量score，B公司也定义了score。但是我要先使用B公司的score变量，然后在使用A公司的score变量。该怎么办呢？
A公司的文件
'''
namespace A
{
	int score=5;
}
'''
B公司的文件
'''
namespace B
{
	int score=10;
}
'''
使用方法
'''
#include<iostream>
#include"A.cpp"
#include"B.cpp"

using namespace std;

int main()
{
	{
		using B::score;
		cout<<score<<endl;
	}
	{
		using A::score;
		cout<<score<<endl;
	}
	return 0;
}
'''
这就可以区分两个score了，不会混乱。




