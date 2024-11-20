#include <ctime>
#include <cstdlib>
#include "Functions.h"
using namespace std;

int main() {
	srand(static_cast<unsigned int>(time(0)));
	Writemessage("test");
}
