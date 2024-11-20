// all the functions needed for the program will be in here.

#include <iostream>
#include "Functions.h"

//function that will allow to write a message that is centered, and add borders.
void Writemessage(string message, bool Top, bool Bottom) {
	if (Top)
	{
		cout << "|---------------------------------|" << endl;
		cout << "|";
	}
	else
	{
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
		cout << "|" << endl;
		cout << "|---------------------------------|" << endl;
	}
	else {
		cout << "|" << endl;
	}
}
//function to draw the hangman.
void Hangman(int guess) { // guess is a variable that tracks mistakes.
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