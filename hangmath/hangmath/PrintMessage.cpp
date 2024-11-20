#include <iostream>
#include "PrintMessage.h"
using namespace std;

int PrintMessage(string message, bool HmTop, bool HmBottom)
{
	//string message;
	//bool HmTop = true; 
	//bool HmBottom = true;
    {
        if (HmTop)
        {
            cout << "+---------------------------------+" << endl;
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
        cout << message.c_str();

        if (HmBottom)
        {
            cout << "|" << endl;
            cout << "+---------------------------------+" << endl;
        }
        else
        {
            cout << "|" << endl;
        }
    }



}