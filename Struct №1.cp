#include <iostream>

using namespace std;

struct Date {
    int hours;
    int minutes;
};

Date calculate(Date start, int mPassed) {
    int totalM = start.hours * 60 + start.minutes + mPassed;
    int hours = totalM / 60 % 24;
    int minutes = totalM % 60;

    return { hours, minutes };
}

int main() {
    Date startTime;
    int minutes;

    cout << "Введіть години: ";
    cin >> startTime.hours;
    cout << "Введіть хвилини: ";
    cin >> startTime.minutes;
    cout << "Введіть кількість хвилин, що пройшли: ";
    cin >> minutes;

    Date result = calculate(startTime, minutes);

    cout << "Час після " << minutes << " хвилин: ";
    if (result.hours < 10) cout << "0";
    cout << result.hours << ":";
    if (result.minutes < 10) cout << "0";
    cout << result.minutes << endl;

    return 0;
}
