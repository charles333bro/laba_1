#ifndef UTILS_H
#define UTILS_H
#include <iostream>
#include <vector>

bool containsDigitEight(int num);
void sortRowsWithEight(int n, std::vector<std::vector<int>>& matrix);
int findMaxElement(const std::vector<std::vector<int>>& matrix);
int findMinElement(const std::vector<std::vector<int>>& matrix);

#endif // UTILS_H