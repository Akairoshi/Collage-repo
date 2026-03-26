#include <iostream>

using namespace std;

int main() {
    int a, b; // Объявляем две переменные
    cin >> a >> b; // Считываем два числа сразу

    // Ваш код:
    if(a > b)
        cout << "Большее число: " << a;
    else if(a < b)
        cout << "Большее число: " << b;
    else
        cout << "Числа равны";

    return 0;
}