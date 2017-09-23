# c++中优先级与结合性的重要性

**表达式一般按照优先级计算，如果优先级相同，就按照结合性来计算。**

- 根据优先级，8+4*3等于20而不是36；

- 根据结合性，18-4-3等于11而不是17。

**下面是优先级表**

优先级由高到低：
![](https://gss0.baidu.com/-Po3dSag_xI4khGko9WTAnF6hhy/zhidao/pic/item/a686c9177f3e670992a12c7d3dc79f3df9dc558a.jpg)
![](https://gss0.baidu.com/7Po3dSag_xI4khGko9WTAnF6hhy/zhidao/pic/item/b17eca8065380cd796bccb6fa744ad3458828195.jpg)
![](https://gss0.baidu.com/-fo3dSag_xI4khGko9WTAnF6hhy/zhidao/pic/item/d01373f082025aaf2a6b1749fdedab64024f1ad2.jpg)

**在算数表达式中，算数的运算快慢都是通过优先级来决定的，除了一种情况外，就是使用（）来改变他们的优先级。**
比如：
int int_array[] = { 2,4,6,8,10 };
int num1 = *int_array + 3;    //num1初始化为5，他等价于int_array[0]+3。
int num2 = *(int_array + 3);  //num2初始化为8，他等价于int_array[3]。

**一个运算符需要几个数值参加运算就称为几目运算符。而且优先级逐级递减。**
例如定义了变量a=3，b=4

单目运算符：!a   ++b  -b(这里‘-’为负号) 等。

 

双目运算符：a+b a!=b a||b 等

 

三目运算符：a>0？a:b(表示如果a大于零为真就选a，否则选b)。