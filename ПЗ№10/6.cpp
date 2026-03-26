#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    cin >> N;

    int count = 0;

    long long fact = 1;

    for (int i = 1; i <= N; i++) {
        fact *= i;
    }

    cout << fact;

    return 0;
}