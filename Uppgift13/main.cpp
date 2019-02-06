#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int tal1, hopp;
	
	while (tal1 < 10 or tal1 > 20) {
		
		cout << "Ange ett tal mellan 10 och 20: ";
		cin >> tal1;
		
	}
	
	cout << "Ange mängden tal som ska hoppas över för varje steg: ";
	cin >> hopp;
	
	while (tal1 > -10) {
		
		cout << tal1 << endl;
		tal1 = tal1 - hopp;
		
	}
	
	return 0;
}
