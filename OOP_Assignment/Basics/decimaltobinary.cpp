#include <iostream>
#include <stack>

using namespace std;

void decimalToBinary(int num) {
    stack<int> binaryStack;
    while (num > 0) {
        binaryStack.push(num % 2);
        num /= 2;
    }

    cout << "The binary number is: ";
    while (!binaryStack.empty()) {
        cout << binaryStack.top();
        binaryStack.pop();
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Input a decimal number: ";
    cin >> num;

    decimalToBinary(num);

    return 0;
}
