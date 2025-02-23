#include <iostream>

void findLargestThree(int arr[], int n) {
    int first = arr[0];
    int second = arr[0];
    int third = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third) {
            third = arr[i];
        }
    }

    std::cout << "The largest three elements are: " << first << ", " << second << " and " << third << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    if (n < 3) {
        std::cerr << "Array should have at least three elements." << std::endl;
        return 1;
    }

    int arr[n];
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    findLargestThree(arr, n);

    return 0;
}
