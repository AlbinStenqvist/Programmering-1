#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int tal1;
	
	cout << "Ange ett tal: ";
	cin >> tal1;
	
	for (int i = tal1; i > 0; i--) {
		
		cout << i << endl;
		
	}
	
	return 0;
}
