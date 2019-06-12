#include <iostream>
#include <cstdlib>
#include <ctime>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {

	bool omstart = true;
	string input;
	
	int tiden = time(0);

	srand(tiden);

	while(omstart == true){

		int in, ai, svar;
	
		svar = rand()%100 + 1;

		cout << "Ange ett tal mellan 1 och 100: ";
		cin >> in;

		for (int i = 4; i > 0; i--){


			if(in < svar){

				cout << in << " �r l�gre �n det hemliga v�rdet" << endl;	
	
			}

			if(in > svar){
		
				cout << in << " �r st�rre �n det hemliga v�rdet" << endl;	
	
			}


			if(in == svar){
	
				cout << " YOU WIN" << endl;

				cout << "Spela igen? ja eller nej: " << endl;
				cin >> input;

				if(input == "nej"){
	
					omstart = false;	

				}

				if(input == "ja"){
	
					omstart = true;	

				}
		
				return 0;	
			}
			
			ai = rand()%100 + 1;	
			cout << "AI:n gissade p� " << ai << endl;


			if (ai < svar){
	
				cout << ai << " �r l�gre �n det hemliga v�rdet" << endl;	
	
			}
		
			if (ai > svar){
		
				cout << ai << " �r st�rre �n det hemliga v�rdet" << endl;	
	
			}

			if (ai == svar){
	
				cout << "AI:n vann";
		
				return 0;	
			}

			cin >> in;

		}
		
		cout << "GAME OVER" << endl;

		cout << "Spela igen? ja eller nej:" << endl;
		cin >> input;

		if (input == "nej"){
	
			omstart = false;	

		}

		if (input == "ja"){
	
			omstart = true;	

		}

	}
	
	return 0;

}
