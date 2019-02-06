#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int input, tal1, summa;
	
	input = 15;
	
	while (input < 0 or input > 12) {
		
		cout << "Ange ett av de första tolv heltalen: ";
		cin >> input;
		
	}
	
	tal1 = 0;
	
	while (tal1 <= 12) {
		
		summa = tal1 * input;
		cout << tal1 << " x " << input << " = " << summa << endl;
		tal1 = tal1 + 1;
		
	}
	
	return 0;
}
