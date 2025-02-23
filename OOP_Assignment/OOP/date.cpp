#include <iostream>

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

    bool isLeapYear(int year) const {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    bool isValidDate(int day, int month, int year) const {
        if (year < 1 || month < 1 || month > 12 || day < 1) {
            return false;
        }

        int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if (isLeapYear(year) && month == 2) {
            daysInMonth[2] = 29;
        }

        return day <= daysInMonth[month];
    }

public:
    Date() : day(1), month(1), year(1900) {}

    void setDate(int day, int month, int year) {
        if (isValidDate(day, month, year)) {
            this->day = day;
            this->month = month;
            this->year = year;
        } else {
            cout << "Invalid date. Setting default date (01/01/1900)." << endl;
            this->day = 1;
            this->month = 1;
            this->year = 1900;
        }
    }

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    void display() const {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date date;

    int day, month, year;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    date.setDate(day, month, year);
    date.display();

    return 0;
}
