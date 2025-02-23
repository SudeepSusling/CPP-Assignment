#include <iostream>
#include <vector>
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
    int n, primeCount = 0;

    
    cout << "Enter a positive number: ";
    cin >> n;

  
    if (n % 2 != 0) {
        cout << "Error! The input value is an odd number." << endl;
        return 1;
    }

    
    for (int i = 2; i < n; ++i) {
        if (isPrime(i)) {
            primeCount++;
        }
    }

  
    cout << "Number of prime numbers less than " << n << " is: " << primeCount << endl;

    return 0;
}
