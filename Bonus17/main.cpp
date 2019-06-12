#include <iostream>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int calc(float tal1, float tal2, string in){

float out;
	
	if (in == "hypotenusan"){
	
		out = (tal1 * tal1) + (tal2 * tal2);
			
		out = sqrt(out);
	
	return out;

	}

	if (in == "katet"){
	
		tal1 = tal1 * tal1;
		tal2 = tal2 * tal2;

		if (tal1 > tal2){
	
			out = tal1 - tal2;
	
		}
	
		else {
		
			out = tal2 - tal1;
		
		}

		out	= sqrt(out);

		return out;		
	}
		
}
int main (int argc, char** argv){
	
	float tal1, tal2;
	string in;
	cout << "Ange vilken sida som ska räknas ut, hypotenusan eller en katet: ";	
	cin >> in;	

	cout << "Ange två sidors längder: ";	
	cin >> tal1;	
	cin >> tal2;	

	cout << calc(tal1, tal2, in);	

	return 0;
}
