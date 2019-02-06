#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	float tal1, tal2, tal3, tal4, tal5, tal6, tal7, moms, summa;
	
	moms = 1.12;
	
	cout << "Ange den första varans vikt i kg: " << endl;
	cin >> tal1;
	cout << "Ange den andra varans vikt i kg: " << endl;
	cin >> tal2;
	cout << "Ange den första varans kilopris: " << endl;
	cin >> tal3;
	cout << "Ange den andra varans kilopris: " << endl;
	cin >> tal4;
	
	tal5 = tal1 * tal3;
	tal6 = tal2 * tal4;
	tal7 = tal5 + tal6;
	summa = tal7 * moms;
	
	cout << "Totala kostnaden är " << summa << " kr. " << endl;
}
