#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int tal;
	
	bool increase = true;
	
	while (tal != -1) {
		
		cout << tal << " ";
		
		if (tal == 7) {
			
			increase = false;
			
		}
		
		if (increase == false) {
			
			tal--;
			
		}
		
		else {
			
			tal++;
			
		}
		
	}
	
	return 0;
}
