#include <iostream>
using namespace std;

int main() {
    int grade;
    cin >> grade;

    switch (grade) {
        case 5:
            cout << "Отлично";
            break;
        case 4:
            cout << "Хорошо";
            break;
        case 3:
            cout << "Удовлетворительно";
            break;
        case 1:
        case 2:
            cout << "Плохо";
            break;
        default:
            cout << "Ошибка";
    }

    return 0;
}