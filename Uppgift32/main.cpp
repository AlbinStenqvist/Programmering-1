#include <iostream>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	string in;
	bool m = false;
	bool a = false;
	bool t = false;

	cout << " Ange en mening: ";
	getline (cin, in);

	for (int i = 0; i < in.length(); i++){
	
		if ( in[i] == 'M' or in[i] == 'm'){
			m = true;
		}
		if ( in[i] == 'A' or in[i] == 'a'){
			a = true;
		}
		if ( in[i] == 'T' or in[i] == 't'){
			t = true;
		}	
	}
	if ( m == true and a == true and t == true){
		cout << "MAT!";
	}
	
	return 0;
}
