#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
using namespace std;

void Writemessage(string message, bool printTop = true, bool printBottom = true);
void setColor(int textColor);
void Hangman(int guess);
void Letters(string taken);
bool WordAndCheckWin(string word, string guessed);
int TriesLeft(string word, string guessed);
void Clearcmd();
#endif

