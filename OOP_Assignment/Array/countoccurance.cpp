#include <iostream>

int countOccurrences(int arr[], int n, int x) {
    int count = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] == x) {
            count++;
        }
    }

    return count;
}

int main() {
    int n, x;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    int* arr = new int[n];
    std::cout << "Enter the elements of the sorted array:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Enter the number to count occurrences for: ";
    std::cin >> x;

    int count = countOccurrences(arr, n, x);
    std::cout << "The number " << x << " occurs " << count << " times in the array." << std::endl;

    delete[] arr;
    return 0;
}
