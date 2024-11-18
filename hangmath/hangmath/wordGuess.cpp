#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include "wordGuess.h"
using namespace std;

int rng(int min, int max) {
    return min + (rand() % (max - min + 1));
}

void wordGuess() {
    string letter;
    vector<string> wordList = { "apple", "banana", "cherry", "date", "elderberry" };

    srand(time(0));

    int index = rng(0, 4);

    cout << "Random number is: " << index << endl;

    cout << "the word of the index is: " << wordList[index] << '\n';
    int letterCount = wordList[index].length();
    cout << "The game is starting, your word has " << letterCount << " letters" << endl;
    cout << "Enter a letter ";
    char letterToFind;
    cin >> letterToFind;
    size_t foundPos = wordList[index].find(letterToFind);
    if (foundPos != string::npos) {
        cout << "The letter '" << letterToFind << "' is found at position(s):";

        for (size_t i = 0; i < wordList[index].length(); ++i) {
            if (wordList[index][i] == letterToFind) {
                cout << " " << i + 1;
            }
        }
        cout << std::endl;
    }
    else {
        cout << "The letter '" << letterToFind << "' is not found in the word." << std::endl;
    }
}