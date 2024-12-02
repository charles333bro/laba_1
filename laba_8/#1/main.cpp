#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    string inputFileName, outputFileName, startChar;
    int N;

    cout << "Введите имя входного файла: ";
    cin >> inputFileName;
    cout << "Введите имя выходного файла: ";
    cin >> outputFileName;
    cout << "Введите начальную букву: ";
    cin >> startChar;
    cout << "Введите количество слов (N <= 2000): ";
    cin >> N;

    ifstream inputFile(inputFileName);
    set<string> uniqueWords;
    string word;

    if (inputFile.is_open()) {
        while (inputFile >> word) {
            word.erase(remove_if(word.begin(), word.end(), [](char c) {
                return ispunct(c);
            }), word.end());

            if (!word.empty() && tolower(word[0]) == tolower(startChar[0])) {
                uniqueWords.insert(word);
            }
        }
        inputFile.close();
    } else {
        cerr << "Не удалось открыть файл." << endl;
        return 1;
    }

    vector<string> filteredWords(uniqueWords.begin(), uniqueWords.end());
    sort(filteredWords.begin(), filteredWords.end(), [](const string &a, const string &b) {
        return a.length() > b.length();
    });

    ofstream outputFile(outputFileName);
    if (outputFile.is_open()) {
        for (int i = 0; i < min(N, static_cast<int>(filteredWords.size())); ++i) {
            outputFile << filteredWords[i] << endl;
        }
        outputFile.close();
    } else {
        cerr << "Не удалось открыть выходной файл." << endl;
        return 1;
    }

    return 0;
}