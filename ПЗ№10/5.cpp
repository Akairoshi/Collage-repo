#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    cin >> N;

    int count = 0;

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0)
            count++;
    }

    cout << count;
    return 0;
}