#include <iostream>
using namespace std;

int main() {
    int firstnum, secondnum;

    // Ask the user for the values of a and b
    cout << "Enter the firstnum: ";
    cin >> firstnum;
    cout << "Enter the secondnum: ";
    cin >> secondnum;

    // Swapping the values without using a third variable
    firstnum = firstnum + secondnum;
    secondnum = firstnum - secondnum;
    firstnum = firstnum - secondnum;

    // Print the swapped values
    cout << "After swapping:" << endl;
    cout << "firstnum = " << firstnum << endl;
    cout << "secondnum = " << secondnum << endl;

    return 0;
}
