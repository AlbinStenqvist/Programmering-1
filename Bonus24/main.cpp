#include <iostream>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int y;
int x;

int cord(){
	
	cout << "Ange x-och y-värde: " << endl;
	cin	>> x;
	cin >> y;

}


int karta(){
	
	bool omstart = true;	
	
	while(omstart == true){

		cord();

		x = x - 1;

		system("CLS");

		if(y == 0){

			if(x == -1){
	
				x = x +1;	
	
			}	
	
			if(x != 0){
	
				cout << "0";
		
			}

			for(int i; i < 10; i++){

				if(i == x){
	
					cout << " O";
	
				}	
	
				if(i != x){
	
					cout << ".";	
	
				}	
			}

			for(int i; i < 10; i++){
	
				cout << endl << ".";	
	
			}
		}

		if(y != 0){
	
			if(x == -1){

				x = x + 1;	
	
			}	

			cout << "............";

			if(x == 0){

				y = y - 1;

			}

			for(int i = 0; i < 10;i++){	

				if(i == y){

					if( x != 0){
	
						for(int i = 0; i < x;i++){

							cout<<" ";		
	
						}
	
						cout<<"O";
	
					}	
	
					if(x == 0){
	
						cout << endl << "O";	
	
					}
				}
				
				if(i != y){
	
					cout << endl << ".";	
	
				}
			}
		}

		cout << endl << endl;

		cout << "Vill du ange nya kordinater? ja/nej: ";
		string input;
		cin >> input;

		if(input == "ja"){
	
			omstart = true;	
	
		}

		if(input == "nej"){
		
			omstart = false;	
	
		}
	}	
}

struct obj{
	
	int radius;
	string color;
	int weight;	
 
	int x;
	int y;
		
};

int main (int argc, char** argv){

	int radie;
	string farg;
	int vikt;

	cout << "Ange radie, färg och vikt: ";
	cin >> radie;
	cin >> farg;
	cin >> vikt;
	cout << endl;

	obj boll ();

	karta();

	return 0;
}
