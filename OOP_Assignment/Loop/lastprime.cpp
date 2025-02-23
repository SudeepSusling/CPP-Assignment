#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number to find the last prime number that occurs before the number: ";
    cin >> num;

    int lastPrime = -1;
    for (int i = num - 1; i > 1; --i) {
        if (isPrime(i)) {
            lastPrime = i;
            break;
        }
    }

    if (lastPrime != -1) {
        cout << "The last prime number before " << num << " is " << lastPrime << endl;
    } else {
        cout << "There are no prime numbers before " << num << endl;
    }

    return 0;
}
