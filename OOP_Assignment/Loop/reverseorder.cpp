#include <iostream>
using namespace std;

long long reverseNumber(long long num) {
    long long reversed = 0;
    while (num != 0) {
        long long digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

int main() {
    long long n;
    cout << "Input a number: ";
    cin >> n;
    long long reversedNum = reverseNumber(n);
    cout << "The number in reverse order is: " << reversedNum << endl;
    return 0;
}
