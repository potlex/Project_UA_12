#include <iostream>
#include <chrono> //для работы с таймером
#include <thread> //для работы с потоком
#include <Windows.h>
#define _CRT_SECURE_NO_WARNINGS
#include <iomanip>
#include <time.h> 
#include <ctime>
using namespace std;
using namespace std::chrono;
void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
void timer();
void calc();
void raspis();
void menu();

int main()
{

	menu();
	return 0;

}
void menu()
{
	SetColor(11, 0);
	setlocale(LC_CTYPE, "Russian");
	short number;
	cout << "Выберите необходимое действие: " << endl
		<< "  1. Калькулятор" << endl
		<< "  2. Расписание занятий" << endl
		<< "  3. Таймер" << endl
		<< "Введите номер действия: ";
	cin >> number;
	switch (number)
	{
	case 1:
	{
		calculator();
		break;
	};
	case 2:
	{
		schedule();
		break;
	};
	case 3:
	{
		calender();
		break;
	};
   }
}
	void calender()
	{
		SetColor(10, 0);
		short hours = 0, minutes = 0, seconds = 0;
		while (true) {
			cout << hours << ":" << minutes << ":" << seconds;
			seconds++;
			if (seconds == 60) {
				seconds = 0;
				minutes++;
			}
			if (minutes == 60) {
				minutes = 0;
				hours++;
			}
			if (seconds == 16) {
				system("cls"); //очистка консоли
				menu();
			}
			this_thread::sleep_for(0.999s); //sleep_for - блокирует вызывающий поток
			system("cls"); //очистка консоли
		}
	}

void schedule()
{
	SetColor(13, 0);
	short number;
	cout << "Необходимо выбрать день:" << endl;
	cout << "Введите номер дня недели(1 - 6): ";
	cin >> number;

	switch (number)
	{
	case 1:
		cout << "Понедельник:" << endl;
		cout << "14:40 - 16:00 лк Математический Анализ / СЯП" << endl;
		cout << "16:30 - 17:50 пз Мат анализ" << endl;
		cout << "18:05 - 19:25 пз Линейная алгебра и аналитическая геометрия" << endl;
		cout << "19:40 - 21:00 пз Английский язык" << endl;
		break;
	case 2:
		cout << "Вторник:" << endl;
		cout << "14:40 - 16:00 лр ОАиП" << endl;
		cout << "16:30 - 17:50 лк ОАиП" << endl;
		break;
	case 3:
		cout << "Среда:" << endl;
		cout << "13:00 - 14:20 лр ОАиП" << endl;
		cout << "14:40 - 16:00 лк АЛОЦВМ" << endl;
		cout << "16:30 - 17:50 Физкультура" << endl;
		cout << "18:05 - 19:25 Линейная алгебра и аналитическая геометрия" << endl;
		break;
	case 4:
		cout << "Четверг:" << endl;
		cout << "14:40 - 16:00 лр СЯП" << endl;
		cout << "16:30 - 17:50 лк ТРПО" << endl;
		cout << "18:05 - 19:25 лр ТРПО" << endl;
		break;
	case 5:
		cout << "Пятница:" << endl;
		cout << "14:40 - 16:00 пз Математический Анализ" << endl;
		cout << "16:30 - 17:50 лк КЯРД" << endl;
		break;
	case 6:
		cout << "Суббота:" << endl;
		cout << "9:35 - 11:15 пз АЛОЦВМ" << endl;
		cout << "11:25 - 12:50 лк Математический Анализ" << endl;
		cout << "13:00 - 14:20 Физкультура" << endl;
		cout << "14:40 - 16:00 лк КЯРД" << endl;
		break;
	default:
		cout << "Некорректный номер!" << endl;
	};
}
	

void calculator()
{
	float a, b;
	char operation;
	float raz, sum, proiz, otnos;
	cout << "Доступны операции сложения, вычитания, умножения и деления: " << endl;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "Введите знак операции: ";
	cin >> operation;

	raz = a - b;
	sum = a + b;
	proiz = a * b;
	otnos = a / b;

	switch (operation)
	{
	case '-':
		cout << a << " - " << b << " = " << raz << endl;
		break;
	case '+':
		cout << a << " + " << b << " = " << sum << endl;
		break;
	case '*':
		cout << a << " * " << b << " = " << proiz << endl;
		break;
	case '/':
		cout << a << " / " << b << " = " << otnos << endl;
		break;
	case ':':
		cout << a << " : " << b << " = " << otnos << endl;
		break;
	default:
		cout << "Ошибка!" << endl;
	}
}
