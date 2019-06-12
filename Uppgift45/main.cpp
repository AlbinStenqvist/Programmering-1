#include <iostream>
#include <cstdlib>
#include <ctime>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main (int argc, char** argv){

	string in;

	int tal[5], tarning;

	int tiden = time(0);

	srand(tiden);
	
	for (int i; i < 5; i++){
		
		tal[i] = rand()%6 + 1;
		cout << tal[i] << " ";
	}
	
	cout << endl << "Vill du slå om en tärning? ja/nej: ";
	cin >> in;
	
	if (in == "nej"){
	
		return 0;	
	
	}
	
	if (in == "ja"){
		
		cout << "Vilken? 1-5: ";
		cin >> tarning;	
	
	}

	tal[tarning - 1] = rand()%6 + 1;
	
	cout << tal[0] << " " << tal[1] << " " << tal[2] << " " << tal[3] << " " << tal[4];
	
	return 0;
}
