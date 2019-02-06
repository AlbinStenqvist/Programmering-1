#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	float tal1, tal2;
	
	cout << "Ange ett tal: ";
	cin >> tal1;
	cout << "Ange ett till tal: ";
	cin >> tal2;
	tal1 = tal1 + tal2;
	
	cout << "Ange ett till tal: ";
	cin >> tal2;
	tal1 = tal1 + tal2;
	
	cout << "Ange ett till tal: ";
	cin >> tal2;
	tal1 = tal1 + tal2;
	
	cout << "Ange ett till tal: ";
	cin >> tal2;
	tal1 = tal1 + tal2;
	
	tal1 = tal1/5;
	
	cout << "Medelvärdet av talen är " << tal1;
	
}
