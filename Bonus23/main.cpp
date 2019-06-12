#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int prim = 1;

int funktion(int in, int out){

	if(out != in and in != 1){

		if(out %in == 0){

			prim = 0;	

			cout << out << " är inte ett primtal";
	
			return 0;	

		}	
	}

	int a;

	if(in == 1) {
	
		a = 1;

	} 
	
	else {
	
		in = funktion(in - 1, out);
			
	}
}

int main (int argc, char** argv){
	
	int in;
	int out;

	cout << "Ange ett tal mellan 1 och 1000000: "<<endl;
	cin >> in;	

	out = in;

	funktion(in, out);		

	if(prim == 1){

		cout << out << " är ett primtal";
	}

	return 0;
} 
