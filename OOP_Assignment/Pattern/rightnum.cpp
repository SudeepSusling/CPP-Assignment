#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= rows - i; ++k) {
            cout << k;
        }
        cout << endl;
    }

    return 0;
}
