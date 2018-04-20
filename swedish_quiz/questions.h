#include <iostream>
#include <string>

using namespace std;

#ifndef QUES //wrapping the content to prevent the code from being included twice
#define QUES

//question class
class Ques {
public: 
		string question; 
		string answers[4];//array for the answers
		int correctAnswer;//to be able to initialize whick one of the answers per question is correct
		bool answered;//to make sure every question only being asked ones
};

#endif //end of wrapping