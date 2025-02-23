#include <iostream>
#include <string>
using namespace std;

int main() {
    string FirstName, LastName;

    cout << "Enter the Frst Name: ";
    cin >> FirstName;
    cout << "Enter the Last Name: ";
    cin >> LastName;

    cout << "Reverse Order: " << LastName << " " << FirstName << endl;

    return 0;
}
