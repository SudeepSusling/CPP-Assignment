#include <iostream>
using namespace std;

void displayFibonacci(int n) {
    int first = 0, second = 1, next;
    
    cout << "Here is the Fibonacci series up to " << n << " terms: ";
    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << first << " ";
            continue;
        }
        if (i == 2) {
            cout << second << " ";
            continue;
        }
        next = first + second;
        first = second;
        second = next;
        cout << next << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Input number of terms to display: ";
    cin >> n;
    displayFibonacci(n);
    return 0;
}
