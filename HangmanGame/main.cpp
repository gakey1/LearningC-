#include <iostream>
#include <vector>
#include <string>
// <ctime> for time functions, which we need for randomizing things based on time.
#include <ctime>
// Include general purpose functions, including those for performing random number generation.
#include <cstdlib>

using namespace std;

/* =====================================
 *      HANGMAN GAME
 * =====================================
 * Hangman is a game where you have to guess a secret word one letter at a time.
 * You get a certain number of tries,
 * and each time you guess a letter that is not in the word, you lose one try.
 * The game ends when you either guess the whole word correctly or run out of tries.
 * ------------
 * STEPS
 * ------------
 * The computer selects a random word from a predefined list.
 * The player guesses letters to try and figure out the word.
 * Each incorrect guess brings the player one step closer to losing.
 * The goal is to guess the word before running out of chances.
 * */

// This function takes a list of words and picks one randomly.
//'const vector<string>& words': It's a reference to a vector of strings,which are
// the possible words to choose from
string selectWord(const vector<string>& words){
    srand(time(0));

    // This line Calculates a random index
    // rand() generates a random number and % words.size() makes sure the
    // number is within the range of indices in the word list.
    int randomIndex = rand() % words.size();
    return words[randomIndex]; // returns the word at the position 'randomIndex'
}


// Function to initialize the guessed word display.
//string initializeDisplay(const string& word){
//    // This is a string constructor that allows you to create a string with a specified
//    // number of repetitions of a particular character.
//    // words.length() number of characters and '_' is character to repeat.
//    string display(word.length(), '_');
//    return display;
//}

string initializeDisplay(const string& word){
    string display;
    for(int i = 0; i < word.length(); i++){
        display += '_';
    }
    return display;
}

int main() {
    vector<string> words = {"programming", "hangman", "difficult", "assignment"};
    string word = selectWord(words);
    string guessedWord = initializeDisplay(word);

    int lives = 6; // Player starts with 6 lives
    vector<char> guessedLetters; // To keep track of guessed letters

    cout << "Welcome to Hangman!" << endl;

    while (lives > 0 && guessedWord != word){
        char guess;
        cout << "Current word: " << guessedWord << endl;
        cout << "Guess a letter: ";
        cin >> guess;

        // check if the letter has already been guessed
        bool alreadyGuessed = false;
        for (char letter : guessedLetters) {
            if (letter == guess) {
                alreadyGuessed = true;
                break;
            }
        }
        if (alreadyGuessed){
            cout << "You already guessed that letter. Try a different one." << endl;
            continue;
        }

        //Add the guessed letter to the list of guessed letters
        guessedLetters.push_back(guess);

        //check if the guess is correct
        bool correctGuess = false;
        for (int i = 0; i < word.length(); i++){
            if (word[i] == guess){
                guessedWord[i] = guess;
                correctGuess = true;
            }
        }

        if (!correctGuess){
            // Decrease a life if the guess is incorrect
            lives--;
            cout << "Wrong! Lives remaining: " << lives << endl;
        }

    }

    if (lives > 0){
        cout << " Congratulation! You guessed the word: " << word << endl;
    } else{
        cout << "Game over! The word was: " << word << endl;
    }
    return 0;
}
