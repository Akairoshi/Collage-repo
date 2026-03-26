#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    cin >> N;

    // Ваш код:
    for (int i = N; i >= 1; i--) {
        cout << i << " ";
    }

    return 0;
}