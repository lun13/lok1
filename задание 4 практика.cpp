﻿#include <iostream> //библиотека

using namespace std;

int main()//точка входа
{
    setlocale(0, "");

    char ch;
    short int a, b, itog;
    cout << "Введите числа" << endl;//вводим первое число
    cin >> a;
    cout << "Второе число" << endl;//вводим второе число
    cin >> b;
    cout << "Теперь результат " << endl;//вводим результат
    cin >> itog;
    if (itog == a * b) {
        cout << "красавчик всё верно ";//программа проверяет и если ответы сходятся выдаёт это
    }
    else cout << "сори бро но Правильно будет >> " << a * b;//если не сходится при проверки выдаёт это 
    return 0;

}