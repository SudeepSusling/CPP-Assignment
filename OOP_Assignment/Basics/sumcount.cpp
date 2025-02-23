#include <iostream>

using namespace std;

int countDigits(int num) {
    if (num == 0) {
        return 1;
    }
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int num1, num2;
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    int sum = num1 + num2;
    int digitCount = countDigits(sum);

    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;
    cout << "The number of digits in the sum is: " << digitCount << endl;

    return 0;
}
