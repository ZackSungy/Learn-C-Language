#include<iostream>
using std::cout;
using std::endl;

void Sign(char sign, double number1, double number2);

class Operation
{
protected:
	double number1;
	double number2;
public:
	void GetResult(char sign) {
		Sign(sign, number1, number2);
	}
	void Input(double num1, double num2)
	{
		number1 = num1;
		number2 = num2;
	}
};

class Add :public Operation
{
public:
	void GetResult() {
		cout << number1 + number2 << endl;
	}
};

class  Reduce:public Operation
{
public:
	void GetResult() {
		cout << number1 - number2 << endl;
	}
};


class Ride :public Operation
{
public:
	void GetResult() {
		cout << number1 * number2 << endl;
	}
};

class Excpet :public Operation
{
public:
	void GetResult() {
		cout << number1 / number2 << endl;
	}
};

void Sign(char sign, double number1, double number2) {
	if (!(sign == '/'&&number2 == 0))
		switch (sign) {
		case '+': {Add a; a.Input(number1, number2); a.GetResult(); }; break;
		case '-': {Reduce a; a.Input(number1, number2); a.GetResult(); }; break;
		case '*': {Ride a; a.Input(number1, number2); a.GetResult(); }; break;
		case '/': {Excpet a; a.Input(number1, number2); a.GetResult(); }; break;
		default:cout << "input error,please input again!" << endl;
		}
	else
		cout << "Divisor is zero,please input again!" << endl;
}


