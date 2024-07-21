#include <iostream>

using namespace std;

/* ====================================================================================
 *            FUNCTION OVERLOADING
 * ====================================================================================
 * Function overloading allows you to have functions with the same name but different parameters.
 * This can be useful when you want to perform same operation but with different inputs.
 * i.e. say you want to perform the areas of different shapes.
 * Instead of naming functions differently like 'AreaCircle', 'AreaTriangle',
 * you can simply overload the 'area function'
 * */

// Calculate the area of a circle
double Area(double radius){
    return 3.14159 * radius * radius;
}

// Calculate the area of a circle
double Area(double length, double  width){
    return length * width;
}

int main() {
    cout << "Area of a circle with a radius of 14 is " << Area(14) << endl;
    cout << "Area of a rectangle of 5 by 10 is " << Area(5,10) << endl;
    return 0;
}
