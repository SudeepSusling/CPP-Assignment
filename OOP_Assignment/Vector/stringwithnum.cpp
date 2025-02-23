#include <iostream>
#include <vector>
#include <string>
#include <cctype>

std::vector<std::string> findStringsContainingNumbers(const std::vector<std::string>& vec) {
    std::vector<std::string> result;

    for (size_t i = 0; i < vec.size(); ++i) {
        for (size_t j = 0; j < vec[i].size(); ++j) {
            if (std::isdigit(vec[i][j])) {
                result.push_back(vec[i]);
                break;
            }
        }
    }

    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the vector: ";
    std::cin >> n;

    std::vector<std::string> vec(n);
    std::cout << "Enter the elements of the vector:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> vec[i];
    }

    std::vector<std::string> result = findStringsContainingNumbers(vec);

    std::cout << "Strings that contain a number(s) from the vector:" << std::endl;
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }
    if (result.empty()) {
        std::cout << "None";
    }
    std::cout << std::endl;

    return 0;
}
