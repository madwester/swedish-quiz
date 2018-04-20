#include <iostream>
#include <string>
#include "game.h"

using namespace std;

#ifndef MENU //wrapping the content to prevent the code from being included twice
#define MENU

class Menu{ //the menu class with the functions
public:
	void runMenu(); //run menu function
	void displayInstructions(); //display instructions function
	void playGame(); //play game function
};

#endif //end of wrapping