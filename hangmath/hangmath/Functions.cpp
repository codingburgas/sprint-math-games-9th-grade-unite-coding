// all the functions needed for the program will be in here.

#include <iostream>
#include "Functions.h"
#include <windows.h>
#include <conio.h>

//function that will allow to write a message that is centered, and add borders.
void Clearcmd() {
	for (int i = 0; i < 50; i++) {
		cout << " " << endl;
	}
}
//function that will allow the change of colors.
void Color(int textColor) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, textColor);
}

void Writemessage(string message, bool Top, bool Bottom) {
	if (Top)
	{

		Color(4);
		cout << "|^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|" << endl;
		Color(6);
		cout << "|";
	}
	else
	{
		Color(6);
		cout << "|";
	}

	bool front = true;
	while (message.length() < 33)
	{
		if (front)
			message = " " + message;
		else
			message = message + " ";
		front = !front;
	}
	cout << message;

	if (Bottom) {
		Color(6);
		cout << "|" << endl;
		Color(6);
		cout << "|---------------------------------|" << endl;
	}
	else {
		Color(6);
		cout << "|" << endl;
	}
}
//function to draw the hangman.
void Hangman(int guess) {
	Writemessage("|", false, false); // sets Top = false, Bottom = false.
	Writemessage(guess >= 2 ? "|" : "", false, false);
	Writemessage(guess >= 3 ? "O" : "", false, false);

	if (guess == 4)
		Writemessage("/  ", false, false);
	else if (guess == 5)
		Writemessage("/| ", false, false);
	else if (guess >= 6)
		Writemessage("/|\\", false, false); //it has two backslashes because writing one is used as an escape character.
	else
		Writemessage("", false, false);

	Writemessage(guess >= 7 ? "|" : "", false, false);
	if (guess == 8)
		Writemessage("/", false, false);
	else if (guess >= 9)
		Writemessage("/ \\", false, false);
	else
		Writemessage("", false, false);
}

//function which will show the available letters on the screen.
void Letters(string taken) {
	auto PrintLetters = [](string input, char from, char to) // uses auto because it figures out the type for me
		{
			string s;
			for (char i = from; i <= to; i++) {
				if (input.find(i) == string::npos) { // string::npos checks if the letter is not in "input"
					s += i;
					s += " ";
				}
				else {
					s += " ";
				}

			}
			Writemessage(s, false, false);
		}; // theres a semicolon because the function is declared as a variable within "void Letters"
	Writemessage("Letters Available");
	PrintLetters(taken, 'A', 'M');
	PrintLetters(taken, 'N', 'Z');
}

bool WordAndCheckWin(string word, string guessed) {
	bool won = true;
	string s;
	for (char c : word) { //this will loop once per character in word
		if (guessed.find(c) == string::npos) {
			won = false;
			s += "_ ";
		}
		else {
			s += c;
			s += " ";
		}
	}
	Writemessage(s, false);
	return won;
}

int TriesLeft(string word, string guessed)
{
	int errors = 0;
	for (char c : guessed)
	{
		if (word.find(c) == string::npos) {
			errors++;
		}
	}
	return errors;
}