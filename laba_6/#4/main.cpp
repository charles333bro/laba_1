#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int productOfDigits(int num) {
    int product = 1;
    while (num > 0) {
        product *= num % 10;
        num /= 10;
    }
    return product;
}

bool startsAndEndsWithOne(int num) {
    return (num % 10 == 1) && (num / 10 > 0 && (num / (int)pow(10, (int)log10(num))) == 1);
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

    vector<int> result;
    unordered_set<int> uniqueElements;

    for (int i = 0; i < n; ++i) {
        if (productOfDigits(numbers[i]) != 180) {
            if (uniqueElements.find(numbers[i]) == uniqueElements.end()) {
                result.push_back(numbers[i]);
                uniqueElements.insert(numbers[i]);
            }
            if (startsAndEndsWithOne(numbers[i])) {
                result.push_back(numbers[i]);
            }
        }
    }

    cout << "Полученная последовательность: ";
    for (const int &num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}