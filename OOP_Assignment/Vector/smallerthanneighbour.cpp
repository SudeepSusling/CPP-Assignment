#include <iostream>
#include <vector>

std::vector<int> findElementsSmallerThanNeighbours(const std::vector<int>& arr) {
    std::vector<int> result;

    for (size_t i = 1; i < arr.size() - 1; ++i) {
        if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]) {
            result.push_back(arr[i]);
        }
    }

    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the vector: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Enter the elements of the vector:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::vector<int> result = findElementsSmallerThanNeighbours(arr);

    std::cout << "Vector elements that are smaller than its adjacent neighbours:" << std::endl;
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << result[i] << std::endl;
    }

    return 0;
}
