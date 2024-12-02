#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool containsDigitEight(int num) {
    while (num != 0) {
        if (num % 10 == 8) {
            return true;
        }
        num /= 10;
    }
    return false;
}

int main() {
    int n;
    cout << "Введите размер матрицы (n <= 100): ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Введите элементы матрицы: " << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    int maxElement = matrix[0][0];
    int minElement = matrix[0][0];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
            if (matrix[i][j] < minElement) {
                minElement = matrix[i][j];
            }
        }
    }

    if (maxElement + minElement == 0) {
        for (int i = 0; i < n; ++i) {
            bool hasEight = false;
            for (int j = 0; j < n; ++j) {
                if (containsDigitEight(matrix[i][j])) {
                    hasEight = true;
                    break;
                }
            }
            if (hasEight) {
                sort(matrix[i].begin(), matrix[i].end());
            }
        }
    }

    cout << "Обновленная матрица: " << endl;
    for (const auto &row : matrix) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}