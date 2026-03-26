#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0)
            cout << i << " ";
    }


    return 0;
}