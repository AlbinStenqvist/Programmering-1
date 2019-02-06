#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	int nu, bil, alder;
	
	cout << "Ange det nuvarande året: ";
	cin >> nu;
	cout << "Ange bilens årsmodell: ";
	cin >> bil;
	
	alder = nu - bil;
	
	if (alder < 5) {
		
		cout << "Välj en helförsäkring ";
		
	}
	
	else if (alder < 25) {
		
		cout << "Välj en halvförsäkring ";
		
	}
	
	else {
		
		cout << "Välj en veteranbilsförsäkring ";
		
	}
	
}
