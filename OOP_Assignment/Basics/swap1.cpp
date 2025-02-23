#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, FirstDigit, LastDigit, digits, SwappedNum;

   
    cout << "Enter a number: ";
    cin >> num;


    LastDigit = num % 10;

 
    digits = (int)log10(num);

   
    FirstDigit = (int)(num / pow(10, digits));

  
    SwappedNum = LastDigit * pow(10, digits) + num % (int)pow(10, digits) - LastDigit + FirstDigit;


    cout << "After swapping:" << endl;
    cout << "SwappedNum: " << SwappedNum << endl;


    return 0;
}