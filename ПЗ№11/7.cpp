#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    int i = 2;
    bool isPrime = true;

    while (i < n) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
        i++;
    }

    if (n <= 1)
        cout << "Не простое";
    else if (isPrime)
        cout << "Простое";
    else
        cout << "Не простое";


    return 0;
}