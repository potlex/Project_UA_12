#include <iostream>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
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