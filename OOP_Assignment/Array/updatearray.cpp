#include <iostream>

void updateArray(int arr[], int n) {
    if (n <= 1) {
        std::cerr << "Array should have at least two elements." << std::endl;
        return;
    }

    int prev = arr[0];
    for (int i = 0; i < n; ++i) {
        int next = (i == n - 1) ? 1 : arr[i + 1];
        int current = arr[i];
        arr[i] = (i == 0) ? arr[i] * next : prev * next;
        prev = current;
    }
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    if (n < 1) {
        std::cerr << "Invalid number of elements." << std::endl;
        return 1;
    }

    int* arr = new int[n];
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    updateArray(arr, n);

    std::cout << "Updated array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;
    return 0;
}
