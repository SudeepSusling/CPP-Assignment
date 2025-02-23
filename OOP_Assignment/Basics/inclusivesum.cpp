#include <iostream>
using namespace std;


int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int first, last, totalSum = 0;

   
    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the last number: ";
    cin >> last;


    for (int i = first; i <= last; i++) {
        totalSum += sumOfDigits(i);
    }

  
    cout << "Total sum of digits between  " << first << " and " << last << " is: " << totalSum << endl;

    return 0;
}
