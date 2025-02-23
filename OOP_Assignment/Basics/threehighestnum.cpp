#include <iostream>
#include <climits> // Include this header for INT_MIN
using namespace std;

int main() {
    int n, num;
    int highest1 = INT_MIN, highest2 = INT_MIN, highest3 = INT_MIN;

    // Ask the user for the number of elements in the list
    cout << "Enter the number of elements in the list: ";
    cin >> n;

    // Ensure there are at least 3 elements to process
    if (n < 3) {
        cout << "Please enter at least 3 elements." << endl;
        return 1;
    }

    // Input the elements
    cout << "Enter the elements of the list:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> num;

        // Update the three highest numbers
        if (num > highest1) {
            highest3 = highest2;
            highest2 = highest1;
            highest1 = num;
        } else if (num > highest2) {
            highest3 = highest2;
            highest2 = num;
        } else if (num > highest3) {
            highest3 = num;
        }
    }

    // Print the three highest numbers in descending order
    cout << "The three highest numbers in descending order are: ";
    cout << highest1 << " " << highest2 << " " << highest3 << endl;

    return 0;
}
