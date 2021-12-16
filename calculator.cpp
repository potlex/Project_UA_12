#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	float a, b;
	char operation;
	float dif, sum, mul, div;
	cout << "Доступны операции сложения, вычитания, умножения и деления: " << endl;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "Введите знак операции: ";
	cin >> operation;

	dif = a - b;
	sum = a + b;
	mul = a * b;
	div = a / b;

	switch (operation)
	{
	case '-':
		cout << a << " - " << b << " = " << dif << endl;
		break;
	case '+':
		cout << a << " + " << b << " = " << sum << endl;
		break;
	case '*':
		cout << a << " * " << b << " = " << mul << endl;
		break;
	case '/':
		cout << a << " / " << b << " = " << div << endl;
		break;
	case ':':
		cout << a << " : " << b << " = " << div << endl;
		break;
	default:
		cout << "Ошибка!" << endl;
	}
}
