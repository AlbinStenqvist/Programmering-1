#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int tal[7], summa;
	
	for (int counter; counter <= 7; counter++) {
		
		cout << "Ange ett tal: ";
		cin >> tal[counter];
		
		summa = tal[counter] + summa;	
	}
	
	if (summa < 50) {
		
		cout << "Summan av alla tal är inte större än 50 ";
		
	}
	
	else {
		
		cout << "Summan av alla tal är större än 50 ";
		
	}
	
	return 0;
}
