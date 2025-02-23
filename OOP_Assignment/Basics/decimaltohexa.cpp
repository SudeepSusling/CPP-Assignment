#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string decimalToHexadecimal(int num) {
    stringstream ss;
    ss << hex << num;
    string result = ss.str();

    // Convert to uppercase using a traditional for loop
    for (size_t i = 0; i < result.size(); ++i) {
        result[i] = toupper(result[i]);
    }

    return result;
}

int main() {
    int num;
    cout << "Input a decimal number: ";
    cin >> num;

    string hexNumber = decimalToHexadecimal(num);
    cout << "The hexadecimal number is: " << hexNumber << endl;

    return 0;
}
