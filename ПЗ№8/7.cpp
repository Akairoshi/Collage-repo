#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;

    // Ваш код:
    if(number > 0 && number < 100 && number % 2 == 0)
        cout << "Подходит";
    else
        cout << "Не подходит";        


    return 0;
}