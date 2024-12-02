#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Введите номер ошибки: ";
    cin >> N;

    switch (N) {
        case 0:
            cout << "Все хорошо" << "\n";
            break;
        case 1:
            cout << "Ошибка чтения файла" << "\n";
            break;
        case 2:
            cout << "Ошибка записи файла" << "\n";
            break;
        case 3:
            cout << "Не все поля определены" << "\n";
            break;
        default:
            cout << "Неизвестный код ошибки" << "\n";
            break;
    }

    return 0;
}