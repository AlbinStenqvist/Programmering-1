#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {

int tal1, tal2, summa;
float tal3, summa2;

cout << "Ange m�ngden k�rda mil: " << endl;
cin >> tal1;
cout << "Ange m�nden mil k�rda f�rra �ret: " << endl;
cin >> tal2;

summa = tal1 - tal2;

cout << "Ange m�ngden liter bensin som anv�nts: " << endl;
cin >> tal3;

summa2 = tal3/tal1;

cout << "Antal k�rda mil detta �r: " << summa << " mil." << endl;
cout << "Antal liter bensin anv�nt: " << tal3 << " liter. " << endl;
cout << "F�rbrukning per mil: " << summa2 << endl;

}
