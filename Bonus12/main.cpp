#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int tal[7];
	int ny, position;	
	
	for (int i = 0; i < 7; i++){
		
		cout << "Ange ett tal: ";
		cin >> tal[i];
	}

	cout << "Ange ett tal som ska byta ut ett annat: ";
	cin >> ny;

	cout << "Ange vilken position det nya talet ska vara i: "; 
	cin >> position;
	
	position = position - 1;

	for (int j = 0; j < 7; j++){
		
		if(j == position){
			
			tal[j] = ny;	

			cout << tal[j] << endl;
		}

		if (j != position){

			cout << tal[j] << endl;
		}
	}
	
	return 0;
}
