#include <iostream>

using namespace std;

/* =====================================================================================
 *                      RECURSIVE FUNCTION(S)
 * =====================================================================================
 * Is a function that calls itself in order to solve smaller instances of the same problem.
 * Often used for tasks that can be broken down into simpler, similar subtasks, i.e.:
 * Calculating Factorials or traversing trees.
 * A factorial is the product of all positive integers up to a given number.
 * It's symbolized by an exclamation point(!)
 * 5! = 5 * 4 * 3 * 2 * 1 = 120
 * */

int factorial(int n){
    if (n == 0) return 1; // Base case: factorial of 0 is 1
    return n * factorial(n-1); // Recursive call
}

int main() {
    int num = 5;
    cout << "The factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}
