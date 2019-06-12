#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int tal[5];
	bool is_same = false;

	for (int i = 0; i < 5; i++) {
	
		cout << "Ange ett tal: ";
		cin >> tal[i];

	}	

	for (int j = 0; j < 5 ; j++) {

		for (int k = 0; k < 5 ; k++) { 		
				
			if (k != j) {
						
				if (tal[j] == tal[k]) {
						
					cout << tal[j] << " är lika ";	
						
					is_same = true;
						
					if (is_same == true) {
	
					return 0;
	
					}
				}
			}	
		}		
	}	

	if(is_same == false) {
	
		cout << "Inga tal är samma";
	
	}

	return 0;
}
