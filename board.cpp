#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;

class Board {
	private:
  static const int B_SIZE = 8;
  char spaces[B_SIZE][B_SIZE];
bool occupied[B_SIZE][B_SIZE];
bool userPosition[B_SIZE][B_SIZE];
	
	
	public:
	
	void setup(){
	 for(int i=0;i<B_SIZE;i++){
	  for(int j=0;j<B_SIZE;j++) {
		spaces[i][j] = '-';
		occupied[i][j] = false;
		userPosition[i][j] = false;
	  }
	}
	
	
	srand(time(NULL));
	 int x = rand() % B_SIZE;
	 srand(time(NULL));
	 int y = rand() % B_SIZE;
	 
	 occupied[x][y] = true;
	 //cout << "this is my random x and y coordinate" << x << " " << y << endl;
	}
	
	 bool checkMine(bool x){
		 x = false;
	  for(int i=0;i<B_SIZE;i++){

		for(int j=0;j<B_SIZE;j++) {
		if ((userPosition[i][j] == true) && (occupied[i][j] == true)) {
			cout << "You stepped on the mine\n";
			x = true;
			break;
		//	return x;
		}
		// else {
		 // x = false;
		 // //return x;
		 // }
		 // x = false;
		 // return x;
		// }
	  }
	 }
	  return x;
	}
		
	
	void userInput(int& x , int& y) {
		x = 0 , y = 0;
		cout << endl;
		cout << " Please enter your x y coordinate.\n ";
		cin >> x >> y;
		x = x - 1;
		y = y - 1;
		userPosition[y][x] = true;
	}
	
	void print(){
		cout << " 1 2 3 4 5 6 7 8 \n";
	  for(int i=0;i<B_SIZE;i++){
		cout << endl;
		cout << i+1 << " ";
		for(int j=0;j<B_SIZE;j++) {
			if ((userPosition[i][j] == true) && (occupied[i][j] == true)){
			//	cout << " You stepped on the mine!\n";
			//	break;
			}
			if (userPosition[i][j] == true){
			 spaces[i][j] = 'X';
			 cout << spaces[i][j] << " ";
			}else 
			cout << spaces[i][j] << " ";
			

	  }
 }
 	
		
	}
};