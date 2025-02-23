#include <iostream>
#include <unordered_set>

void findTwoRepeating(int arr[], int n) {
    std::unordered_set<int> seen;
    std::cout << "The repeating elements are: ";
    int count = 0;

    for (int i = 0; i < n; ++i) {
        if (seen.find(arr[i]) != seen.end()) {
            std::cout << arr[i] << " ";
            count++;
            if (count == 2) {
                break;
            }
        } else {
            seen.insert(arr[i]);
        }
    }
    if (count == 0) {
        std::cout << "0";
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    int* arr = new int[n];
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    findTwoRepeating(arr, n);

    delete[] arr;
    return 0;
}
