#include <iostream>
using namespace std;

bool isPowerOfThree(int n) {
    if (n < 1) {
        return false;
    }
    while (n % 3 == 0) {
        n /= 3;
    }
    return n == 1;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (isPowerOfThree(num)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
