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
void calender()
{
	int input_year();
int intput_month();
int today();
int newyear();
void output();


int calc_week(int year, int month, int day);
int calc_leap_year(int year);
void calc_core();

int input_year()
{
	int year;
	cout << "Введите год:";
	cin >> year;
	return year;
}

int input_month()
{
	int month;
	cout << "Введите месяц:";
	cin >> month;
	return month;
}

int newyear()
{
	int a=365, c =366, b =0;
	char buffer[80];
	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	const char *ng =  "%j" ;
	strftime(buffer, 80, ng, timeinfo);
	b = a - atoi(buffer);
	cout << "Новый год через: " << b << endl;
	return 0;
}
int today()
{
	//time_t now = time(0);
	//char* dt = ctime(&now);
	//cout << "Текущая дата и время" << dt << endl;
	char buffer[80];
	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);
	const char* format = "%A, %B %d, %Y %I:%M:%S";
	strftime(buffer, 80, format, timeinfo);
	cout << "Сегодня: " << buffer << endl;
	return 0;
}
void output(int year, int month, int week, int is_leap_year) {
	 const char* month_name[12] = { "Январь","Февраль","Март","Апрель","Май","Июнь","Июль","Август","Сентябрь","Октябрь","Ноябарь","Декабрь" };
	const char* week_name[7] = { " Пн "," Вт ","Ср ","Чт ","Пт ","Сб ","Вс " };
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	// В високосном году установите февраль на 29 дней
	if (is_leap_year) {
		days[1] = 29;
	}
	cout << endl;
	// Отображение года и месяца
	cout << "    " << month_name[month] << "  " << year << endl;
	// Отображение названия недели
	int i = 0;
	for (i = 0; i < 7; i++) {
		cout << week_name[i] << " ";
	}
	cout << endl;
	// Отображение пустого поля перед 1-м числом каждого месяца
	for (i = 0; i < week % 7; i++) {
		cout << "    ";
	}
	// Отображение даты
	for (i = 1; i <= days[month]; i++) {
		if (i < 10) cout << "  " << i << " ";
		else cout << " " << i << " ";
		if ((i + week) % 7 == 0) {
			cout << endl;
		}
	}
	cout << endl;
}

// Формула Целера  
int calc_week(int year, int month, int day)
{
	if (month <= 2)
	{
		month += 12;
		year--;
	}
	int century = year / 100;
	year %= 100;
	int days = (year + year / 4 + century / 4 -
		2 * century + 26 * (month + 1) / 10 + day - 2) % 7;
	while (days < 0)
	{
		days += 7;
	}
	return days;
}

// Рассчитываем, високосный ли год
int calc_leap_year(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return 1;
	}
	return 0;
}

void calc_core()
{
	for (int i = 0;; i++)
	{
		if (i == 1) cout << "Введите 0 для выхода из календаря" << endl;
		int year = input_year();
		if (year == 0) break;
		if (year <= 1582)
		{
			cout << "Ошибка! Введите год после 1582" << endl;
			break;
		}
		int month = input_month();
		if (month <= 0 || month >= 13)
		{
			cout << "Ошибка! Введите правильный месяц (1-12)" << endl;
			break;
		}
		int is_leap_year = calc_leap_year(year);
		int week = calc_week(year, month, 1);
		month--; 
		output(year, month, week, is_leap_year);
		today();
		newyear();
	}
}

//Основная функция
int main()
{
	setlocale(LC_ALL, "ru");
	calc_core();
	return 0;
}
}
