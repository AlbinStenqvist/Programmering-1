#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int calculator (int in, int out){
	
	out = in * 1.8 + 32;
		
}

int temp(int in, int out){
	
	cout << "Ange temperaturen i celsius: ";
	cin >> in;
	
	cout << "Temperaturen i fahrenheit är: " << calculator(in, out);	
	
}

int main (int argc, char** argv) {
	
	int in, out;
	
	temp(in, out);	

	return 0;
}
