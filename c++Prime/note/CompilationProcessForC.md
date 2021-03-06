# C语言的编译过程

c语言的过程是：预处理->编译->汇编->链接

### 预处理

预处理主要是将宏定义，条件预编译指令，注释和头文件处理掉。
其中主要步骤包括：
1. 将所有的#define删除，保留他所定义的内容；
2. 处理条件预编辑指令，如#if,#ifed,#if,#elif,#endif
3. 处理"#include"预编译指令，将包含文件插入到预编译指令，用递归方法进行，文件内可能包含其他文件。
4. 删除所有注释。
5. 添加行号和文件标识，以便编译时产生调试时使用的行号和编译错误警告行号。
6. 保留#pragma编译指令，编译器需要使用它们。

预处理的使用：
首先创建一个名字为hello.c的文件
'#include<stdio.h>

int main()
{
	printf("hello,world!\n");
	return 0;
}
'
##以下代码用在Liunx系统中使用
预处理命令:
'gcc -E hello.c -o hello.i'
'gcc -E -P hello.c -o hello.i'
可以使用cat hello.i来查看预处理后的代码。

###编译

主要作用：扫描，语法分析，语义分析，源代码优化，代码生成，目标代码优化。
编译就是通过词法分析和语法分析，在确认所有资料指令都符合语法规则之后，将其翻译成等价的中间代码或者汇编代码。

编译阶段会对代码进行优化处理，不仅涉及到编译技术本身，还涉及到机器的硬件环境。优化分为两部分：
1. 不依赖于具体计算机的优化。主要是删除公共表达式、循环优化（代码外提、强度削弱、变换循环控制、已知量的合并等）、无用赋值的删除等
2. 同机器硬件结构相关的优化。主要考虑如何充分利用机器的硬件寄存器存放的有关变量的值以减少内存的访问次数；根据机器硬件执行指令的特点对指令进行调整使目标代码比较短，执行效率更高等。

### 汇编

汇编是将汇编语言代码翻译成目标机器指令的过程。目标文件存放的是与源程序等效的目标机器语言代码。目标文件由段组成，通常一个目标文件至少有两个段：
1. 代码段：主要包含程序的指令。该段一般是可读可执行，一般不可写。
2. 数据段：主要存放程序中用到的各种全局变量和静态数据。一般数据段是可读、可写和可执行的。

###链接
就是将有关的文件与目标文件进行链接，比如系统文件或者是其他使用到的文件，比如要使用某个文件中定义好的函数，就要与该文件进行链接。

根据开发人员指定的同库函数的链接方式的不同，链接处理分为两种：

1. 静态链接：函数代码将从其所在的静态链接库中被拷贝到最终的可执行程序中。
2. 动态链接：函数的代码被放到称作是动态链接库或共享对象的某个目标文件中。链接程序此时所做的只是在最终的可执行程序中记录下共享对象的名字以及其它少量的信息，在可执行程序被执行时，动态链接库的全部内容将被影射到运行时相应进程的虚拟地址空间。动态链接程序将根据可执行程序中记录的信息找到对应的函数代码。

备注：使用动态链接能使最终的可执行文件较小，并且当共享对象被多个进程使用时能节约一些内存，因为在内存中只需要保存一份此共享对象的代码。

参考：
>http://www.jianshu.com/p/4dfa5dea63b5


