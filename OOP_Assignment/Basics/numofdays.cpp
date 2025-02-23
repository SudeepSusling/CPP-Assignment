#include <iostream>
using namespace std;

int main() {
    int year, month, days;

    
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the month (1-12): ";
    cin >> month;

    
    if (month == 2) {
       
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            days = 29;
        } else {
            days = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else {
        days = 31;
    }

  
    cout << "Number of days in year " << year << " and month " << month << " is: " << days << endl;

    return 0;
}
