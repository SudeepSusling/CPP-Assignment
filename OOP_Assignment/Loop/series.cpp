#include <iostream>
using namespace std;

int main() {
    int n, term = 1, sum = 0;
    cout << "Input number of terms: ";
    cin >> n;

    cout << "The series is: ";
    for (int i = 1; i <= n; ++i) {
        cout << term << " ";
        sum += term;
        term = term * 10 + 1;
    }

    cout << "\nThe sum of the series is: " << sum << endl;
    return 0;
}
