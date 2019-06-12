#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	bool start = true;

	float tal1, tal2, svar1, svar2, svar3, svar4, ja, nej;

	string metod;

	while(start == true){
	
		string input; 
		cout <<"Addition, Subtraktion, Multiplikation eller Division: ";
		cin >> metod;
		
		cout << "Ange första talet: ";
		cin >> tal1;
		
		cout << "Ange andra talet: ";
		cin >> tal2;
		
		
		if (metod == "Addition" ){
			
			svar1 = tal1 + tal2;
		
			cout << tal1 << " + " << tal2 << " = " << svar1 << endl;
		
		}
			
		if (metod == "Subtraktion" ){
			
			svar2 = tal1 - tal2;
			
			cout << tal1 <<  " - " << tal2 << " = " << svar2 << endl;	
			
		} 
			
		if (metod == "Multiplikation" ){
			
			svar3 = tal1 * tal2;
			
			cout << tal1 << " * " << tal2 << " = " << svar3 << endl;	
			
		} 
			
		if (metod == "Division" ){
			
		svar4 = tal1 / tal2;	
		
		cout << tal1 << " / " << tal2 << " = " << svar4 << endl;
			
		} 
		
		cout << "Vill du köra om miniräknaren? ja/nej: ";
		cin >> input;
		
		
		if (input == "ja" ){
			
			start = true;
			
		}
		
		else if (input == "nej" ){
			
			start = false;
			
		}
	}
	
	return 0;
}
