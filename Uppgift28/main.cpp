#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	char metod;
	float tal1, tal2, summa;

	cout<<"Ange en uträkning: ";
	cin >> tal1;
	cin >> metod;
	cin >> tal2;
	
	if (metod == '+' ){
	
		summa = tal1 + tal2;

	}

	if (metod == '-'){
	
		summa = tal1 - tal2;
	
	}
	
	if (metod == '*'){
	
		summa = tal1 * tal2;
	
	}

	if (metod == '/'){
	
		summa = tal1 / tal2; 
	
	}
	
	cout << tal1 << " " << metod << " " << tal2 << " = " << summa; 
	
	return 0;
}
