#include <iostream>
#include <sstream>
#include <string>

std::string findLargestWord(const std::string& input) {
    std::istringstream stream(input);
    std::string word, largestWord;

    while (stream >> word) {
        if (word.length() > largestWord.length()) {
            largestWord = word;
        }
    }
    return largestWord;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::string largestWord = findLargestWord(input);
    std::cout << "The largest word is: " << largestWord << std::endl;

    return 0;
}
