#include <iostream>
#include <cmath> // For log10 function
using namespace std;

int main() {
    int num1, num2, sum, numDigits;

    
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    sum = num1 + num2;

   
    numDigits = (sum == 0) ? 1 : (int)log10(abs(sum)) + 1;

    
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;
    cout << "The number of digits in the sum is " << numDigits << endl;

    return 0;
}
