#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        // Print leading spaces
        for (int j = i; j < rows; ++j) {
            cout << " ";
        }
        // Print numbers
        for (int k = 1; k <= i; ++k) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
