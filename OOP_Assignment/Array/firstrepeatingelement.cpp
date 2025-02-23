#include <iostream>
#include <unordered_set>

int findFirstRepeating(int arr[], int n) {
    std::unordered_set<int> seen;
    
    for (int i = 0; i < n; ++i) {
        if (seen.find(arr[i]) != seen.end()) {
            return arr[i];
        }
        seen.insert(arr[i]);
    }
    return -1; // Indicate no repeating element found
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

    int firstRepeating = findFirstRepeating(arr, n);
    if (firstRepeating == -1) {
        std::cout << "No repeating elements found." << std::endl;
    } else {
        std::cout << "The first repeating element is: " << firstRepeating << std::endl;
    }

    delete[] arr;
    return 0;
}
