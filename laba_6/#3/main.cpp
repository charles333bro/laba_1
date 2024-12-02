#include <iostream>
#include <vector>
#include <limits>

using namespace std;


int main() {
    int n, m;
    cout << "Введите размеры матрицы (n, m <= 100): ";
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));
    cout << "Введите элементы матрицы: " << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    int minEvenCount = numeric_limits<int>::max();
    int rowIndex = -1;

    for (int i = 0; i < n; ++i) {
        int evenCount = 0;
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] % 2 == 0) {
                evenCount++;
            }
        }
        if (evenCount < minEvenCount) {
            minEvenCount = evenCount;
            rowIndex = i;
        }
    }

    if (rowIndex != -1) {
        for (int j = 0; j < m; ++j) {
            matrix[rowIndex][j] *= matrix[rowIndex][j];
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