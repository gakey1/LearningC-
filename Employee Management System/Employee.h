#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee {
private:
    string name;
    int id;
    double salary;

public:
    Employee();

    Employee(string empName, int empId, double empSalary);

    void display() const;

    int getId() const;

//    void updateSalary(double newSalary);
};

#endif


