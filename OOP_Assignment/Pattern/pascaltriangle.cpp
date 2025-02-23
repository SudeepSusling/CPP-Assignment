#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;

    int triangle[rows][rows];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (j == 0 || j == i) {
                triangle[i][j] = 1;
            } else {
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
