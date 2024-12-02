#include <iostream>
#include <vector>
using namespace std;
int main() {
    long long N;
    cout << "Введите натуральное число N (N < 10^9): ";
    cin >> N;

    vector<int> count(10, 0);

    while (N > 0) {
        int digit = N % 10;
        count[digit]++;
        N /= 10;
    }

    int maxCount = 0;
    int mostFrequentDigit = -1;

    for (int i = 0; i < 10; ++i) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }

    cout << "Наиболее часто встречающаяся цифра: " << mostFrequentDigit << std::endl;

    return 0;
}