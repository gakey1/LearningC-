#include "Employee.h"
#include <iostream>

//using namespace std;

Employee::Employee() : name("Unknown"), id(0), salary(0.0) {}

Employee::Employee(string empName, int empId, double empSalary)
: name(empName), id(empId), salary(empSalary) {}

void Employee::display() const {
    cout << "Employee ID: " << id << "\n";
    cout << "Employee Name: " << name << "\n";
    cout << "Employee Salary: " << salary << "\n";
}

int Employee::getId() const {
    return id;
}

//void Employee::updateSalary(double newSalary) {
//    salary = newSalary;
//}

