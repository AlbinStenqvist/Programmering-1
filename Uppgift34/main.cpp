#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int IncreaseFunction(int tal){
	
	tal = tal + 2;

	return tal;
		
}

int main(int argc, char** argv) {
	
	int in;	
	
	cout << "Ange ett tal: ";
	cin >> in;
	

	cout << IncreaseFunction(in);

		
	return 0;
}
