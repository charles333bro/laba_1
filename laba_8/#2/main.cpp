#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

bool isPalindrome(const string &word) {
    int len = word.length();
    for (int i = 0; i < len / 2; ++i) {
        if (tolower(word[i]) != tolower(word[len - 1 - i])) {
            return false;
        }
    }
    return true;
}

int countVowels(const string &word) {
    int count = 0;
    for (char c : word) {
        if (string("aeiouAEIOU").find(c) != string::npos) {
            count++;
        }
    }
    return count;
}

string processWord(const string &word) {
    string result;
    for (char c : word) {
        if (string("aeiouAEIOU").find(c) == string::npos) {
            result += c;
            result += c;
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Введите строку с английским текстом: ";
    getline(cin, input);

    istringstream stream(input);
    string word;
    vector<string> words;
    bool hasPalindrome = false;

    while (stream >> word) {
        if (word.length() > 2 && isPalindrome(word)) {
            hasPalindrome = true;
            words.push_back(word);
        }
    }

    if (hasPalindrome) {
        for (const string &w : words) {
            cout << w << " ";
        }
        cout << endl;
    } else {
        vector<string> processedWords;

        istringstream stream2(input);
        while (stream2 >> word) {
            processedWords.push_back(processWord(word));
        }

        sort(processedWords.begin(), processedWords.end());

        for (const string &w : processedWords) {
            cout << w << " ";
        }
        cout << endl;
    }

    return 0;
}