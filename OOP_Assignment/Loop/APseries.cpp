#include <iostream>
using namespace std;

int main() {
    int start, n, diff, sum = 0;
    cout << "Input the starting number of the A.P. series: ";
    cin >> start;
    cout << "Input the number of items for the A.P. series: ";
    cin >> n;
    cout << "Input the common difference of A.P. series: ";
    cin >> diff;

    cout << "The Sum of the A.P. series are :\n";
    for (int i = 0; i < n; ++i) {
        int term = start + i * diff;
        sum += term;
        if (i != n - 1) {
            cout << term << " + ";
        } else {
            cout << term << " = ";
        }
    }
    cout << sum << endl;

    return 0;
}
