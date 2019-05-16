
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Calculator
{
private:
	double number_1, number_2;
	string action;
public:
	Calculator(double number_1, string action_, double number_2);
	double result()
	{
		if (action == "+") 
		{
			cout << number_1 + number_2;
		}

		if (action == "-")
		{
			cout << number_1 - number_2;
		}

		if (action == "*") 
		{
			cout << number_1 * number_2;
		}

		if (action == "/") 
		{
			if (number_2 == 0)
			{
				cout << "Error!";
				return 0;
			}
			cout << number_1 / number_2;
		}
	}

};



Calculator::Calculator(double number_1_, string action_, double number_2_) : number_1(number_1_), action(action_), number_2(number_2_) {} //конструктор с параметрами

int main() {
	double number_1, number_2;
	string action;
	cout << "enter first number" << endl;
	cin >> number_1;
	cout << "enter your ection" << endl;
	cin >> action;
	cout << "enter second number" << endl;
	cin >> number_2;

	Calculator calc(number_1, action, 2);
	calc.result();

}