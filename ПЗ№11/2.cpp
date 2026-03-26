#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    int i = 1;
    int sum = 0;

    while (i <= n) {
        sum += i;
        i++;
    }

    cout << sum;


    return 0;
}