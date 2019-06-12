#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int CF(int tal, int out){

	out = tal *1.8 + 32;
	
return out;	
	
}

int FC(int tal, int out){
	
	out = (tal - 32) / 1.8;
	
	return out;		
}

int formelVal (int tal, string enhet, int out){
	
	if (enhet == "C"){
	
		out = CF(tal, out);
	
	return out;	
	
	}

	if (enhet == "F"){	
	
		out = FC(tal, out);	
	
		return out;
	
	}
}

int main(int argc, char** argv) {

	int tal, out;
	string enhet;
	
	cout << "Ange temperaturen: ";
	cin >> tal;
	
	cout << "Ange enheten som ska användas, F/C: ";
	cin >> enhet;

	cout << formelVal (tal, enhet, out);

	return 0;
}
