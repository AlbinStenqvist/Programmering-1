#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {

int tal1, tal2, summa;
float tal3, summa2;

cout << "Ange mängden körda mil: " << endl;
cin >> tal1;
cout << "Ange mänden mil körda förra året: " << endl;
cin >> tal2;

summa = tal1 - tal2;

cout << "Ange mängden liter bensin som använts: " << endl;
cin >> tal3;

summa2 = tal3/tal1;

cout << "Antal körda mil detta år: " << summa << " mil." << endl;
cout << "Antal liter bensin använt: " << tal3 << " liter. " << endl;
cout << "Förbrukning per mil: " << summa2 << endl;

}
