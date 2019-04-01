#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int q, input;
	
	cout << "Ange ett tal: ";
	cin >> input;
	
	for (int i; i <= 6; i++) {
		
		if (input > 10) {
			
			input = 1;
			
		}
		
		for (int counter = q; counter < 10; counter++) {
			
			if (input - 1  == counter){
				
				cout << "_";
				
			}
			
			else {
			
			cout << "*";	
				
			}
			
			
		}
		cout << " " << endl;
		q = 0;
		input++;
	}
	
	return 0;
}
