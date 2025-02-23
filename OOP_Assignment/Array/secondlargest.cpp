#include <iostream>
#include <climits>

int findSecondLargest(int arr[], int n) {
    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; ++i) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    return second;
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    if (n < 2) {
        std::cerr << "Array should have at least two elements." << std::endl;
        return 1;
    }

    int arr[n];
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int secondLargest = findSecondLargest(arr, n);
    if (secondLargest == INT_MIN) {
        std::cout << "There is no second largest element." << std::endl;
    } else {
        std::cout << "The second largest element is: " << secondLargest << std::endl;
    }

    return 0;
}
