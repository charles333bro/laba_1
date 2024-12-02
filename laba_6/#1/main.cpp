#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Введите количество чисел в последовательности (n <= 10000): ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Введите натуральные числа: ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    bool hasPrime = false;
    for (int num : numbers) {
        if (isPrime(num)) {
            hasPrime = true;
            break;
        }
    }

    if (hasPrime) {
        sort(numbers.begin(), numbers.end());
        cout << "Упорядоченная последовательность: ";
        for (int num : numbers) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "Простые числа в последовательности не найдены." << endl;
    }

    return 0;
}