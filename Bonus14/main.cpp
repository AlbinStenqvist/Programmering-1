#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int e;

	bool cool = false;

	string in;

	cout << "Ange en mening: ";
	getline (cin, in);

	for (int i = 0; i < in.length(); i++){
		
		if( in[i] == 'm' or in[i] =='M'){

			for (int j = i; j < in.length(); j++){	
			
				if (in[j] == 'a' or in[j] =='A'){

					for (int k = j; k < in.length(); k++){
	
						if(in[k] == 't' or in[k] =='T'){

						cout<<"MAT!";

						return 0;
						}
					}		
				}	
			}
		}
	}
}
