#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    string className;
    int rollNumber;
    double marks;

    char calculateGrade() const {
        if (marks >= 90) {
            return 'A';
        } else if (marks >= 80) {
            return 'B';
        } else if (marks >= 70) {
            return 'C';
        } else if (marks >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }

public:
    Student(const string& name, const string& className, int rollNumber, double marks)
        : name(name), className(className), rollNumber(rollNumber), marks(marks) {}

    void display() const {
        cout << "Student Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    string name, className;
    int rollNumber;
    double marks;

    cout << "Enter the student's name: ";
    cin >> name;
    cout << "Enter the student's class: ";
    cin >> className;
    cout << "Enter the student's roll number: ";
    cin >> rollNumber;
    cout << "Enter the student's marks: ";
    cin >> marks;

    Student student(name, className, rollNumber, marks);
    student.display();

    return 0;
}
