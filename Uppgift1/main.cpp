#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
int tal1, tal2, summa;

cout << "Ange mängden mil bilen åkt: " << endl;
cin >> tal1;
cout << "Ange mängden mil bilen hade åkt förra året: " << endl;
cin >> tal2;

summa = tal1 - tal2;

cout << "Bilen har åkt " << summa << " mil de senaste året. ";

}
