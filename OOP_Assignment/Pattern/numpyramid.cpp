#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; ++i) {
        // Print leading spaces
        for (int j = 0; j < i; ++j) {
            cout << " ";
        }
        // Print ascending numbers
        for (int j = 1; j <= rows - i; ++j) {
            cout << j;
        }
        // Print descending numbers
        for (int j = rows - i - 1; j >= 1; --j) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
