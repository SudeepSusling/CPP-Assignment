#include <iostream>
#include <string>
using namespace std;

void capitalizeFirstLetter(string &str) {
    bool capitalizeNext = true;
    for (size_t i = 0; i < str.length(); ++i) {
        if (str[i] == ' ') {
            capitalizeNext = true;
        } else if (capitalizeNext && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalizeNext = false;
        }
    }
}

int main() {
    string input;
    cout << "Enter string: ";
    getline(cin, input);

    capitalizeFirstLetter(input);

    cout << "Output: " << input << endl;
    return 0;
}
