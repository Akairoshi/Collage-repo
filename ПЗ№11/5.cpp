#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    int i = 1;
    long long fact = 1;

    while (i <= n) {
        fact *= i;
        i++;
    }

    cout << fact;

    return 0;
}