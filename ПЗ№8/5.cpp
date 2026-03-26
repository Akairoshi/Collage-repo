#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;

    // Ваш код:

    if(number >= 1 && number <= 10)
        cout << "Число принадлежит диапазону";
    else
        cout << "Число не принадлежит диапазону";        

    return 0;
}