#include <iostream>
#include <string>
#include "board.cpp"

using namespace std;

int main() {

	int numX = 0 , numY = 0;
	char again = 'Y';
	bool foundMine = false;
 
 Board chess;
 
 chess.setup();
 
 do {
	chess.print();
	chess.userInput(numX, numY);
	//chess.print();
	foundMine = chess.checkMine(foundMine);
	if (foundMine == true){
		cout << "Looks like it's game over!\n";
		break;
	}
 
	cout << "\nYou have not found the mine. Try again? (Y/n)";
	cin >> again;	
 } while ('n' != again);
   

 
 
	
return 0;
}