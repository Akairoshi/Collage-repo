#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    // Ваш код:
    int i = 1;

    while (i <= n) {
        cout << i << " ";
        i++;
    }

    return 0;
}