#include <iostream>
#include <cstdlib>
#include <ctime>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {

	int tiden = time(0);

	srand(tiden);

	int in, svar;
	
	svar = rand()%100 + 1;
	
	cout << "Ange ett tal mellan 1 och 100: ";
	cin >> in;

	for (int i = 4; i > 0;i--){


		if (in < svar){
	
	
			cout << in << " är lägre än det hemliga värdet" << endl;	
	
		}

		if( in > svar){
		
			cout << in << " är större än det hemliga värdet" << endl;	
	
		}


		if (in == svar){
	
			cout << "YOU WIN";
		
			return 0;	
		}

		cin >> in;

	}


	cout << "GAME OVER";

	return 0;
}
