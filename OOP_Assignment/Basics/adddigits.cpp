#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a non-negative number: ";
    cin >> num;

    while (num >= 10) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }

    cout << "The result is: " << num << endl;
    return 0;
}
