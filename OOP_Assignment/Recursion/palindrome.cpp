#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const string& str, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (str[start] != str[end]) {
        return false;
    }
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    bool result = isPalindrome(str, 0, str.length() - 1);
    cout << "The string \"" << str << "\" is " << (result ? "a palindrome." : "not a palindrome.") << endl;

    return 0;
}
