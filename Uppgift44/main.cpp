#include <iostream>
#include <cstdlib>
#include <ctime>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main (int argc, char** argv){

	int tal[5];

	int tiden = time(0);

	srand(tiden);
	
	for (int i; i < 6; i++){
		
		tal[i] = rand()%6 + 1;
		cout << tal[i] << " ";	
	}

	return 0;
}
