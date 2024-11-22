//where all the functions will be in one function that works
#include <iostream>
#include <string>
#include <cctype> // for toupper
#include "HangmanGame.h"
#include "Functions.h"
#include "Words.h"

using namespace std;

void PlayHangman() {
	string guesses;
	string wordToGuess = RandomWord();
	int tries = 0;
	bool win = false;

	do {
		Clearcmd();
		Writemessage("Hangmath");
		Hangman(tries);
		Letters(guesses);
		Writemessage("Type in the word");
		win = WordAndCheckWin(wordToGuess, guesses);

		if (win)
			break;

		char x;
		cout << "> ";
		cin >> x;

		x = toupper(x); //forces letter you wrote to be capital

		if (guesses.find(x) == string::npos)
			guesses += x;

		tries = TriesLeft(wordToGuess, guesses);

	} while (tries < 10);
	if (win) {

		Writemessage("WINNER!! GOOD JOB!!");
	}
	else {
		Writemessage("LOSER... TRY AGAIN!");
		Writemessage("Your word was: " + wordToGuess);
	}
}
