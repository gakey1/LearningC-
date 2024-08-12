#include <iostream>
#include "Employee.h"
#include <fstream>
#include <vector>
#include <string>
#include <unistd.h>

using namespace std;

void readEmployeesFromFile(vector<Employee>& employees, const string& filename);
void writeEmployeeToFile(const Employee& employee, const string& filename);

int main() {
    // Check current working directory as I
    // was having trouble with the employee.txt file opening
    char cwd[1024];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        std::cout << "Current working directory: " << cwd << std::endl;
    } else {
        std::cerr << "getcwd() error" << std::endl;
    }
    //end

    // rest of code
    vector<Employee> employees;
    string filename = "../employee_data.txt";

    readEmployeesFromFile(employees, filename);

    int choice = 0;

    while (choice != 3) {
        cout << "\nEmployee Management System\n";
        cout << "1. Display all employees\n";
        cout << "2. Add a new employee\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: \n";
        cin >> choice;

        if (choice == 1){
            for (int i = 0; i < employees.size(); i++){
                employees[i].display();
                cout << "--------------------\n";
            }
        }
        else if (choice == 2){
            string name;
            int id;
            double salary;
            cout << "Enter employee name: ";
            cin >> name;
            cout << "Enter employee ID: ";
            cin >> id;
            cout << "Enter employee salary: ";
            cin >> salary;

            Employee newEmployee(name, id, salary);
            employees.push_back(newEmployee);

            writeEmployeeToFile(newEmployee, filename);
        }
        else if (choice == 3){
            cout << "Exiting...\n";
        }
        else {
            std::cout << "Invalid choice. Please try again.\n";
        }
    }
    return 0;
}

void readEmployeesFromFile(vector<Employee>& employees, const string& filename){
    ifstream file;
    file.open(filename);

    if(!file.is_open()){
        cerr << "Error opening file: " << filename << "\n";
        return;
    }

    string name;
    int id;
    double salary;
    while (file >> name >> id >> salary ){
        employees.push_back(Employee(name, id, salary));
    }

    file.close();
}

void writeEmployeeToFile(const Employee& employees, const string& filename) {
    std::ofstream file;
    file.open(filename, std::ios::app);

    if (!file.is_open()) {
        cerr << "Error opening file: " << filename << "\n";
        return;
    }

    file << employees.getId() << "\n";

    file.close();
}


















