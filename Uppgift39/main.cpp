#include <iostream>
#include <cstdlib>
#include <ctime>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main (int argc, char** argv){

	int tal1, tal2;
	
	int tiden = time(0);

	srand(tiden);
	
	tal1 = rand() %10 + 1;
	tal2 = rand() %10 + 1;

	if(tal1 > tal2){
	
		cout << tal1 << endl << tal2;
	
	}
	
	else if(tal2 > tal1){
	
		cout << tal2 << endl << tal1;	
	
	}

	return 0;
}
