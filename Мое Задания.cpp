#include <iostream>
using namespace std;
void main() {
    setlocale(LC_CTYPE, "russian");
    int i, m;
    cout << "Введите число от 1 до 10:" << endl;
    cin >> i;
    switch(i){
    case 1:cout << "Единица" << endl;
        break;
    case 2:cout << "Двойка" << endl;
        break;
    case 3:cout << "Тройка" << endl;
        break;
    case 4:cout << "Четверка" << endl;
        break;
    case 5:cout << "Пятерка" << endl;
        break;
    case 6:cout << "Шестерка" << endl;
        break;
    case 7:cout << "Семерка" << endl;
        break;
    case 8:cout << "Восьмерка" << endl;
        break;
    case 9:cout << "Девятка" << endl;
        break;
    case 10:cout << "Десятка" << endl;
        break;
      case 10:cout << "Десятка" << endl;
        break;       
    }
    do {
        cout << "Хотете продолжть? 1-да;0-нет ";
        cin >> m;
        if (1 == m) {
            cout << "Введите номер действия ";
            cin >> i;
            switch (i) {
            case 1:cout << "Единица" << endl;
                break;
            case 2:cout << "Двойка" << endl;
                break;
            case 3:cout << "Тройка" << endl;
                break;
            case 4:cout << "Четверка" << endl;
                break;
            case 5:cout << "Пятерка" << endl;
                break;
            case 6:cout << "Шестерка" << endl;
                break;
            case 7:cout << "Семерка" << endl;
                break;
            case 8:cout << "Восьмерка" << endl;
                break;
            case 9:cout << "Девятка" << endl;
                break;
            case 10:cout << "Десятка" << endl;
                break;
            }
        }
        if (m == 0)
            break;
    }
    while (i > 0);
}
