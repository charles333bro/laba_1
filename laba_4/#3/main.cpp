#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Введите значение переменной x (-1 или 1): ";
    cin >> x;

    if (x == -1)
        cout << "Negative number" << "\n";
    else if (x == 1)
        cout << "Positive number" << "\n";
    else
        cout << "Некорректное значение" << "\n";
    

    return 0;
}
