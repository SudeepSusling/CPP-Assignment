#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        // Print leading spaces
        for (int j = 0; j < rows - i; ++j) {
            cout << " ";
        }
        // Print numbers in reverse order
        for (int k = i; k >= 1; --k) {
            cout << k;
        }
        cout << endl;
    }

    return 0;
}
