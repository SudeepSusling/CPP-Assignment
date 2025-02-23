#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> capitalizeFirstCharacter(std::vector<std::string>& vec) {
    for (size_t i = 0; i < vec.size(); ++i) {
        if (!vec[i].empty()) {
            vec[i][0] = std::toupper(vec[i][0]);
        }
    }
    return vec;
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

    std::vector<std::string> result = capitalizeFirstCharacter(vec);

    std::cout << "Capitalize the first character of each vector element:" << std::endl;
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
