#include <iostream>
using namespace std;

int main() {
    char op;
    double a, b;

    cin >> op >> a >> b;

    switch (op) {
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            if (b == 0)
                cout << "Деление на ноль";
            else
                cout << a / b;
            break;
        default:
            cout << "Ошибка";
    }

    return 0;
}