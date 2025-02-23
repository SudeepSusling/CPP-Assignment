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

void listNonPrimes(int upperLimit) {
    vector<int> nonPrimes;

    for (int i = 2; i <= upperLimit; ++i) {
        if (!isPrime(i)) {
            nonPrimes.push_back(i);
        }
    }

    cout << "The non-prime numbers are:" << endl;
    for (size_t i = 0; i < nonPrimes.size(); ++i) {
        cout << nonPrimes[i] << " ";
    }
    cout << endl;
}

int main() {
    int upperLimit;
    cout << "Input the upper limit: ";
    cin >> upperLimit;

    listNonPrimes(upperLimit);

    return 0;
}
