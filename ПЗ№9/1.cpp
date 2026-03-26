#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    switch (n) {
        case 1:
            cout << "Один";
            break;
        case 2:
            cout << "Два";
            break;
        case 3:
            cout << "Три";
            break;
        default:
            cout << "Ошибка";
    }

    return 0;
}