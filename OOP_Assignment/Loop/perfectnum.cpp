#include <iostream>

bool isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

int main() {
    std::cout << "Perfect numbers between 1 and 500 are:\n";
    for (int i = 1; i <= 500; ++i) {
        if (isPerfect(i)) {
            std::cout << i << "\n";
        }
    }
    return 0;
}
