#include "Game.h"
#include <algorithm>

Game::Game(const std::string& word) : hiddenWord(word), attemptsLeft(6) {
    displayWord = std::string(hiddenWord.length(), '_');
}

bool Game::makeGuess(char letter) {
    if (std::find(guessedLetters.begin(), guessedLetters.end(), letter) != guessedLetters.end()) {
        return false;  // Letter already guessed
    }

    guessedLetters.push_back(letter);

    bool correctGuess = false;
    for (size_t i = 0; i < hiddenWord.length(); ++i) {
        if (hiddenWord[i] == letter) {
            displayWord[i] = letter;
            correctGuess = true;
        }
    }

    if (!correctGuess) {
        attemptsLeft--;
    }

    return correctGuess;
}

bool Game::isGameWon() const {
    return hiddenWord == displayWord;
}

bool Game::isGameLost() const {
    return attemptsLeft <= 0;
}

int Game::calculateScore() const {
    return attemptsLeft * 10;
}

std::string Game::getDisplayWord() const {
    return displayWord;
}

int Game::getAttemptsLeft() const {
    return attemptsLeft;
}

std::string Game::getGuessedLetters() const {
    std::string letters;
    for (char c : guessedLetters) {
        letters += c;
        letters += " ";
    }
    return letters;
}

std::string Game::getHiddenWord() const {
    return hiddenWord;
}
