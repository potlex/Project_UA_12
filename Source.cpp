#include <iostream>
#include <chrono> //для работы с таймером
#include <thread> //для работы с потоком
#include <Windows.h>
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
	cout << "Наша команда Предосталяет вам 3 подпрограммы на выбор" << endl
		<< "  1-я подпрограмма - Простейший калькулятор" << endl
		<< "  2-я подпрограмма - Расписание занятий на указанный день" << endl
		<< "  3-я подпрограмма - Таймер" << endl
		<< "Введите номер желаемой подпрограммы: ";
	cin >> number;
	switch (number)
	{
	case 1:
	{
		calc();
		break;
	};
	case 2:
	{
		raspis();
		break;
	};
	case 3:
	{
		timer();
		break;
	};
   }
}
	void timer()
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

void raspis()
{
	SetColor(13, 0);
	short number;
	cout << "Наша программа реализует вывод расписания по заданному дню недели." << endl;
	cout << "Введите номер дня недели(1 - 6): ";
	cin >> number;

	switch (number)
	{
	case 1:
		cout << "Понедельник:" << endl;
		cout << "14:40 - 16:00 Мат анализ / СЯП" << endl;
		cout << "16:30 - 17:50 пз Мат анализ" << endl;
		cout << "18:05 - 19:25 пз Алгебра/Геометрия" << endl;
		break;
	case 2:
		cout << "Вторник:" << endl;
		cout << "14:40 - 16:00 лр ОАиП" << endl;
		cout << "16:30 - 17:50 лк ОАиП" << endl;
		break;
	case 3:
		cout << "Среда:" << endl;
		cout << "13:00 - 14:20 лр ОАиП" << endl;
		cout << "14:40 - 16:00 лк АЛОВС" << endl;
		cout << "16:30 - 17:50 Физическая культура" << endl;
		cout << "18:05 - 19:25 лк Алгебра/Геометрия" << endl;
		break;
	case 4:
		cout << "Четверг:" << endl;
		cout << "14:40 - 16:00 лр СЯП" << endl;
		cout << "16:30 - 17:50 лк ТРПО" << endl;
		cout << "18:05 - 19:25 лр ТРПО" << endl;
		break;
	case 5:
		cout << "Пятница:" << endl;
		cout << "14:40 - 16:00 пз Мат анализ" << endl;
		cout << "16:30 - 17:50 лк КЯРД" << endl;
		cout << "18:05 - 19:25 пз Иностранный" << endl;
		break;
	case 6:
		cout << "Суббота:" << endl;
		cout << "9:35 - 11:15 пз АЛОВС" << endl;
		cout << "11:25 - 12:50 лк Мат анализ" << endl;
		cout << "13:00 - 14:20 Физическая культура" << endl;
		cout << "14:40 - 16:00 лк КЯРД" << endl;
		break;
	default:
		cout << "В этот день мы не учимся" << endl;
	};
}
	

void calc()
{
	float a, b;
	char operation;
	float raz, sum, proiz, otnos;
	cout << endl << "Наша программа реализует простейший калькулятор." << endl;
	cout << "Вы можете использовать операции: сложение, вычитание, умножение, деление." << endl;
	cout << "Введите первую цифру: ";
	cin >> a;
	cout << "Введите вторую цифру: ";
	cin >> b;
	cout << "Введите операцию: ";
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
		cout << "Error" << endl;
	}
}