#include <iostream>
#include <math.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	float tal1, tal2, tal3, summa;
	
	cout << "Ange den första kateten: ";
	cin >> tal1;
	cout << "Ange den andra kateten: ";
	cin >> tal2;
	
	tal3 = tal1 * tal1 + tal2 * tal2;
	summa = sqrt (tal3);
	
	cout << "Hypotenusan är " << summa;
	
	
}
