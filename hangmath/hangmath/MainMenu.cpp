#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

void Menu() {
    setlocale(LC_ALL, "");
    int currentOption = 0;
    char key;

    while (true) {
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

        key = _getch();

        if (key == 72) { // UP arrow key
            currentOption = (currentOption - 1 + 2) % 2; // Move up, wrap around
        }
        else if (key == 80) { // DOWN arrow key
            currentOption = (currentOption + 1) % 2; // Move down, wrap around
        }
        else if (key == '\r') { // ENTER key
            switch (currentOption) {
            case 0:
                system("cls");
                cout << "Starting the game...\n";
                return;
            case 1:
                system("cls");
                cout << "Exiting program. Goodbye!\n";
                abort();
            }
        }
    }
}