#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    cin >> N;

    for (int i = 1; i <= 10; i++) {
        cout << N << " * " << i << " = " << N * i << endl;
    }


    return 0;
}