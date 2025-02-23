#include <iostream>
#include <vector>
#include <algorithm>

void findKLargestElements(int arr[], int n, int k) {
    std::sort(arr, arr + n, std::greater<int>());

    std::cout << "The " << k << " largest elements of the array are: ";
    for (int i = 0; i < k; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n, k;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Enter the value of k: ";
    std::cin >> k;

    if (k > n) {
        std::cerr << "k should be less than or equal to the number of elements in the array." << std::endl;
        return 1;
    }

    findKLargestElements(arr, n, k);

    return 0;
}
