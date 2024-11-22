#include <iostream>
#include <string>
#include <regex>
#include <conio.h> 
using namespace std;

void displayMenu(int currentOption) {
    system("cls");
    cout << "================================================================================================\n";
    cout << " ##     ##   #######   #######  ####   ###      ###      ###   ########  ####   ###   ###   ###  \n";
    cout << " ###   ###  ##     ##    ###    #####  ###      #####  #####   ###       #####  ###   ###   ### \n";
    cout << " ## # # ##  #########    ###    ### ## ###      ### #### ###   ########  ### ## ###   ###   ### \n";
    cout << " ##  #  ##  ##     ##    ###    ###  #####      ###  ##  ###   ###       ###  #####   ###   ### \n";
    cout << " ##     ##  ##     ##  #######  ###   ####      ###      ###   ########  ###    ###   #########    \n";
    cout << "================================================================================================\n";

    cout << (currentOption == 0 ? "-> " : "   ") << "1. NEW GAME          %% %%  %%%   %%  %% %%%      %%   %%  %%%  %%%%%% %% %%  \n";
    cout << (currentOption == 1 ? "-> " : "   ") << "2. EXIT              %%%%% %% %%  %%% %% %%  %    %%% %%% %  %%   %%   %%%%%  \n";
    cout << "                        %% %%  %%% % %% %%% %%%%%    %% % %%  %%% %  %%   %% %%  \n";

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "Use UP and DOWN arrow keys to navigate, ENTER to select.\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}
int main() {

    setlocale(LC_ALL, "");
    int currentOption = 0;
    char key;

    while (true) {
        displayMenu(currentOption);

        key = _getch();

        if (key == 72) { // UP arrow key
            currentOption = (currentOption - 1 + 3) % 3; // Move up, wrap around
        }
        else if (key == 80) { // DOWN arrow key