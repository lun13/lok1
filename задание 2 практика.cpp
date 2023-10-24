#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int day;
    cout << "Введите номер дня недели:"; cin >> day;
    if ((day == 1) || (day == 5))
        cout << "В этот день 3 пары и Работа." << endl;
    else if ((day == 2) || (day == 3) || (day == 4))
        cout << "В этот день 4 пары и компьютерные игры." << endl;
    else if ((day == 6) || (day == 7))
        cout << "Отдых и компьютерные игры." << endl;

    return 0;
}