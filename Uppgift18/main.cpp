#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int tal = 0, q, max;
	
	cout << "Ange mängden linjer (max 15): ";
	cin >> max;
	
	if (max > 15) {
		
		return 0;
		
	}
	
	
	for (int i; i < max; i++) {
		
		cout << "Baa";
		
		for (int counter = q; counter < tal; counter++) {
			
			cout << ", Baa";
			
		}
		cout << " " << endl;
		tal = tal+1;
		q = 0;
		
	}
	
	return 0;
}
