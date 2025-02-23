#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;

    int num = 1; // Start with 1
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << num % 2;
            num++;
        }
        cout << endl;
    }

    return 0;
}
