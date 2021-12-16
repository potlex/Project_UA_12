#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	float a, b;
	char operation;
	float raz, sum, proiz, otnos;
	cout << endl << "Íàøà ïðîãðàììà ðåàëèçóåò ïðîñòåéøèé êàëüêóëÿòîð." << endl;
	cout << "Âû ìîæåòå èñïîëüçîâàòü îïåðàöèè: ñëîæåíèå, âû÷èòàíèå, óìíîæåíèå, äåëåíèå." << endl;
	cout << "Ââåäèòå ïåðâóþ öèôðó: ";
	cin >> a;
	cout << "Ââåäèòå âòîðóþ öèôðó: ";
	cin >> b;
	cout << "Ââåäèòå îïåðàöèþ: ";
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
