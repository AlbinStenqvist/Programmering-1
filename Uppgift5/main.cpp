#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	int tal1;
	
	cout << "Ange ett tal: ";
	cin >> tal1;
	
	if ( tal1 >= 45 and tal1 <= 63) {
		
		cout << "GRATTIS! DU VANN! BRA JOBBAT! ";
		
	}
	
	else {
		
		cout << "GAME OVER ";
		
	}
}
