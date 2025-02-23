#include <iostream>
#include <cmath> // For sqrt function
using namespace std;

int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
    } else {
        double sqrtResult = sqrt(n);
        cout << "Square root of " << n << " = " << sqrtResult << endl;
    }

    return 0;
}
