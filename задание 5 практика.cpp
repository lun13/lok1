#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int Pales = 0;
    cout << "Введите номер:";
    cin >> Pales;
    if (Pales == 1)
        cout << "Большой палец\n";
    else if (Pales == 2)
        cout << "Указательный палец\n";
    else if (Pales == 3)
        cout << "Средний палец\n";
    else if (Pales == 4)
        cout << "Безымянный палец\n";
    else if (Pales == 5)
        cout << "Мизинец\n";
    else
        cout << "Нет больше названий у 5 пальцев\n";
    return 0;

}

