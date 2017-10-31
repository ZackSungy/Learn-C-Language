## 题目:构造函数中后面的【冒号】是有什么用的，如：data_block(size_t block_size, allocator* alloc: begin_(NULL), end_(NULL), end_of_block_(NULL), allocator_(alloc)

[题目一参考网址]（http://blog.csdn.net/zj510/article/details/8135556）

**总结：构造函数后的冒号是一开始给构造函数赋值用的，与普通等号不同。**

##题目二：char* 是什么？与 char[] 有什么区别，它们的使用场景分别是什么？


[题目二参考网址]（http://blog.csdn.net/yahohi/article/details/7427724）

**总结：char*所在的地址是不会改变的，但是他是不能修改初始值的，所以他的应用场景应该是指针或者是赋予初值后就不改的数组;char[]是可变的数组，但他的地址会改变,所以系统每次寻找它会比寻找char*费时间。**

## 题目三:inline 关键字是什么？有什么作用？为什么用它？


[题目三参考网址]（http://blog.csdn.net/yahohi/article/details/7427724）

**总结：inline是内联函数，如果要使用内联函数，不能在声明中定义，一定要在定义中定义。内联函数可以减少函数栈的开销。但是有非常多缺点：**
1.内联函数中不能含有复杂的语句，如循环，过多的判断
2.如果过多的使用内联函数，他会不断的复制代码，使程序的总代码量增多，消耗更多的内存空间。
3.大量使用内联函数会增加程序运行时间。
**所以内联函数还是少用为好。**

## 题目四：copy(char* dest_buffer, const char* src_buffer, size_t sz) 的第二个参数为什么有 const 关键字？有什么作用？

网上查一下src是源的意思，而dest找不到，所以应该是将src_buuffer中的数组复制到dest_buffer的数组中。而程序想要提高函数的安全性，所以把src_buffer设定成常量。



