#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int calculator(int in1, char metod, int in2, int out){
	
	if (metod == '-'){
	
		out = in1 - in2;
	
	}

	if (metod == '+'){
	
		out = in1 + in2;
	
	}

	if (metod == '/'){
	
		out = in1 / in2;	
	
	}

	if (metod == '*'){
	
		out = in1 * in2;	
	
	}
	
	cout << out;
	
}

int main (int argc, char** argv){

	int in1, in2, out;
	char metod;

	cout << "Ange en uträkning: ";
	cin >> in1;
	cin >> metod;
	cin >> in2;

	calculator (in1, metod, in2, out);

	return 0;
}
