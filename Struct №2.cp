#include <iostream>

using namespace std;

struct Date {
    int hours;
    int minutes;
};

Date calculate(Date start, Date end) {
    int startTotalM = start.hours * 60 + start.minutes;
    int endTotalM = end.hours * 60 + end.minutes;

    int diffMinutes = (endTotalM - startTotalM + 24 * 60) % (24 * 60);
    int hours = diffMinutes / 60;
    int minutes = diffMinutes % 60;

    return { hours, minutes };
}

int main() {
    Date startTime, endTime;

    cout << "Введіть години для початку дії: ";
    cin >> startTime.hours >> startTime.minutes;
    cout << "Введіть години для завершення дії: ";
    cin >> endTime.hours >> endTime.minutes;

    Date duration = calculate(startTime, endTime);

    cout << "Тривалість дії: ";
    if (duration.hours < 10) cout << "0";
    cout << duration.hours << ":";
    if (duration.minutes < 10) cout << "0";
    cout << duration.minutes << endl;

    return 0;
}
