#include <iostream>
#include <climits>

void findSecondLowestAndHighest(int arr[], int n, int& secondLowest, int& secondHighest) {
    if (n < 2) {
        std::cerr << "Array should have at least two elements." << std::endl;
        return;
    }

    int lowest = INT_MAX, highest = INT_MIN;

    for (int i = 0; i < n; ++i) {
        if (arr[i] < lowest) {
            secondLowest = lowest;
            lowest = arr[i];
        } else if (arr[i] < secondLowest && arr[i] != lowest) {
            secondLowest = arr[i];
        }

        if (arr[i] > highest) {
            secondHighest = highest;
            highest = arr[i];
        } else if (arr[i] > secondHighest && arr[i] != highest) {
            secondHighest = arr[i];
        }
    }
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    if (n < 2) {
        std::cerr << "Array should have at least two elements." << std::endl;
        return 1;
    }

    int* arr = new int[n];
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int secondLowest = INT_MAX, secondHighest = INT_MIN;
    findSecondLowestAndHighest(arr, n, secondLowest, secondHighest);

    std::cout << "The second lowest element is: " << secondLowest << std::endl;
    std::cout << "The second highest element is: " << secondHighest << std::endl;

    delete[] arr;
    return 0;
}
