#include <ctime> // for time
#include <cstdlib> // for srand
#include "HangmanGame.h"
#include "MainMenu.h"
using namespace std;

int main() {

	void displayMenu(int currentOption);
	int Options();
			srand(static_cast<unsigned int>(time(0)));
			PlayHangman();
			return 0;
	}
