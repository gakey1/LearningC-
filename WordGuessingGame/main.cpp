#include "WordList.h"
#include "Game.h"
#include "UserInterface.h"
#include <ctime>
#include <cstdlib>

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    WordList wordList;
    UserInterface ui;

    ui.displayWelcomeScreen();
    ui.displayInstructionScreen();

    std::string randomWord = wordList.getRandomWord();
    Game game(randomWord);

    while (!game.isGameWon() && !game.isGameLost()) {
        ui.displayGameScreen(game);
        char guess = ui.getUserInput();
        game.makeGuess(guess);
    }

    bool won = game.isGameWon();
    int score = game.calculateScore();
    ui.displayResultScreen(won, game.getHiddenWord(), score);

    return 0;
}

