string类是c++标准库提供的，他的功能非常强大，对大多数应用来说，比使用c字符串更安全，更高效。

 

**1.初始化**

初始化string，他会自动分配空间大小，而且他会动态的增大空间。

但是初始化c字符串，比如定义了char[20]，他只能写入19个字符，因为他要‘\0’结尾，而且不能动态增加数组长度（除非使用malloc动态数组，用realloc重新分配空间）。

 

**2.复制**

使用string类，定义了str1（有初始值）和str2（没有初始值）,可以直接用“=”把str1中的元素直接赋给str2。

string str1 = "hello,world";
string str2;
str2 = str1;

使用c字符串的话，定义了str1（有初始值）和str2（没有初始值）,要用strcpy函数把str1赋值给str2（而且str2的空间要大于等于str1的空间）。

char str1[13]="hello,world!";
char str2[13];
strcpy(str2,str1);
cout<<str1<<endl;

 

**3.连接**

 

使用string类，定义了str1（有初始值）和str2（没有初始值）,可以直接用“+”将str1中的元素与str2中的元素连接。

string str1 = "hello,";
string str2 = "world!";
str1 += str2;　　//把连接后的元素赋给str1。

使用c字符串的话，定义了str1（有初始值）和str2（没有初始值）,要用strcat函数将str1的元素与str2的元素连接。（得到元素数组的空间大小一定要大于等于连接后的大小，否则会出错或导致程序崩毁）

char str1[13]="hello,";
char str2[7]="world!";
strcat(str1,str2);

 
**c字符串每次使用都要查看空间大小是否足够，否则会带来很多安全问题，所以string类比c风格字符串更安全，而且更高效。**
**而且string还可以使用迭代器，是c字符串所不能的。**