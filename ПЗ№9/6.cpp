#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    switch (n) {
        case 0:
            cout << "Ноль";
            break;
        case 1:
            cout << "Один";
            break;
        case 2:
            cout << "Два";
            break;
        case 3:
            cout << "Три";
            break;
        case 4:
            cout << "Четыре";
            break;
        case 5:
            cout << "Пять";
            break;
        case 6:
            cout << "Шесть";
            break;
        case 7:
            cout << "Семь";
            break;
        case 8:
            cout << "Восемь";
            break;
        case 9:
            cout << "Девять";
            break;
        default:
            cout << "Ошибка";
    }

    return 0;
}