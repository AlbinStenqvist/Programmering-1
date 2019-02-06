#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int tal1;
	
	cout << "Ange ett tal: ";
	cin >> tal1;
	
	while (tal1 > 0) {
		
		cout << tal1 << " ";
		tal1 = tal1 - 1;
		
	}
	
	return 0;
}
