#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int tal, tal2 = 1, summa, summa2;
	
	cout << tal << endl << tal2 << endl;
	
	for (int counter; counter < 18; counter++) {
		
		summa = tal + tal2;
		tal = tal2;
		summa2 = summa2 + summa;
		tal2 = summa;
		
		cout << summa << endl;
		
	}
	
	summa2 = summa2 + 1;
	
	cout << endl << summa2;
	
	return 0;
}
