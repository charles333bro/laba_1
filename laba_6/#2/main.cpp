#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int productOfDigits(int num) {
    int product = 1;
    while (num > 0) {
        product *= num % 10;
        num /= 10;
    }
    return product;
}

int firstDigit(int num) {
    while (num >= 10) {
        num /= 10;
    }
    return num;
}

struct Number {
    int value;
    
    int product() const {
        return productOfDigits(value);
    }

    int first() const {
        return firstDigit(value);
    }
};

bool compare(const Number &a, const Number &b) {
    if (a.product() != b.product()) {
        return a.product() < b.product();
    }
    if (a.first() != b.first()) {
        return a.first() < b.first();
    }
    return a.value < b.value;
}

int main() {
    int n;
    cout << "Введите количество чисел в последовательности (n <= 1000): ";
    cin >> n;

    vector<Number> numbers(n);
    cout << "Введите натуральные числа: ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i].value;
    }

    sort(numbers.begin(), numbers.end(), compare);

    cout << "Упорядоченная последовательность: ";
    for (const auto &num : numbers) {
        cout << num.value << " ";
    }
    cout << endl;

    return 0;
}