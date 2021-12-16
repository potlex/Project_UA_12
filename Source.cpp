#include <iostream>
#include <chrono> //��� ������ � ��������
#include <thread> //��� ������ � �������
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
	cout << "���� ������� ������������ ��� 3 ������������ �� �����" << endl
		<< "  1-� ������������ - ���������� �����������" << endl
		<< "  2-� ������������ - ���������� ������� �� ��������� ����" << endl
		<< "  3-� ������������ - ������" << endl
		<< "������� ����� �������� ������������: ";
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
				system("cls"); //������� �������
				menu();
			}
			this_thread::sleep_for(0.999s); //sleep_for - ��������� ���������� �����
			system("cls"); //������� �������
		}
	}

void raspis()
{
	SetColor(13, 0);
	short number;
	cout << "���� ��������� ��������� ����� ���������� �� ��������� ��� ������." << endl;
	cout << "������� ����� ��� ������(1 - 6): ";
	cin >> number;

	switch (number)
	{
	case 1:
		cout << "�����������:" << endl;
		cout << "14:40 - 16:00 ��� ������ / ���" << endl;
		cout << "16:30 - 17:50 �� ��� ������" << endl;
		cout << "18:05 - 19:25 �� �������/���������" << endl;
		break;
	case 2:
		cout << "�������:" << endl;
		cout << "14:40 - 16:00 �� ����" << endl;
		cout << "16:30 - 17:50 �� ����" << endl;
		break;
	case 3:
		cout << "�����:" << endl;
		cout << "13:00 - 14:20 �� ����" << endl;
		cout << "14:40 - 16:00 �� �����" << endl;
		cout << "16:30 - 17:50 ���������� ��������" << endl;
		cout << "18:05 - 19:25 �� �������/���������" << endl;
		break;
	case 4:
		cout << "�������:" << endl;
		cout << "14:40 - 16:00 �� ���" << endl;
		cout << "16:30 - 17:50 �� ����" << endl;
		cout << "18:05 - 19:25 �� ����" << endl;
		break;
	case 5:
		cout << "�������:" << endl;
		cout << "14:40 - 16:00 �� ��� ������" << endl;
		cout << "16:30 - 17:50 �� ����" << endl;
		cout << "18:05 - 19:25 �� �����������" << endl;
		break;
	case 6:
		cout << "�������:" << endl;
		cout << "9:35 - 11:15 �� �����" << endl;
		cout << "11:25 - 12:50 �� ��� ������" << endl;
		cout << "13:00 - 14:20 ���������� ��������" << endl;
		cout << "14:40 - 16:00 �� ����" << endl;
		break;
	default:
		cout << "� ���� ���� �� �� ������" << endl;
	};
}
	

void calc()
{
	float a, b;
	char operation;
	float raz, sum, proiz, otnos;
	cout << endl << "���� ��������� ��������� ���������� �����������." << endl;
	cout << "�� ������ ������������ ��������: ��������, ���������, ���������, �������." << endl;
	cout << "������� ������ �����: ";
	cin >> a;
	cout << "������� ������ �����: ";
	cin >> b;
	cout << "������� ��������: ";
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