/*=====================================================================================
 *              INHERITANCE
 * =====================================================================================
 * It's a mechanism in OOP where a new class, known as a Derived class,
 * inherits properties and behaviors (methods and fields) from an existing class,
 * known as a Base class or Parent class.
 * =====================================================================================
 *      Types Of Inheritance
 * =====================================================================================
 * 1.) Single Inheritance: Where a class inherits from one parent class.
 * 2.) Multiple Inheritance: Where a class inherits from more than one base class
 * 3.) Multilevel Inheritance: A form of inheritance where a class is derived
 *     from another derived class.
 * 4.) Hierarchical Inheritance: Multiple classes are derived from a single base class.
 * 5.) Hybrid Inheritance: A combination of more than one type of inheritance.
 * =====================================================================================
 *      Why Use Inheritance?
 * =====================================================================================
 * 1.) Reusability: Avoid duplication by using common functionality from the base class.
 * 2.) Extensibility: Extend base classes to create specialized behaviors in derived classes.
 * 3.) Maintainability: Make systemic changes in the base class that propagate to derived classes.
 * ========================================================================================
 *  Syntax
 * ========================================================================================
 * class DerivedClass : public BaseClass {
    // Class members go here
    };
 * In this syntax:
 * DerivedClass is the class being defined.
 * The colon : indicates that what follows is the base class from which DerivedClass is inheriting.
 * public is the access specifier that determines how the members of BaseClass are treated in DerivedClass.
 * BaseClass is the class from which DerivedClass inherits
 * If the access specifier is omitted when defining derived structures or
 * classes derived from other structures, public is assumed.
 * */
#include <iostream>
using namespace std;

// Defining a Base class
class Vehicle {
public:
    string brand = "Ford";

    void honk(){
        cout << "Tuut, tuut!" << endl;
    }

};

// Defining a derived class
class Car : public Vehicle{
public:
    string model = "Mustang";

    void display() {
        cout << "Brand " << brand << ", Model: " << model << endl;
    }

};


int main() {
    Car myCar;
    myCar.honk(); // Calls the inherited method
    myCar.display(); // Calls its own method

    return 0;
}
