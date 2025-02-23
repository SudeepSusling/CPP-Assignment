#include <iostream>
#include <string>

using namespace std;

string onesComplement(const string& binary) {
    string complement = binary;
    for (size_t i = 0; i < binary.size(); ++i) {
        complement[i] = (binary[i] == '0') ? '1' : '0';
    }
    return complement;
}

int main() {
    string binary;
    cout << "Input an 8-bit binary value: ";
    cin >> binary;

    string complement = onesComplement(binary);

    cout << "The original binary = " << binary << endl;
    cout << "After one's complement the number = " << complement << endl;

    return 0;
}
