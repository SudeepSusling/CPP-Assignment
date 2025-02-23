#include <iostream>
using namespace std;


bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}


int daysInMonth(int year, int month) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

int main() {
    int year1, month1, day1, year2, month2, day2;
    int daysBetween = 0;

    
    cout << "Enter the first date (YYYY-MM-DD): ";
    scanf("%d-%d-%d", &year1, &month1, &day1);


    cout << "Enter the second date (YYYY-MM-DD): ";
    scanf("%d-%d-%d", &year2, &month2, &day2);

   
    while (year1 < year2 || (year1 == year2 && month1 < month2) || (year1 == year2 && month1 == month2 && day1 < day2)) {
        daysBetween++;
        day1++;
        if (day1 > daysInMonth(year1, month1)) {
            day1 = 1;
            month1++;
            if (month1 > 12) {
                month1 = 1;
                year1++;
            }
        }
    }


    cout << "The number of days between the two dates is: " << daysBetween << " days." << endl;

    return 0;
}
