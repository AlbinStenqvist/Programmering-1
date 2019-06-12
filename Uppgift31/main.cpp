#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	string in;

	cout <<"Ange ett ord: "<<endl;
	cin>> in;

	for (int i = 0; i < in.length(); i++){
	
		if (in[i] == 'Z'){
	
			in[i] = 'a';
		}	
	}
	
	cout << in; 
	
	return 0;
}
