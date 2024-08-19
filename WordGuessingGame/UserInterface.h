#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "Game.h"

class UserInterface {
public:
    void displayWelcomeScreen();
    void displayInstructionScreen();
    void displayGameScreen(const Game& game);
    void displayResultScreen(bool won, const std::string& word, int score);
    char getUserInput();
};

#endif
