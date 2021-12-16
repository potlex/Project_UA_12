#include <iostream>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
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