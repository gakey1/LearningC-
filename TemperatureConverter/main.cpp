#include <iostream>

using namespace std;


/*
 * ===================================
 *          FUNCTIONS C++
 * ===================================
 * Functions have got 3 main parts:
 * Inputs: Data you give to the function to work with, called parameters.
 * Processes: Code inside the function that does something with the input.
 * Outputs: This is what the functions gives back after it finishes processing; return value
 * Importance of functions;
 * Re-usability: Write code and use it many times
 * Organisation: Break down complex problems into smaller, manageable pieces.
 * Maintenance: Easier to update and manage the code.
 * */

// Function to convert Celsius to Fahrenheit
double CelsiusToFahrenheit(double celsius){
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
double FahrenheitToCelsius(double fahrenheit){
    return (fahrenheit -32) * 5 / 9;
}

int main() {
    double celsius = 20.0;
    double fahrenheit = 68.0;

    cout << celsius << " Celsius is " << CelsiusToFahrenheit(celsius) << " Fahrenheit \n";
    cout << fahrenheit << " Fahrenheit is " << FahrenheitToCelsius(fahrenheit) << " Celsius \n";

    return 0;
}
