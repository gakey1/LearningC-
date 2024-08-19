#ifndef GAME_H
#define GAME_H

#include <string>
#include <vector>

class Game {
private:
    std::string hiddenWord;
    std::string displayWord;
    int attemptsLeft;
    std::vector<char> guessedLetters;

public:
    Game(const std::string& word);
    bool makeGuess(char letter);
    bool isGameWon() const;
    bool isGameLost() const;
    int calculateScore() const;
    std::string getDisplayWord() const;
    int getAttemptsLeft() const;
    std::string getGuessedLetters() const;
    std::string getHiddenWord() const;
};

#endif
