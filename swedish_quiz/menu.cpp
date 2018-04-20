#include "menu.h"

void Menu::runMenu(){
	//home screen
	cout << "\n\n\t\t\t   " << "Welcome to Maddies Swedish QUIZ!! \n\n\n";

	//printing the swedish flag on the screen
	int x, y;
	int choice;

	for(x=1; x<=11; x++){
		cout << "\t\t\t   ";
		for(y=1; y<=29; y++){
			if(x == 6 || y == 6 || y == 7){
				cout << " ";
			}
			else{
				cout << "*";
			}
		}
		cout << endl;
	}

	//menu
	bool exit = false;//initializing the flag to false
	while(!exit){//going in the loop while its not exit
		cout << "\n\n\t\t\t\tPress 1 to Play Game" << endl;
		cout << "\t\t\t\tPress 2 for Instructions" << endl;
		cout << "\t\t\t\tPress 3 to Exit!" << endl;
		int choice;
		cout << "Enter your option: "; cin >> choice; cout << endl;
		if(choice == 1){
			system("cls");//cleans the screen
			playGame();//play game function
		}
		else if(choice == 2){
			system("cls");
			displayInstructions();//display the instructions function
		}
		else if(choice == 3){
			exit = true;//changing the flag to true
		}
		else{
			cout << "That is not a valid option.. Try again!" << endl;//prints invalid option on the screen
		}
	}
}
void Menu::displayInstructions(){//prints the instructions on the screen
	cout << "INSTRUCTIONS:" << endl;
	cout << "In every game, you will be asked 10 different questions.\n";
	cout << "With every question, you will be provided with 3 different potential answers.\n";
	cout << "1 of the 3 answers is correct and the other 2 are incorrect.\n";
	cout << "You make your answer with your numbers keyboard followed by your enter key.\n";
	cout << "For every correct answer you'll get one point.\n";
	cout << "In the end of the game you will be told how many points you've got.\n";
	cout << "GOOD LUCK!\n";
}
void Menu::playGame(){ //dynamic memory location
	Game* game = new Game();
	game->playGame();
	delete game; 

	//Game g;
	//g.playGame();
} 