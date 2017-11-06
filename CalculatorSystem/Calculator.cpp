#include <iostream>
using std::cout;
using std::endl;
class Calculators
{
private:
	double number1;
	double number2;
	char sign;

public:
	void Operation(char sign){
		if(!(sign=='/'&&number2==0))
		switch(sign){
			case '+':cout<<number1+number2<<endl;break;
			case '-':cout<<number1-number2<<endl;break;
			case '/':cout<<number1/number2<<endl;break;
			case '*':cout<<number1*number2<<endl;break;
			default:cout<<"input error,please input again!"<<endl;
		}
		else
			cout<<"Divisor is zero,please input again!"<<endl;
	}
	void input(double num1,double num2){
		number1=num1;
		number2=num2;
	}
	
};
