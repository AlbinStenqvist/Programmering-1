#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int tal[5] = {5,10,15,20,25}, svar;
	
	
	for (int i = 0; i < 5; i--) {
		
		cout << "Ange ett tal: ";
		cin >> svar;
		
		for (int j = 0; j < 5; j++) {
			
			if (tal[j] == svar) {
				
				cout << "Grattis";
					
				return 0;
				
			}	
			
		}
		
		
	}
	
	
}
