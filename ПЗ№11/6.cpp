#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    // Ваш код:
    int count = 0;

    while (n != 0) {
        n /= 10;
        count++;
    }

    cout << count;

    return 0;
}