#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int tal1, min, hopp;
	
	for (int )
	
	cout << "Ange talet som det ska räknas ner till: ";
	cin >> min;
	
	cout << "Ange mängden tal som ska hoppas över för varje steg: ";
	cin >> hopp;
	
	for (int i = tal1; i > min; i = i - hopp) {
		
		cout << i << endl;
		
	}
	
	return 0;
}
