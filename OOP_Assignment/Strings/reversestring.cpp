#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Input: ";
    cin >> input;

    // Reverse the string
    string reversed = "";
    for (int i = input.length() - 1; i >= 0; --i) {
        reversed += input[i];
    }

    cout << "Reversed String: " << reversed << endl;
    return 0;
}
