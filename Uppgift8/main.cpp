#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	int nu, bil, alder;
	
	cout << "Ange det nuvarande �ret: ";
	cin >> nu;
	cout << "Ange bilens �rsmodell: ";
	cin >> bil;
	
	alder = nu - bil;
	
	if (alder < 5) {
		
		cout << "V�lj en helf�rs�kring ";
		
	}
	
	else if (alder < 25) {
		
		cout << "V�lj en halvf�rs�kring ";
		
	}
	
	else {
		
		cout << "V�lj en veteranbilsf�rs�kring ";
		
	}
	
}
