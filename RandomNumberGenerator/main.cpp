#include <iostream>
#include <cstdlib> // Enables us use random generator using rand()
#include <ctime> // Helps make our random number different every time

int RandomNumber(int range){
    return rand() % range + 1;
}

void GuessNumberGame(){
    int secretNumber = RandomNumber(100);
    int guess;
    int numberOfGuesses = 0;

    do{
        std::cout << "Guess the number 1 to 100: "<< std::endl;
        std::cin >> guess;
        numberOfGuesses ++;

        if (guess > secretNumber){
            std::cout << "Too high! Try a smaller number" << std::endl;
        } else if (guess < secretNumber ){
            std::cout << "Too low! Try a higher number" << std::endl;
        }
    }while (guess != secretNumber);

    std::cout << "You got it! It took you " << numberOfGuesses << std::endl;
}

int main() {

/*
 * The highest number rand() can generate is defined by a constant called 'RAND_MAX'
 * RAND_MAX varies between different systems and compilers, but guaranteed to be at least 32,767.
 * So because we want a random number between 1 and 100 we do % 100 + 1. Why 100 and not 99 or some other number?
 * We use 100 (and generally powers of 10) because of predictability,simplicity,flexibility etc.
 * modulus with a power of 10 will always give you the last digit if it's 10 and/or last 2 digits if it's 100 etc.
 * i.e 16877 % 10 = 7 but % 100 = 77. additionally 16807 % 10 and 100 both equal 7
 * So using % 100 we know that will give us a range of 0 to 99
 * adding + 1, makes sure it starts from 1 to 100 and not 0.
 * int randomNumber = rand() % 100 + 1;
 * */

    // shuffle the random generation each time. (try running twice without this line, you get the same random number)
    srand(time(0));
    std::cout << "Random number from a random generator function: " << std::endl;
    std::cout << RandomNumber(100) << std::endl;
    std::cout << "Guess Number Game:" << std::endl;
    GuessNumberGame();
    return 0;
}
