#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int funktion(int in, int out){
	
	for(in; in > 0; in--){
	
		out = out + in;	

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
