#include <iostream>
#include <vector>
#include <algorithm>

std::string findThirdLargestString(const std::vector<std::string>& arr) {
    if (arr.size() < 3) {
        std::cerr << "Array should have at least three strings." << std::endl;
        return "";
    }

    std::vector<std::string> sortedArr = arr;
    std::sort(sortedArr.begin(), sortedArr.end(), std::greater<std::string>());

    return sortedArr[2]; // The third largest string
}

int main() {
    int n;
    std::cout << "Enter the number of strings in the array: ";
    std::cin >> n;

    if (n < 3) {
        std::cerr << "Array should have at least three strings." << std::endl;
        return 1;
    }

    std::vector<std::string> arr(n);
    std::cout << "Enter the strings:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::string thirdLargest = findThirdLargestString(arr);
    if (!thirdLargest.empty()) {
        std::cout << "The third largest string is: " << thirdLargest << std::endl;
    }

    return 0;
}
