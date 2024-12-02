#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Введите целое число: ";
    cin >> number;

    // Указатель на число
    unsigned char *bytePointer = reinterpret_cast<unsigned char*>(&number);

    cout << "Содержимое каждого байта числа " << number << " в шестнадцатичном формате:" << endl;
    for (size_t i = 0; i < sizeof(int); ++i) {
        cout << "Байт " << i << ": " << hex << static_cast<int>(bytePointer[i]) << endl;
    }

    return 0;
}
