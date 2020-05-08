//tic_tac_to by AidinAF 
#include <iostream>
using namespace std;

int main() {
	//declearations
	const char x = 'X';//to replace in slots
	const char y = 'O';//to replace in slots
	char player = x;//player at role. player X starts the game
	bool winner = false;//end game declaration [to be developed]
	int p = 0;//[input variable] _ slot number
	char P1 = '1', P2 = '2', P3 = '3', P4 = '4', P5 = '5', P6 = '6', P7 = '7', P8 = '8', P9 = '9';
	
	system("color a");

	while (winner == false) { //until game is over _ [winner] to be developed
		//print out playing board
		cout << "\n\n\t|\t" << P1 << "\t|\t" << P2 << "\t|\t" << P3 << "\t|" << endl;
		cout << "\n\n\t|\t" << P4 << "\t|\t" << P5 << "\t|\t" << P6 << "\t|" << endl;
		cout << "\n\n\t|\t" << P7 << "\t|\t" << P8 << "\t|\t" << P9 << "\t|" << endl;
		
		cout << "\n\tplayer " << player << " choose your spot please: ";
		
		cin >> p; //receive slot number

		switch (p) //based on the input replace X or O _ or declare error
		{
		case 1:
			if (P1 == '1') {
				P1 = player;
				system("cls");
				break;
			}
			else {
				cout << "Location not valid!!!";
				continue;
			}

		case 2:
			if (P2 == '2') {
				P2 = player;
				system("cls");
				break;
			}
			else {
				cout << "Location not valid!!!";
				continue;
			}
		case 3:
			if (P3 == '3') {
				P3 = player;
				system("cls");
				break;
			}
			else {
				cout << "Location not valid!!!";
				continue;
			}
		case 4:
			if (P4 == '4') {
				P4 = player;
				system("cls");
				break;
			}
			else {
				cout << "Location not valid!!!";
				continue;
			}
		case 5:
			if (P5 == '5') {
				P5 = player;
				system("cls");
				break;
			}
			else {
				cout << "Location not valid!!!";
				continue;
			}
		case 6:
			if (P6 == '6') {
				P6 = player;
				system("cls");
				break;
			}
			else {
				cout << "Location not valid!!!";
				continue;
			}
		case 7:
			if (P7 == '7') {
				P7 = player;
				system("cls");
				break;
			}
			else {
				cout << "Location not valid!!!";
				continue;
			}
		case 8:
			if (P8 == '8') {
				P8 = player;
				system("cls");
				break;
			}
			else {
				cout << "Location not valid!!!";
				continue;
			}
		case 9:
			if (P9 == '9') {
				P9 = player;
				system("cls");
				break;
			}
			else {
				cout << "Location not valid!!!";
				continue;
			}

		case 999: // RESET GAME ***[player should be initialized!!!!]***
			system("color 7");
			P1 = '1', P2 = '2', P3 = '3', P4 = '4', P5 = '5', P6 = '6', P7 = '7', P8 = '8', P9 = '9';
			system("cls");
			continue;

		default: //input out of declared values ***[PRODUCES ERROR IF INPUT IS OTHER THAN int]***
			cout << "NOT VALID!!!";
			continue;
		}
		//switch players for next round
		if (player == x) { 
			player = y;
			system("color b");
		}
		else {
			player = x;
			system("color a");
		}
		//winner declaration [to be developed]
		/*if (P1 != '1' & P2 != '2'&P3 != '3'&P4 != '4'&P5 != '5'&P6 != '6'&P7 != '7'&P8 != '8'&P9 != '9'){
			//break;
		}*/
	}
	system("pause");
}
