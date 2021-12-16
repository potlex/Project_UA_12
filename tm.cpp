#include <iostream>
#include <chrono> //для работы с таймером
#include <thread> //для работы с потоком
using namespace std;
using namespace std::chrono;

int main() {
    int hours = 0, minutes = 0, seconds = 0;
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
        this_thread::sleep_for(0.999s); //sleep_for - блокирует вызывающий поток
        system("cls"); //очистка консоли
    }
    return 0;
}

