#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

int countRepeatedLetters(const std::string& word) {
    int count[26] = {0}; // Array to count each letter's frequency
    int repeatedCount = 0;

    for (int i = 0; i < word.length(); ++i) {
        char c = word[i];
        if (std::isalpha(c)) {
            count[std::tolower(c) - 'a']++;
        }
    }

    for (int i = 0; i < 26; ++i) {
        if (count[i] > 1) {
            repeatedCount += count[i] - 1;
        }
    }

    return repeatedCount;
}

std::string findWordWithMaxRepeatedLetters(const std::string& input) {
    std::istringstream stream(input);
    std::string word, maxWord;
    int maxRepeatCount = 0;

    while (stream >> word) {
        int currentRepeatCount = countRepeatedLetters(word);
        if (currentRepeatCount > maxRepeatCount) {
            maxRepeatCount = currentRepeatCount;
            maxWord = word;
        }
    }

    return maxWord;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::string result = findWordWithMaxRepeatedLetters(input);
    std::cout << "Word which has the highest number of repeated letters is \"" << result << "\"" << std::endl;

    return 0;
}
