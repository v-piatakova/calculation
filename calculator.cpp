// calculator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;               

int main()                         
{
	
	double number[10];
	char first_symbhol;


		cout << "cin first calculating number" << endl;
		cin >> number[0];
		cout << "cin symbhol" << endl;
		cin >> first_symbhol;
		cout << "cin second calculating number" << endl;
		cin >> number[1];
		{
			switch (first_symbhol) {// Выполнение одной из операций на основе полученной информации
			case '+':
				number[2] = number[0] + number[1];
				cout << number[0] << " + " << number[1] << " = " << number[2] << endl; break;
			case '-':
				number[2] = number[0] - number[1];
				cout << number[0] << " - " << number[1] << " = " << number[2] << endl; break;
			case '*':
				number[2] = number[0] * number[1];
				cout << number[0] << " * " << number[1] << " = " << number[2] << endl; break;
			case '/':
				number[2] = number[0] / number[1];
				cout << number[0] << " / " << number[1] << " = " << number[2] << endl; break;
			default:
				cout << "wrong symbhol" << endl; break;
			}
		}

	system("pause");
	return 0;
}