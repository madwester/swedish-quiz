#include <iostream>
#include <string>
#include <stdlib.h>//for random questions
#include <Windows.h>//for screen sleeping
#include "questions.h"

using namespace std;

#ifndef GAME //wrapping the content to prevent the code from being included twice
#define GAME

class Game {//creating a class for the game
private:
	Ques qs[31];//creating an array for all the questions
public:
	Game();
	void playGame();
};

#endif //end of wrapping