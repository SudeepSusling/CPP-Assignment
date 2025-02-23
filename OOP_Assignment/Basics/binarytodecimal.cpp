#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int binaryToDecimal(const string& binary) {
    int decimal = 0;
    int length = binary.size();
    for (int i = 0; i < length; ++i) {
        if (binary[length - 1 - i] == '1') {
            decimal += pow(2, i);
        }
    }
    return decimal;
}

int main() {
    string binary;
    cout << "Input a binary number: ";
    cin >> binary;

    int decimal = binaryToDecimal(binary);
    cout << "The decimal number is: " << decimal << endl;

    return 0;
}
