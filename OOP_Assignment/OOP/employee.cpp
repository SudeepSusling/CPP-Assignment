#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(const string& name, int employeeID, double initialSalary) 
        : name(name), employeeID(employeeID), salary(initialSalary) {}

    void setSalary(double newSalary) {
        salary = newSalary;
    }

    double getSalary() const {
        return salary;
    }

    void calculateSalary(int performanceRating) {
        // Adjust salary based on performance rating
        if (performanceRating >= 9) {
            salary += salary * 0.20; // 20% increase for excellent performance
        } else if (performanceRating >= 7) {
            salary += salary * 0.10; // 10% increase for good performance
        } else if (performanceRating >= 5) {
            salary += salary * 0.05; // 5% increase for average performance
        } else {
            salary -= salary * 0.10; // 10% decrease for poor performance
        }
    }

    void display() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    string name;
    int employeeID, performanceRating;
    double initialSalary;

    cout << "Enter the employee's name: ";
    cin >> name;
    cout << "Enter the employee's ID: ";
    cin >> employeeID;
    cout << "Enter the employee's initial salary: ";
    cin >> initialSalary;
    cout << "Enter the employee's performance rating (1 to 10): ";
    cin >> performanceRating;

    Employee emp(name, employeeID, initialSalary);
    emp.calculateSalary(performanceRating);
    emp.display();

    return 0;
}
