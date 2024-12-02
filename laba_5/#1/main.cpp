#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    std::cout << "Введите количество чисел в последовательности: ";
    std::cin >> n;

    std::vector<int> numbers(n);
    std::cout << "Введите числа: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    long long product = 1;
    int maxNumber = INT_MIN;
    int maxIndex = -1;
    bool found = false;

    for (int i = 0; i < n; ++i) {
        if (numbers[i] % 10 == 2) {
            product *= numbers[i];
            found = true;
            if (numbers[i] > maxNumber) {
                maxNumber = numbers[i];
                maxIndex = i;
            }
        }
    }

    if (found) {
        std::cout << "Произведение чисел, оканчивающихся на 2: " << product << std::endl;
        std::cout << "Наибольшее число, оканчивающееся на 2: " << maxNumber << std::endl;
        std::cout << "Номер этого числа в последовательности: " << maxIndex + 1 << std::endl;
    } else {
        std::cout << "Числа, оканчивающиеся на 2, не найдены." << std::endl;
    }

    return 0;
}