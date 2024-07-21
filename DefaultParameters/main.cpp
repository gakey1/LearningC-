#include <iostream>

using namespace std;

/*======================================================================================
 *                       DEFAULT PARAMETERS
 * =====================================================================================
 * Allow you to specify default values for function parameter.
 * These defaults will be used if no argument is provided for that
 * parameter when the function is called.
 * */

// Function to print a greeting; defaults to "Guest" if no name is provided
void greet(string name = "Guest"){
    cout << "Hello, " << name << "! \n";
}


int main() {
    greet("Alice");
    greet(); // Will use the default parameter "Guest"
    return 0;
}
