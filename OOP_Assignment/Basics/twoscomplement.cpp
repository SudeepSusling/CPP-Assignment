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

string twosComplement(const string& onesComplement) {
    string complement = onesComplement;
    int n = complement.size();

    // Start from the rightmost bit and add 1 to the binary number
    for (int i = n - 1; i >= 0; --i) {
        if (complement[i] == '1') {
            complement[i] = '0';
        } else {
            complement[i] = '1';
            break;
        }
    }

    // If no break occurred, prepend 1 (for case where all bits are 1)
    if (complement[0] == '0') {
        complement = '1' + complement;
    }

    return complement;
}

int main() {
    string binary;
    cout << "Input an 8-bit binary value: ";
    cin >> binary;

    string onesComp = onesComplement(binary);
    string twosComp = twosComplement(onesComp);

    cout << "The original binary = " << binary << endl;
    cout << "After one's complement the value = " << onesComp << endl;
    cout << "After two's complement the value = " << twosComp << endl;

    return 0;
}
