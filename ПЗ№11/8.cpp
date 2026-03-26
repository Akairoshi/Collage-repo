#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int i = 1;

    while (i <= N) {
        int j = 1;

        while (j <= N) {
            cout << i * j << " ";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}