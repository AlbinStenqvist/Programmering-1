#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int funktion(int in, int out) {

	if(in == 1) {
	
		out = 1;

	}
	
	else {
	
	
		out = in * funktion(in - 1, out);	
	
	}
	
	return out;	
		
}
	
int main (int argc, char** argv){

	int in, out;
	
	cout << "Ange ett tal: ";
	cin >> in;
	
	cout << funktion(in, out);
	
	return 0;
}
