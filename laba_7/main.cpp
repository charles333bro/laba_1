#include <iostream>
#include <vector>
#include "utils.h"

using namespace std;

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

    int maxElement = findMaxElement(matrix);
    int minElement = findMinElement(matrix);

    if (maxElement + minElement == 0) {
        sortRowsWithEight(n, matrix);
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