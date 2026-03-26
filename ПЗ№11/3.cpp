#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    // Ваш код:
    int x;
    int sum = 0;

    cin >> x;

    while (x != 0) {
        sum += x;
        cin >> x;
    }

    cout << sum;

    return 0;
}