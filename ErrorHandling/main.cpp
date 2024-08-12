#include <iostream>
#include <vector>
using namespace std;

/* ====================================================================================================
 *   ERROR HANDLING : EXCEPTIONS
 * ====================================================================================================
 * In C++ error handling is primarily done using exceptions, which are special responses to
 * exceptional conditions that disrupt the normal flow of a program.
 * An exception is like an emergency signal that something unexpected has happened in
 * your program. i.e. trying to divide a number by zero.
 * When such a situation occurs, C++ allows you to "throw" an exception, which can
 * be "caught" and handled appropriately to prevent the program from crashing.
 *
 * Try Block: A section of code that is monitored for exceptions.
 * If an exception occurs within the try block, the program immediately jumps to the
 * corresponding catch block.
 * Catch Block: Used to handle the exception. It allows the program to continue running
 * while also providing information about what went wrong.
 * */

int main() {

    vector<int> data {1,2,3,4,5};
    int index;

    cout << "Enter an index to access: " << endl;
    cin >> index;

    try{
        if (index < 0 || index >= data.size()){
            throw out_of_range("Index out of range exception");
        }
        cout << "Data at index " << index << " is " << data[index] << endl;
    }
    catch (const out_of_range& e){
        cout << "Error: " << e.what() << endl;
    }

    cout << "Program continues smoothly." << endl;

    return 0;
}
