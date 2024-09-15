#include <iostream>
#include <limits>
#include <locale> // Добавьте эту строку

int main() {
    setlocale(LC_ALL, "Russian"); // Установите локаль на русский

    std::cout << "Тип: int\n";
    std::cout << "Размер: " << sizeof(int) << " байт\n";
    std::cout << "Минимум: " << std::numeric_limits<int>::min() << "\n";
    std::cout << "Максимум: " << std::numeric_limits<int>::max() << "\n";
    std::cout << "Пример арифметической операции 5 + 10 = " << (5 + 10) << "\n\n";

    std::cout << "Тип: unsigned int\n";
    std::cout << "Размер: " << sizeof(unsigned int) << " байт\n";
    std::cout << "Минимум: " << std::numeric_limits<unsigned int>::min() << "\n";
    std::cout << "Максимум: " << std::numeric_limits<unsigned int>::max() << "\n";
    std::cout << "Пример арифметической операции 5 + 10 = " << (5 + 10) << "\n\n";

    std::cout << "Тип: float\n";
    std::cout << "Размер: " << sizeof(float) << " байт\n";
    std::cout << "Минимум: " << std::numeric_limits<float>::min() << "\n";
    std::cout << "Максимум: " << std::numeric_limits<float>::max() << "\n";
    std::cout << "Пример арифметической операции 4.6 + 10.5 = " << (4.6 + 10.5) << "\n\n";

    std::cout << "Тип: double\n";
    std::cout << "Размер: " << sizeof(double) << " байт\n";
    std::cout << "Минимум: " << std::numeric_limits<double>::min() << "\n";
    std::cout << "Максимум: " << std::numeric_limits<double>::max() << "\n";
    std::cout << "Пример арифметической операции 4.6 + 10.5 = " << (4.6 + 10.5) << "\n\n";

    std::cout << "Тип: char\n";
    std::cout << "Размер: " << sizeof(char) << " байт\n";
    std::cout << "Минимум: " << static_cast<int>(std::numeric_limits<char>::min()) << "\n";
    std::cout << "Максимум: " << static_cast<int>(std::numeric_limits<char>::max()) << "\n";
    std::cout << "Пример арифметической операции 'a' + '1' = " << (static_cast<char>('a') + static_cast<char>('1')) << "\n";
    std::cout << "Пример арифметической операции 'a' + 1 = " << (static_cast<char>('a') + 1) << "\n";
    std::cout << "Пример арифметической операции '10' + '5' = " << (static_cast<char>('10') + static_cast<char>('5')) << "\n\n";

    std::cout << "Тип: bool\n";
    std::cout << "Размер: " << sizeof(bool) << " байт\n";
    std::cout << "Минимум: " << (false ? 1 : 0) << "\n";
    std::cout << "Максимум: " << (true ? 1 : 0) << "\n";
    std::cout << "Пример арифметической операции true + false = " << (true + false) << "\n";

    return 0;
}
