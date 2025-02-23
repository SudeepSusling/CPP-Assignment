#include <iostream>

int findSmallestMissingElement(int arr[], int n) {
    int smallest = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    for (int i = 0; i < n; ++i) {
        if (arr[i] == smallest) {
            smallest++;
            i = -1;  // Reset the loop to check for the next smallest missing number from the start
        }
    }

    return smallest;
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    int* arr = new int[n];
    std::cout << "Enter the elements of the sorted array:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int missingElement = findSmallestMissingElement(arr, n);
    std::cout << "The smallest missing element is: " << missingElement << std::endl;

    delete[] arr;
    return 0;
}
