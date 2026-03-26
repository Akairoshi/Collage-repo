#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;

    // Ваш код:

    if(number >= 1 && number <= 10 || number >= 10 && number <= 15)
        cout << "Число принадлежит одному из диапазонов";
    else
        cout << "Число не принадлежит указанным диапазонам";        


    return 0;
}