#include <iostream>

using namespace std;

int sumEven(int start, int end) {
    if (start > end) {
        return 0;
    }
    if (start % 2 == 0) {
        return start + sumEven(start + 2, end);
    } else {
        return sumEven(start + 1, end);
    }
}

int sumOdd(int start, int end) {
    if (start > end) {
        return 0;
    }
    if (start % 2 != 0) {
        return start + sumOdd(start + 2, end);
    } else {
        return sumOdd(start + 1, end);
    }
}

int main() {
    int start, end;
    cout << "Enter the starting number of the range: ";
    cin >> start;
    cout << "Enter the ending number of the range: ";
    cin >> end;

    int sumEvenNumbers = sumEven(start, end);
    int sumOddNumbers = sumOdd(start, end);

    cout << "The sum of even numbers in the given range is: " << sumEvenNumbers << endl;
    cout << "The sum of odd numbers in the given range is: " << sumOddNumbers << endl;

    return 0;
}
