#include <iostream>
#include <cstdlib>
#include <ctime>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main (int argc, char** argv){

	int tiden = time(0);

	srand(tiden);

	int max, min, out;
	
	cout << "Ange det största talet: ";
	cin >> max;
	cout << "Ange det minsta talet: ";
	cin >> min;

	while(out > max or out < min){
	
		out = rand()%max + min;
		
	}

	cout << out;

	return 0;
}
