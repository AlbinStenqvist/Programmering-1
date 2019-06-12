#include <iostream>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int funktion(int tal) {

	if(tal > 1){

		return funktion(tal - 1) + funktion(tal - 2);
	
	}
}

int main(int argc, char** argv) {

	int tal;

	for(tal; tal < 20; tal++){
	
		cout << funktion(tal) << " ";

	}

	return 0;
}
