#include "game.h"
#include "menu.h"
#include "time.h" //for the random questions function

Game::Game(){//ClassName::Constructor
	qs[0].question = "What is the capital of Sweden? \n";//question 1
	qs[0].answers[1] = "1: Stockholm \n";//answer 1
	qs[0].answers[2] = "2: Gothenburg \n";//answer 2
	qs[0].answers[3] = "3: Malmo \n";//answer 3
	qs[0].correctAnswer = 1;//initializing which one of the answers is the correct one
	qs[0].answered = false;//making sure so the same question is not asked more than one time per game

	qs[1].question = "What colours are the Swedish Flag? \n";
	qs[1].answers[1] = "1: Red and blue \n";
	qs[1].answers[2] = "2: White and blue \n";
	qs[1].answers[3] = "3: Blue and yellow \n";
	qs[1].correctAnswer = 3;
	qs[1].answered = false;

	qs[2].question = "What is the second biggest city in Sweden? \n";
	qs[2].answers[1] = "1: Stockholm  \n";
	qs[2].answers[2] = "2: Gothenburg  \n";
	qs[2].answers[3] = "3: Trollhatan  \n";
	qs[2].correctAnswer = 2;
	qs[2].answered = false;

	qs[3].question = "What is the third biggest city in Sweden? \n";
	qs[3].answers[1] = "1: Jonkoping \n";
	qs[3].answers[2] = "2: Malmo \n";
	qs[3].answers[3] = "3: Vasteras \n";
	qs[3].correctAnswer = 2;
	qs[3].answered = false;

	qs[4].question = "What country is located west of Sweden? \n";
	qs[4].answers[1] = "1: Norway \n";
	qs[4].answers[2] = "2: Denmark \n";
	qs[4].answers[3] = "3: Finland \n";
	qs[4].correctAnswer = 1;
	qs[4].answered = false;

	qs[5].question = "What country is located south of Sweden? \n";
	qs[5].answers[1] = "1: Norway \n";
	qs[5].answers[2] = "2: Denmark \n";
	qs[5].answers[3] = "3: Island \n";
	qs[5].correctAnswer = 2;
	qs[5].answered = false;

	qs[6].question = "What is Sweden called in Swedish? \n";
	qs[6].answers[1] = "1: Svarige \n";
	qs[6].answers[2] = "2: Svedala \n";
	qs[6].answers[3] = "3: Sverige \n";
	qs[6].correctAnswer = 3;
	qs[6].answered = false;

	qs[7].question = "How many people live in Sweden? \n";
	qs[7].answers[1] = "1: 9.9 million \n";
	qs[7].answers[2] = "2: 13.8 million \n";
	qs[7].answers[3] = "3: 5 million \n";
	qs[7].correctAnswer = 1;
	qs[7].answered = false;

	qs[8].question = "What is the official language in Sweden? \n";
	qs[8].answers[1] = "1: English \n";
	qs[8].answers[2] = "2: Scandinavish \n";
	qs[8].answers[3] = "3: Swedish \n";
	qs[8].correctAnswer = 3;
	qs[8].answered = false;

	qs[9].question = "What colour is not in the Swedish flag? \n";
	qs[9].answers[1] = "1: Green \n";
	qs[9].answers[2] = "2: Yellow \n";
	qs[9].answers[3] = "3: Blue \n";
	qs[9].correctAnswer = 1;
	qs[9].answered = false;

	qs[10].question = "How many more letters is the Swedish alpabet then the english? \n";
	qs[10].answers[1] = "1: 2 \n";
	qs[10].answers[2] = "2: 3 \n";
	qs[10].answers[3] = "3: 5 \n";
	qs[10].correctAnswer = 2;
	qs[10].answered = false;

	qs[11].question = "When is Swedish summer? \n";
	qs[11].answers[1] = "1: June, July, August \n";
	qs[11].answers[2] = "2: May, June, July \n";
	qs[11].answers[3] = "3: July, Aug, Sept \n";
	qs[11].correctAnswer = 1;
	qs[11].answered = false;
		
	qs[12].question = "What is the name of the youngest princess in Sweden? \n";
	qs[12].answers[1] = "1: Madeleine \n";
	qs[12].answers[2] = "2: Viktoria \n";
	qs[12].answers[3] = "3: Marie \n";
	qs[12].correctAnswer = 1;
	qs[12].answered = false;

	qs[13].question = "How many lakes are there in Sweden? \n";
	qs[13].answers[1] = "1: 95 700 \n";
	qs[13].answers[2] = "2: 37 600 \n";
	qs[13].answers[3] = "3: 113 000 \n";
	qs[13].correctAnswer = 1;
	qs[13].answered = false;

	qs[14].question = "Who is the current Prime Minister in Sweden? \n";
	qs[14].answers[1] = "1: Fredrik Reinfeldt \n";
	qs[14].answers[2] = "2: Olof Palme \n";
	qs[14].answers[3] = "3: Stefan Lofven \n";
	qs[14].correctAnswer = 3;
	qs[14].answered = false;

	qs[15].question = "What is the most common surname in Sweden? \n";
	qs[15].answers[1] = "1: Svensson \n";
	qs[15].answers[2] = "2: Westerstrom \n";
	qs[15].answers[3] = "3: Johansson \n";
	qs[15].correctAnswer = 3;
	qs[15].answered = false;
	
	qs[16].question = "Who is not Swedish? \n";
	qs[16].answers[1] = "1: Avicii \n";
	qs[16].answers[2] = "2: Renee Zellweger \n";
	qs[16].answers[3] = "3: Zlatan Ibrahimovic \n";
	qs[16].correctAnswer = 2;
	qs[16].answered = false;

	qs[17].question = "What is the Swedish currency called? \n";
	qs[17].answers[1] = "1: Krona \n";
	qs[17].answers[2] = "2: Euro \n";
	qs[17].answers[3] = "3: Swedish dollar \n";
	qs[17].correctAnswer = 1;
	qs[17].answered = false;

	qs[18].question = "How many inhabitants live i Sweden per square km? \n";
	qs[18].answers[1] = "1: 12 \n";
	qs[18].answers[2] = "2: 43 \n";
	qs[18].answers[3] = "3: 22 \n";
	qs[18].correctAnswer = 3;
	qs[18].answered = false;

	qs[19].question = "Which companies are originally Swedish? \n";
	qs[19].answers[1] = "1: Saab, Electrolux, Ericsson, IKEA \n";
	qs[19].answers[2] = "2: H&M, Target, Victoria Secret \n";
	qs[19].answers[3] = "3: IKEA, Volvo, McDonalds \n";
	qs[19].correctAnswer = 1;
	qs[19].answered = false;

	qs[20].question = "Which invention made Alfred Nobel world famous? \n";
	qs[20].answers[1] = "1: Gunpowder \n";
	qs[20].answers[2] = "2: Dynamite \n";
	qs[20].answers[3] = "3: Nitroglycerin \n";
	qs[20].correctAnswer = 2;
	qs[20].answered = false;

	qs[21].question = "In which Nordic country is Swedish the second official language? \n";
	qs[21].answers[1] = "1: Norway \n";
	qs[21].answers[2] = "2: Finland \n";
	qs[21].answers[3] = "3: England \n";
	qs[21].correctAnswer = 2;
	qs[21].answered = false;
	
	qs[22].question = "What do the letters of ABBA stand for? \n";
	qs[22].answers[1] = "1: The names of the group’s pets \n";
	qs[22].answers[2] = "2: the group’s children’s names \n";
	qs[22].answers[3] = "3: The group’s first names \n";
	qs[22].correctAnswer = 2;
	qs[22].answered = false;

	qs[23].question = "What is Vasaloppet? \n";
	qs[23].answers[1] = "1: A skiing race \n";
	qs[23].answers[2] = "2: A boat race \n";
	qs[23].answers[3] = "3: A mountain \n";
	qs[23].correctAnswer = 1;
	qs[23].answered = false;

	qs[24].question = "What are you about to eat if you are offered kottbullar? \n";
	qs[24].answers[1] = "1: Chocolate \n";
	qs[24].answers[2] = "2: Cake \n";
	qs[24].answers[3] = "3: Meatballs \n";
	qs[24].correctAnswer = 1;
	qs[24].answered = false;

	qs[25].question = "What is the southern most spot in Sweden called? \n";
	qs[25].answers[1] = "1: Lillehok \n";
	qs[25].answers[2] = "2: Smygehuk \n";
	qs[25].answers[3] = "3: Smultronstallet \n";
	qs[25].correctAnswer = 2;
	qs[25].answered = false;

	qs[26].question = "What is Hakan Hellstrom famous for? \n";
	qs[26].answers[1] = "1: He is the winner of Swedish Masterchef \n";
	qs[26].answers[2] = "2: He is famous for his pop music \n";
	qs[26].answers[3] = "3: He is the previous Prime Minister of Sweden \n";
	qs[26].correctAnswer = 2;
	qs[26].answered = false;

	qs[27].question = "What is the coldest temperature ever recorded in Sweden? \n";
	qs[27].answers[1] = "1: -42.6 \n";
	qs[27].answers[2] = "2: -21.8 \n";
	qs[27].answers[3] = "3: -39.1 \n";
	qs[27].correctAnswer = 1;
	qs[27].answered = false;

	qs[28].question = "How many islands are in Sweden? \n";
	qs[28].answers[1] = "1: 78 988 \n";
	qs[28].answers[2] = "2: 1208 \n";
	qs[28].answers[3] = "3: 221 831 \n";
	qs[28].correctAnswer = 3;
	qs[28].answered = false;

	qs[29].question = "What do you eat for Christmas in Sweden? \n";
	qs[29].answers[1] = "1: Herring and eggs \n";
	qs[29].answers[2] = "2: Mini sausages, meat balls, beetroot salad  \n";
	qs[29].answers[3] = "3: All above \n";
	qs[29].correctAnswer = 3;
	qs[29].answered = false;

	qs[30].question = "What is common to find in a Swedish supermarket? \n";
	qs[30].answers[1] = "1: Vegemite \n";
	qs[30].answers[2] = "2: Caviar in a tube \n";
	qs[30].answers[3] = "3: Horse fillet \n";
	qs[30].correctAnswer = 1;
	qs[30].answered = false;
}
void Game::playGame(){
	
	//intializing all the varibles 
	string name; 
	int answer; 
	int counter = 1;//counting amount of questions
	int r = 0;//r = choosing randomly what question is going to be asked. 
	int i = 1; //i = Printing the number of the question on the screen
	int points = 0; //counting how many points the player has 

	//to ask questions randomly in the loop
	srand(time(NULL));

	//asking the players name wish good luck and print the name in the end
	cout << "What's your name player? ";
	cin >> name;
	cout << "Okey, Good luck " << name << "!\n\n"; 
	Sleep(1500);//makes the screen sleep for 1.5 second
	system("cls");//closing the screen

	while(counter < 11){//while loop to make sure the game is going to be 10 questions
		do{
			r = rand() % 31 ; //0 - 30. Initializing int r so it asks randomly questions
		}while(qs[r].answered == true);//making sure the same question are not being asked more than ones
	cout << "Question " << i << endl << endl; //printing question and the number of the question on the screen
		cout << qs[r].question << qs[r].answers[1] << qs[r].answers[2] << qs[r].answers[3];//printing randomly questions on the screen
	cout << "Enter your answer: "; cin >> answer;//asking the player for the answer and letting them enter the answer
	if(answer==qs[r].correctAnswer){
		points++;//increasing and storing the points if the answer is correct
	}
	cout << endl;
	counter++;//to make sure only 10 questions being asked
	i++;//to print the correct number of the question
	system("cls"); //cleans the screen
	qs[r].answered = true;//letting the program know that the question has been asked so its not being asked again
	}
	if(points < 4){//printing something on the screen if the player has 0-3 correct answers
		cout << "Hey " << name << ", you have no idea about Sweden, you suck!! You only scored " << points << " of 10";
	}
	else if(points > 3 && points < 8) {//printing something on the screen if the player has 4-7 correct answers
		cout << "Well done " << name << ", you know a little bit of Sweden, you scored " << points << " of 10";
	}
	else {//printing something on the screen if the player has 8-10 correct answers
		cout << "WOW, you're great " << name << "! I think you're Swedish! You scored " << points << " of 10";
	}
	
	cout << "\n\nDo you wanna play again? Press any key to get back to the menu.. \n\n";
	
	system("pause>nul");//pausing the screen but with no standard message
}
