#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int tal;
	
	bool run = true;
	
	while (run == true) {
		
		cout << "Vill du avsluta programmet? Skriv 1: ";
		cin >> tal;
		
		if (tal == 1) {
			
			run = false;
			
		}
		
	}
	
	return 0;
}
