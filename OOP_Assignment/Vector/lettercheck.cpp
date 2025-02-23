#include <iostream>
#include <string>
#include <unordered_set>

bool checkIfAllLettersAppear(const std::string& first, const std::string& second) {
    std::unordered_set<char> lettersInFirst(first.begin(), first.end());

    for (size_t i = 0; i < second.size(); ++i) {
        if (lettersInFirst.find(second[i]) == lettersInFirst.end()) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string first, second;
    std::cout << "Enter the first string: ";
    std::cin >> first;
    std::cout << "Enter the second string: ";
    std::cin >> second;

    bool result = checkIfAllLettersAppear(first, second);
    std::cout << "The second string appear in the first string as well: " << (result ? "True" : "False") << std::endl;

    return 0;
}
