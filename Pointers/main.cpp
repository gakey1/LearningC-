#include <iostream>

/* ==================================================================
 *        Pointers
 * ==================================================================
 * Pointers are simply variables that store a memory address.
 * Thus, a pointer is a variable, and like any other variables they occupy space in memory.
 * What's special about pointers is that the value contained in a pointer is interpreted as a memory address.
 * So, a pointer is a special variable that points to a location in memory.
 *
 * --------------------------------------------------------------------
 *          Why Other Programming languages Lack Pointers
 * --------------------------------------------------------------------
 * Other programming languages don't have pointers because:
 * 1. Safety: Pointers are powerful but risky i.e.:
 *      -  Memory leaks: When a program fail to free memory after it's no longer needed
 *      -  Buffer overflows: Accessing memory regions outside of intended bounds can lead to crashes and security vulnerability
 * 2. Simplicity and Readability
 * 3. Abstraction : Through Runtime environments and Garage collection
 * Languages like Java, Python etc manage memory automatically to prevent such issues.
 * They use garbage collection and other memory management techniques to handle the
 * allocation and de-allocation of memory without exposing direct memory manipulation to the programmer.
 *
 * --------------------------------------------------------------------
 *  Declaring a pointer: Syntax
 * --------------------------------------------------------------------
 * PointedType* PointerVariableName; or PointedType *PointerVariableName;
 * i.e.: int* pointerToInt or int *pointerToInt;
 * The first syntax is preferred for its clarity of type.
 * You tell C++ you want a pointer by using '*' symbol. This doesn't create a pointer it
 * just says "This variable will hold a pointer".
 * --------------------------------------------------------------------
 *  Storing an Address in a Pointer:
 * --------------------------------------------------------------------
 * You use the symbol '&' symbol to get the address of a variable and store it in your pointer.
 *  '&' symbol also called the 'Address Operator'
 * i.e.: int myNumber = 58;
 * pointerToInt = &myNumber;
 * --------------------------------------------------------------------
 * Using the Data at the Address (Dereferencing)
 * --------------------------------------------------------------------
 * You use the '*' symbol again to access the data at the address the pointer is holding.
 * '*' symbol also called the 'Dereference Operator'
 * i.e: int valueAtAddress = *pointerToInt // this is 58 according to examples given
 * --------------------------------------------------------------------
 *  Initializing a pointer with NULL and nullptr
 * --------------------------------------------------------------------
 * It's good practice to always initialize a pointer to
 * 'nullptr' (or 'NULL' in older C++) when you declare it without assigning a
 * specific address right away
 * Here's why:
 * 1. Prevent undefined Behavior
 *      - A pointer that is not initialized points to a random memory address.
 *      - This is known as 'wild' pointer.
 *      - If you accidentally dereference a wild pointer,
 *      (that is, access the value at the location it points to), it can lead to
 *      undefined behavior, including crashes or corrupt data.
 * 2. Safety and debugging:
 *      - Initializing a pointer can help catch bugs early.
 *      - De-referencing a pointer set to 'nullptr' will typically cause a predictable runtime error.
 * 3. Logical state:
 *      - By initializing a pointer, you define a clear initial state for that part of your program.
 *      - This makes the  program logic easier to understand and maintain.
 *
 * --------------------------------------------------------------------------
 *  A Real-World Scenario:
 *  -------------------------------------------------------------------------
 * If you think about it like sending someone to fetch something from a storage room:
 * You (the program) are the boss.
 * The storage room is your computer's memory.
 * The item in the storage room is the data.
 * The pointer is the note you give to your helper with the location of the item.
 *
 * */

using namespace std;

int main() {
    int myVar = 8; // normal integer variable;
    int *pointerToInt; // Pointer that can hold the address of an integer.
    pointerToInt = &myVar;  // store address of myVar in pointerToInt.

    cout << "Value of myVar: " << myVar << endl; // value 8
    cout << "Address of myVar: " << pointerToInt << endl;
    cout << "Value of the address stored in pointerToInt: " <<  *pointerToInt<< endl;

    *pointerToInt = 20; // changing the value at the address stored in myPointer
    cout << "Address of myVar: " << pointerToInt << endl;
    cout << "Value of the address stored in pointerToInt: " <<  *pointerToInt<< endl;
    cout  <<  myVar << endl; // now is 20

    return 0;
}
