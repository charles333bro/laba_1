#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <set>

using namespace std;

string processWord(const string &word) {
    set<char> uniqueLetters;
    for (char c : word) {
        if (isalpha(c)) {
            uniqueLetters.insert(tolower(c));
        }
    }

    if (uniqueLetters.size() > 7) {
        string result = word + " (";
        for (char letter : uniqueLetters) {
            result += letter;
            result += ' ';
        }
        result.back() = ')';
        return result;
    }
    return word;
}

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if (!inputFile.is_open() || !outputFile.is_open()) {
        cerr << "Не удалось открыть файл." << endl;
        return 1;
    }

    string line;
    while (getline(inputFile, line)) {
        istringstream stream(line);
        string word;
        string processedLine;

        while (stream >> word) {
            string processedWord = processWord(word);
            processedLine += processedWord + " ";
        }

        outputFile << processedLine << endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}