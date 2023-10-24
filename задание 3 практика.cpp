#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    char station;
    cout << "Введите букву станции:";
    cin >> station;
    switch (station) {
    case'a':
        cout << "Время в пути до станции" << station << "Составляет 5 минут." << endl;
        break;
    case'b':
        cout << "Время в пути до станции" << station << "Составляет 10 минут." << endl;
        break;
    case'c':
        cout << "Время в пути до станции" << station << "Составляет 15 минут." << endl;
        break;
    case'd':
        cout << "Время в пути до станции" << station << "Составляет 20 минут." << endl;
        break;
    case'e':
        cout << "Время в пути до станции" << station << "Составляет 25 минут." << endl;
        break;
    case'A':
        cout << "Время в пути до станции" << "a" << "Составляет 5 минут." << endl;
        break;
    case'B':
        cout << "Время в пути до станции" << "b" << "Составляет 10 минут." << endl;
        break;
    case'C':
        cout << "Время в пути до станции" << "c" << "Составляет 15 минут." << endl;
        break;
    case'D':
        cout << "Время в пути до станции" << "d" << "Составляет 20 минут." << endl;
        break;
    case'E':
        cout << "Время в пути до станции" << "e" << "Составляет 25 минут." << endl;
        break;
    default:
        cout << "Ошибка,нет информации по этой станции" << endl;
        break;
    }
}

