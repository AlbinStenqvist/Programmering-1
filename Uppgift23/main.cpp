#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int tal[10] = {1,2,3,4,5,6,7,8,9,10};
	
	for (int counter = 9; counter >= 0; counter--) {
		
		cout << tal[counter] << endl;
		
	}
	
	return 0;
}
