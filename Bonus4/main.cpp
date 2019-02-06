#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	float tal1, tal2, summa;
	
	cout << "Ange ett tal: ";
	cin >> tal1;
	cout << "Ange ett till tal: ";
	cin >> tal2;
	
	summa = tal1 - tal2;
	
	if (summa == 0) {
		
		cout << "Grattis!";
		
	}
	
	else if (summa <= 5 and summa >= -5 and summa != 0) {
		
		cout << "Close but no cigar!";
		
	}
	
	else {
		
		cout << "Not even close!";
		
	}
	
}
