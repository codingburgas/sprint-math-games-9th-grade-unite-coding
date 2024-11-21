// this is where all the words for the game will be kept.

#include "Words.h"
#include <cstdlib> // for rand

string RandomWord() {
	const string word[] = { "MATH", "ADDITION", "SUBTRACTION", "DIVISION", "MULTIPLICATION", "SQRT", "FRACTION", "PERCENT", "AREA", "TRIANGLE", "CIRLCE", "SQUARE", "RECTANGLE", "ANGLE", "FUNCTION" };
	const int wordCount = 15;
	int randomIndex = rand() % wordCount; // generates a random index
	return word[randomIndex]; //returns the word that was generatedc
}
