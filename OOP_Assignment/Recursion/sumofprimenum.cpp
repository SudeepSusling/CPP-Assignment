#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num, int i = 2) {
    if (num <= 2) {
        return (num == 2);
    }
    if (num % i == 0) {
        return false;
    }
    if (i * i > num) {
        return true;
    }
    return isPrime(num, i + 1);
}

int sumPrimes(int start, int end) {
    if (start > end) {
        return 0;
    }
    int current = isPrime(start) ? start : 0;
    return current + sumPrimes(start + 1, end);
}

int main() {
    int start, end;
    cout << "Enter the starting number of the range: ";
    cin >> start;
    cout << "Enter the ending number of the range: ";
    cin >> end;

    int sum = sumPrimes(start, end);
    cout << "The sum of all prime numbers in the given range is: " << sum << endl;

    return 0;
}
