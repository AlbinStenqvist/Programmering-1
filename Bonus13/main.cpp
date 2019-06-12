#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	bool okar;

	int tal[10];

	int a = 0;

	cout << "Ange tio tal: ";

	for (int i = 0; i < 10; i++){

		cin >> tal[i];

	}

	int b = -1;

	for (int j = 1; j < 10; j++){
	
		b++;

		
		if (tal[b] == tal[j]){

			a = a - 2;
	
		}

		if (tal[b] < tal[j]){
	
			okar = true;	
	
		}	
	
		if (tal[b] > tal[j]){

			okar = false;
	
		}

		if(okar == true){
	
		a++;
	
		}

		if(okar == false){
	
			a = a + 2;
		
		}
	}

	if (a == 9){
	
		cout << "Talen ökade";	
	
	}

	if (a > 1 and a < 18 and a != 9){
	
		cout<<"Talen ökade och sänkte";
	
	}
	
	if (a == 18){
	
		cout << "Talen sänktes";	
	
	}

	if (a == 0){
	
		cout << "Talen var likadana";	
	
	}
	
	return 0;
}
