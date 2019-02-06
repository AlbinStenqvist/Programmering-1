#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	float raknesatt, tal1, tal2, summa;
	
	cout << "1 = + " << endl << "2 = - " << endl << "3 = * " << endl << "4 = /" << endl;
	cout << "Ange räknesätt: ";
	cin >> raknesatt;
	
	cout << "Ange det första talet: ";
	cin >> tal1;
	cout << "Ange det andra talet: ";
	cin >> tal2;
	
	if (raknesatt == 1) {
		
		summa = tal1 + tal2;
		cout << tal1 << " + " << tal2 << " = " << summa;
		
	}
	
	else if (raknesatt == 2) {
		
		summa = tal1 - tal2;
		cout << tal1 << " - " << tal2 << " = " << summa;
	
	}

	else if (raknesatt == 3) {
		
		summa = tal1 * tal2;
		cout << tal1 << " * " << tal2 << " = " << summa;
	
	}

	else if (raknesatt == 4) {
		
		summa = tal1 / tal2;
		cout << tal1 << " / " << tal2 << " = " << summa;
		
	}
	
}
