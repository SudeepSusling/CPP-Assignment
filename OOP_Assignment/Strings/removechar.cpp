#include <iostream>
#include <string>

std::string removeCharacter(const std::string& str, char ch) {
    std::string result;
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] != ch) {
            result += str[i];
        }
    }
    return result;
}

int main() {
    std::string str;
    char ch;
    
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Enter the character to remove: ";
    std::cin >> ch;

    std::string updatedStr = removeCharacter(str, ch);
    std::cout << "Updated string: " << updatedStr << std::endl;

    return 0;
}
