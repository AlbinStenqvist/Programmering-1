#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int botten, hopp, tal;
	
	while ( tal < 10 or tal > 20) {
		
		cout << "Ange ett tal mellan 10 och 20: ";
		cin >> tal;
		
	}
	
	cout << "Ange bottenvärdet: ";
	cin >> botten;
	
	cout << "Ange hur många tal som hoppas över: ";
	cin >> hopp;
	
	for (int i = tal; i > botten; i = i - hopp) {
		
		cout << i << endl;
		
	}
	
	return 0;
}
