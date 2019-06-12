#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int WhileMax (int tal){
	
	int in;

	cout << "Ange ett tal: ";
	cin >> in;

	while (in > tal){

		cout << "Ange ett tal: ";
		cin >> in;
	}
}

int main (int argc, char** argv){

	WhileMax(9);
	
	return 0;
}
