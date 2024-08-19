#include "UserInterface.h"
#include <iostream>

void UserInterface::displayWelcomeScreen() {
    std::cout << "=======================\n";
    std::cout << "Welcome to Word Guess!\n";
    std::cout << "=======================\n";
}

void UserInterface::displayInstructionScreen() {
    std::cout << "How to Play:\n";
    std::cout << "1. Guess letters to reveal the hidden word.\n";
    std::cout << "2. You have 6 attempts to guess the word.\n";
    std::cout << "3. Good luck!\n\n";
}

void UserInterface::displayGameScreen(const Game& game) {
    std::cout << "Word: " << game.getDisplayWord() << "\n";
    std::cout << "Attempts left: " << game.getAttemptsLeft() << "\n";
    std::cout << "Guessed letters: " << game.getGuessedLetters() << "\n\n";
}

void UserInterface::displayResultScreen(bool won, const std::string& word, int score) {
    if (won) {
        std::cout << "Congratulations! You guessed the word: " << word << "\n";
        std::cout << "Your score: " << score << " points\n";
    } else {
        std::cout << "Game Over. The word was: " << word << "\n";
    }
}

char UserInterface::getUserInput() {
    char guess;
    std::cout << "Enter a letter: ";
    std::cin >> guess;
    return tolower(guess);
}

