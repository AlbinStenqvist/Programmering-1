#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int tal1, tal2;
	
	tal1 = 10001;
	
	while (tal1 > 10000) {
		
		cout << "Ange kostnaden för varorna: ";
		cin >> tal1;
		
	}
	
	cout << "Ange mängden betalat: ";
	cin >> tal2;
	
	tal1 = tal2 - tal1;
	
	cout << "Totalt " << tal1 << " kr";
		
	tal2 = tal1 / 1000;
	tusen = floor (tal2);
	if (tusen != 0) {
		
		tal1 = tal1 % 1000;
		
	}
	
	
	
	return 0;
}
