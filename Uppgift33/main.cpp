#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int Incresefunction(int tal){
	
	tal = tal + 2;
	
	cout << tal;
	
	return 0;
	
}

int main (int argc, char** argv){
	
	int in;
	cout << "Ange ett tal: ";
	cin >> in;
	
	Incresefunction(in); 
		
	return 0;
}
