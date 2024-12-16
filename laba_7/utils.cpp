#include "utils.h"
#include <algorithm>
#include <iostream>
#include <vector>

bool containsDigitEight(int num) {
    while (num != 0) {
        if (num % 10 == 8) {
            return true;
        }
        num /= 10;
    }
    return false;
}

void sortRowsWithEight(int n, std::vector<std::vector<int>>& matrix) {
    for (int i = 0; i < n; ++i) {
        bool hasEight = false;
        for (int j = 0; j < n; ++j) {
            if (containsDigitEight(matrix[i][j])) {
                hasEight = true;
                break;
            }
        }
        if (hasEight) {
            std::sort(matrix[i].begin(), matrix[i].end());
        }
    }
}

int findMaxElement(const std::vector<std::vector<int>>& matrix) {
    int maxElement = matrix[0][0];
    for (const auto& row : matrix) {
        for (int val : row) {
            if (val > maxElement) {
                maxElement = val;
            }
        }
    }
    return maxElement;
}

int findMinElement(const std::vector<std::vector<int>>& matrix) {
    int minElement = matrix[0][0];
    for (const auto& row : matrix) {
        for (int val : row) {
            if (val < minElement) {
                minElement = val;
            }
        }
    }
    return minElement;
}