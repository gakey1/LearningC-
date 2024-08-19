#ifndef WORDLIST_H
#define WORDLIST_H

#include <vector>
#include <string>

class WordList {
private:
    std::vector<std::string> words;

public:
    WordList();
    std::string getRandomWord();
};

#endif
