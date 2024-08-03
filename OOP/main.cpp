/* ================================================================================
 *          Object Oriented Programming
 * ================================================================================
 * OOP helps in organizing complex programs,
 * by making them easier to manage, extend and understand.
 * OOP is programming paradigm based on the concept of "objects",
 * which contain Data, in the form of fields (often k.a. attributes or properties),
 * and Code, in the form of procedures (often k.a. methods)
 * ================================================================================
 *      Key concepts of OOP
 * ================================================================================
 * ================================================================================
 *          1. Classes and Objects
 * ================================================================================
 * Class:  -Is a blueprint for creating objects.
 *         -It defines a type, including what data it holds and functions it can perform.
 * Object: - An instance of a class.
 *         - If a class is a blueprint, an object is a house built from that blueprint.
 * ================================================================================
 *          2. Encapsulation
 * ================================================================================
 * Is the practice of bundling data and methods that operate on the data within a class,
 * while restricting external access to these elements to safeguard their integrity and
 * simplify interactions.
 * In summary, encapsulation helps to protect data within a class from unwanted external
 * interference and misuse, ensuring the data remains safe and is used only in intended ways.
 * This makes code safer, cleaner, and easier to manage.
 * ================================================================================
 *      3. Inheritance
 * ================================================================================
 * A way to form new classes using classes that have already been defined. This helps
 * in minimizing redundancy in code.
 * Redundancy in code: is not a repetition of form, but rather a repetition of intent.
 * ================================================================================
 *      4.  Polymorphism
 * ================================================================================
 * Is a feature in OOP that lets you use a single function name to perform
 * different types of tasks, depending on the object it's being used with.
 * This enables a single interface to control access to a variety of types.
 * It also simply just means many forms.
 *
 * ================================================================================
 *                  ACCESS MODIFIERS
 * ================================================================================
 * Access specifiers define how members(variables and functions) of a class can be accessed
 * Public: Accessible from any part of the program. That means even outside the class.
 * Private: Members declared as private are only accessible within the class itself.
 *        - Cannot be accessed directly from outside the class, not even by derived classes.
 * Protected: Are accessible within the class and by derived classes (subclasses),
 *          - but not from any other part of the program.
 *
 * ================================================================================
 *            Constructors
 * ================================================================================
 * Is a special type of member function in a class that is automatically called when
 * an object of that class is created.
 * Constructors are primarily used to initialize objects.
 * ----------------------------------------------------------------------------------
 *                  Characteristics of Constructors:
 * ----------------------------------------------------------------------------------
 * 1. Have the same name as the class
 * 2. They do not have a return type, not even void.
 * 3. A class can have multiple constructors (overloading).
 * -----------------------------------------------------------------------------------
 *                  Types of Constructors:
 * ------------------------------------------------------------------------------------
 * 1. Default Constructor: A constructor that takes no parameters.
 * 2. Parameterized Constructor: Takes one or more parameters to
 *   - initialize the object with specific values.
 * 3. Copy Constructor: A constructor that creates a new object as a copy of an existing object.
 * -----------------------------------------------------------------------------------
 *          Constructor Syntax
 * -----------------------------------------------------------------------------------
 * Parameterized Constructor allows you to provide initial values for the class's fields.
 * For Constructor Initialization List, instead of initializing fields inside the
 * constructor body like parameterized constructor, we can use
 * initialization list for more efficiency,
 * especially for initializing const fields and reference fields.
 * SYNTAX:
 *    - ClassName(Type variableName) : member1(initialValue), member2(initialValue2){...}
 * ClassName: The name of the class for which the constructor is defined.
 * Type variableName: The parameters passed to the constructor. These are the
 * values you use to initialize the class members.
 * member1, member2: These are the names of the class members (attributes) that
 * you are initializing.
 * initialValue1, initialValue2: These values are typically the parameters passed to
 * the constructor but can be any expression that provides a value to
 * initialize the members with.
 * ---------------------------------------
 *      Example and Explanation
 * ---------------------------------------
 * i.e Rectangle(double l, double w) : length(l), width(w) {
 * // Constructor body is empty }
 * `double l, double w: These are the parameters of the constructor.
 * l is intended to be the initial value for the length member of the Rectangle,
 * and w for width.
 * length(l), width(w): This part of the initialization list means:
 * length: This is the name of the member variable of the class Rectangle.
 * (l): This is the value used to initialize the length member.
 * The value in parentheses is taken from the parameter l.
 * Similarly, width(w) initializes the width member with the value of the parameter w.
 * -----------
 *  Summary
 * -----------
 * The names length and width are identifiers for the member variables of the
 * Rectangle class, and l and w are the parameter names chosen arbitrarily by the
 * programmer to represent the values passed into the constructor.
 * The choice of parameter names (l and w) is arbitrary and can be any valid identifier,
 * but the names used in the initialization list (length, width) must match the
 * member variable names declared in the class.
 * ====================================================================================
 *              Note
 * ====================================================================================
 * In C++, the members of a class can be accessed by any method of the class,
 * regardless of their order of declaration within the class.
 * This means that as long as a variable is declared somewhere in the class definition,
 * it can be accessed by any method, even if that method appears before the variable in
 * the code.
 * However, for clarity and to avoid confusion, it’s a best practice to
 * declare all member variables at the beginning of the class before any methods.
 * This makes it easier to see what data the class encapsulates and how it's supposed to
 * work without having to scan through method definitions first.
 * */

#include <iostream>
using namespace std;

class Car{
    // not accessible directly from outside the class and
    // only modified through public methods
private:
    string color;
    int speed;

public:
    Car(string c, int s) : color(c), speed(s) {} // Constructor

    // Public method to access private data
    void accelerate() {
        speed += 10;
        cout << "Accelerating. Current speed: " << speed << " km/h" << endl;
    }

    void brake() {
        speed -= 10;
        cout << "Braking. Current speed: " << speed << " km/h" << endl;
    }

    void display() {
        cout << "Car color: " << color << ". Current speed: " << speed << " km/h" << endl;
    }
};


int main() {
    Car myCar("Red", 50); // creating an object of car
    myCar.display(); // Display the initial state of the car
    myCar.accelerate();
    myCar.brake();
    return 0;
}
