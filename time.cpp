#include <iostream>
#include <chrono> //äëÿ ðàáîòû ñ òàéìåðîì
#include <thread> //äëÿ ðàáîòû ñ ïîòîêîì
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
        this_thread::sleep_for(0.999s); //sleep_for - áëîêèðóåò âûçûâàþùèé ïîòîê
        system("cls"); //î÷èñòêà êîíñîëè
    }
    return 0;
}

