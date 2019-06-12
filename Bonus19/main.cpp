#include <iostream>
#include <cstdlib>
#include <ctime>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {

	bool omstart = true;
	string input;

	while(omstart == true){
		
		int tiden = time(0);

		srand(tiden);

		int in, ai, svar, aimin = 1, aimax = 100;
	
		svar = rand()%100 + 1;

		cout << "Ange ett tal mellan 1 och 100: ";
		cin >> in;

		for (int i = 4; i > 0; i--){


			if(in < svar){

				cout << in << " är lägre än det hemliga värdet" << endl;	
				
				if(aimin - in < 0){
					
					aimin = in + 1;
					
				}
				
			}

			if(in > svar){
		
				cout << in << " är större än det hemliga värdet" << endl;	
				
				if(aimax - in > 0){
					
					aimax = in - 1;
					
				}
				
			}


			if(in == svar){
	
				cout << " YOU WIN" << endl;

				cout << "Spela igen? ja eller nej: " << endl;
				cin >> input;

				if(input == "nej"){
	
					omstart = false;	
					return 0;
				}

				if(input == "ja"){
	
					omstart = true;	
					break;
					
				}
			
			}
			
			if(in != svar){
				
				ai = rand()%(aimax -aimin) + aimin;		
				cout << "AI:n gissade på " << ai << endl;	
				
				if (ai < svar){
	
					cout << ai << " är lägre än det hemliga värdet" << endl;
					aimin = ai;	
	
				}
		
				if (ai > svar){
		
					cout << ai << " är större än det hemliga värdet" << endl;	
					aimax = ai;
				
				}

				if (ai == svar){
	
					cout << "AI:n vann" << endl;
					
					break;
				}
			}

			cin >> in;

		}
		
		if(in != svar){
			
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
	}
	
	return 0;

}
