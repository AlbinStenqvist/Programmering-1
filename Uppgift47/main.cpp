#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

struct boll{
	
	int radien;
	string fargen;
	int vikten;	

};

int main (int argc, char** argv){

	int radie,vikt;
	string farg;


	cout << "Ange radien, färgen och vikten: ";
	cin >> radie;
	cin >> farg;
	cin >> vikt;
	cout << endl;

	boll boll1 = {radie ,farg, vikt};

	boll boll2 = {radie,farg,vikt};

	boll2.radien = radie * 2;
	boll2.vikten = vikt * 8;

	cout << "Boll 1:" << endl;
	cout << "Radie: " << boll1.radien << endl;
	cout << "Färg: " << boll1.fargen << endl;
	cout << "Vikt: " << boll1.vikten << endl;

	cout << endl << "Boll 2:" << endl;
	cout << "Radie: " << boll2.radien << endl;
	cout << "Färg: " << boll2.fargen << endl;
	cout << "Vikt: " << boll2.vikten << endl;

	return 0;
}
