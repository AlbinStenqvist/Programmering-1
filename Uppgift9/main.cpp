#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	float tal1, tal2, tal3;
	
	cout << "Ange ett tal: ";
	cin >> tal1;
	cout << "Ange ett till tal: ";
	cin >> tal2;
	cout << "Ange ett till tal: ";
	cin >> tal3;
	
	if (tal1 > tal2 and tal1 > tal3) {
		
		cout << "Det största talet är " << tal1;
		
	}
	
	else if (tal2 > tal1 and tal2 > tal3) {
		
		cout << "Det största talet är " << tal2;
		
	}
	
	else {
		
		cout << "Det största talet är " << tal3;
		
	}
	
}
