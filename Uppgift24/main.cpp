#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int tal[10];
	
	for (int counter; counter < 10; counter++) {
		
		cout << "Ange ett tal: ";
		cin >> tal[counter];
		
	}
	
	for (int i = 0; i < 10; i++) {
		
		cout << tal[i] << endl;
		
	}
	
	return 0;
}
