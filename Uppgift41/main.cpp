#include <iostream>
#include <cstdlib>
#include <ctime>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int calc (int max, int min, int out){
	
	while(out > max or out < min){
	
		out = rand()%max + min;
		
	}

	return out;

}

int main (int argc, char** argv){
	
	int tiden = time(0);

	srand(tiden);
		
	int max, min, out;

	cout << "Ange det största talet: ";
	cin >> max;
	cout << "Ange det minsta talet: ";
	cin >> min;	
	
	cout << calc (max, min, out);
	
	return 0;
}
