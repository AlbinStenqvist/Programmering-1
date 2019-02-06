#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int input, losenord, counter;
	
	counter = 3;
	losenord = 0000;
	
	while (counter > 0) {
		
		counter = counter - 1;
		cout << "Ange lösenordet: ";
		cin >> input;
		
		if (input == losenord) {
		
			cout << "Grattis, du får nu ta ut pengar! ";
			return 0;
		}
	}
		
	cout << "Ditt kort är nu spärrat! ";
	
	return 0;
}
