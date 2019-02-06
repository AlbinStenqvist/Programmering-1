#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	float timmar, lon;
	
	cout << "Ange antal timmar du arbetat: ";
	cin >> timmar;
	
	if (timmar < 160) {
		
		lon = timmar * 100;
		
	}
	
	else if (timmar > 240) {
		
		lon = 28000;
		
	}
	
	else {
		
		lon = 16000 + (timmar - 160) * 150;
		
	}
	
	cout << "Du blir betald " << lon << "kr ";
	
}
