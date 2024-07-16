#include <iostream>
#include <string>
#include <vector>
#include <random> // for random choosing
#include <chrono>
#include <algorithm> // for shuffling

using namespace std;

/*
* ==================================================================================================
*                                    GAME CONCEPT
* ==================================================================================================
* In the Word Jumble game, the computer takes a word and scrambles the letters.
* The player's goal is to guess the original word from the scrambled version.
* We’ll add a hint option to make it more fun and helpful.
* What the game should do:
* Pick a word from a list of words. i.e. WordList[]
* The computer randomly picks a word from WordList[].
* Scramble/Shuffle the letters of the word.
* Show the scrambled word to the player.
* Let the player guess the word.
* Offer a hint if the player is stuck.
* Winning the game.
* */

/*
* ===================================================================================================
*                                      ARRAY AND VECTORS
* ===================================================================================================
* List of words are stored
* We can use both arrays and vectors.
* To pick between the 2 you need to know which one works better for the needed functionality.
* ARRAYS: In C++ they're fixed, they don't change size.
* Arrays are more like primitive meaning not quite objects.
* Arrays don't have methods (actions) you can call on them like '.size()', '.sort()' etc
* Arrays advantage is that they're simple and fast
* VECTORS: Full-Fledged Objects
* Vectors come with lots of built-in methods that let you manipulate them
* i.e .push_back(), .pop_back(), .size(),etc
* Advantage of vectors is Size Flexibility, can grow.
* Use cases:
* Use an array when you know exactly how many items you have and that number won't change.
* Use vectors when you might get more toys later and need more space. Need to know how many
* items are inside, make room for more, organize ect.
* */

/*
* ===================================================================================================
*                                      SHUFFLE
* ===================================================================================================
* begin() and end() tell 'engine' where you 1st and last word or letter is,
* engine then shuffles the list.
* This handles randomness for you more effectively than the rand()...they both use <random> though
* */

/*
 * ===========================================================================================
 * string(1, word[0])
 * ===========================================================================================
 * This can be particularly useful when you want to work with a character as a string.
 * Ensures that you're passing a string, which can help avoid type-related errors.
 * Sometimes, functions or operations require a string argument instead of a character,
 * even if that string is just one character long. Using string(1, character)
 * ensures that you're passing a string,
 * */

// Game introduction and initial display method
void GameIntroAndDisplayMsgs(string jumbledWord){
    cout << "Welcome to the Word Jumble game!\n";
    cout << "Unscramble the letters to make a word.\n";
    cout << "Enter 'hint' for a hint.\n";
    cout << "The jumble is: " << jumbledWord << endl;
}

// Game loop
void Game(string word, string guess, string hint){
    while (true){
        cout << "Your guess:" << endl;
        cin >> guess;

        if (guess == "hint"){
            cout << hint << endl;
        }

        else if (guess == word){
            cout << "Congratulations! You guessed it!" << endl;
            break;
        }

        else{
            cout << "Sorry, try again" << endl;
        }

    }
}

int main() {

    //everytime you run the program the letters in the picked word mix up in a new way
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    default_random_engine engine(seed);

    vector<string> wordList = {"programming", "giraffe", "wonderful", "holiday", "elephant"};
    string word, jumbledWord, guess;
    string hint; // store hint

    shuffle(wordList.begin(),wordList.end(),engine); // selects a random word
    word = wordList.front(); // Take the 1st word from the shuffled list
    jumbledWord = word;

    hint = "The first letter is: " + string(1, word[0]);
    shuffle(jumbledWord.begin(), jumbledWord.end(),engine);

    // Game
    GameIntroAndDisplayMsgs(jumbledWord);
    Game(word,guess,hint);


    return 0;
}
