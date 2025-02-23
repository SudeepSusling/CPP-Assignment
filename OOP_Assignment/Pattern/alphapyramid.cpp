#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input the number of Letters (less than 26) in the Pyramid: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        for (int j = rows; j > i; --j) {
            cout << "  ";
        }
        for (int j = 0; j < i; ++j) {
            cout << (char)('A' + j) << " ";
        }
        for (int j = i - 2; j >= 0; --j) {
            cout << (char)('A' + j) << " ";
        }
        cout << endl;
    }

    return 0;
}
