#include <iostream>

using namespace std;

int calculateProductOfDigits(int num) {
    int product = 1;

    while (num != 0) {
        product *= num % 10;
        num /= 10;
    }

    return product;
}

int main() {
    int num;
    cout << "Input a number: ";
    cin >> num;

    int product = calculateProductOfDigits(num);
    cout << "The product of digits of " << num << " is: " << product << endl;

    return 0;
}
