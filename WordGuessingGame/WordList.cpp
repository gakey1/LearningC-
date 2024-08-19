#include "WordList.h"
#include <cstdlib>

WordList::WordList() {
    words = {"apple", "banana", "cherry", "date", "elderberry"};
}

std::string WordList::getRandomWord() {
    int index = rand() % words.size();
    return words[index];
}
