#include <iostream>//библиотека
using namespace std;
int main()//точка входа 
{
    setlocale(LC_ALL, "rus"); //переводчик
    setlocale(0, "");
    int visitors, age, min_age=1000, mid_age=0, max_age=0;//переменные
    cout << "Сколько людей посетило спортзал: ";
    cin >> visitors;
    for (int i = 1; i <= visitors; i++) {//условие фор
        cout << "Введите возраст" << i << "посетителя: ";
        cin >> age;
        if (max_age < age) {//задаём максимальный возраст из введённых возрастов
            max_age = age;
        }
        if (min_age > age) {//задаём минимальный возраст из введённых возрастов 
            min_age = age;
        }
        mid_age += age;//средний возраст задаём тут но вычесляется в конце тут плюсуем

    }
    cout << "Максимальный возраст из всех посетителей = " << max_age << endl;
    cout << "Минимальный возраст из всех посетителей = " << min_age  << endl;
    cout << "Средний возраст возраст из всех посетителей = " << mid_age / visitors << endl;//вычисляем средний возраст тут делим 

}
