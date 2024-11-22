#ifndef UTILITIES_H
#define UTILITIES_H

#include <string>
using namespace std;

void Writemessage(string message, bool printTop = true, bool printBottom = true);
void Hangman(int guess);
void Letters(string taken);
bool WordAndCheckWin(string word, string guessed);
int TriesLeft(string word, string guessed);
void Clearcmd();
#endif