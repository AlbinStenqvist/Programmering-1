#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	string in1;
	string in2; 
	string in3; 
	string in4; 
	string in5; 
	string in6; 
	string in7; 
	string in8; 
	string in9; 
	string in10;  
	
	cout << "Ange ett typ av djur: ";
	cin >> in1;
	cout << "Ange ett namn: ";
	cin >> in2;
	cout <<"Ange ett till typ av djur: ";
	cin >> in3;
	cout <<"Ange ett till namn: ";
	cin >> in4;
	cout << "Ange ett föremål i plural: ";
	cin >> in5;
	cout << "Ange ett namn på en by: ";
	cin >> in6;
	cout << "Ange ett typ av djur: ";
	cin >> in7;
	cout << "Ange en kroppsdel i plural: ";
	cin >> in8;
	cout << "Ange en maträtt: ";
	cin >> in9;
	cout << "Ange ett tal: ";	
	cin >> in10;
	
	cout << "Det var en gång en " << in1 << " som hette " << in2 << " och en " << in3 << " vid namn " << in4 << ". Ute på en promenad fann de två " << in5 << 
	" av guld, de bestämmer sig för att fortsätta in till byn för att byta in dem. När de kommer fram till byn " << in6 << " träffar de en " << in7 << " utan " << in8 << 
	" som tigger " << in9 << ". " << in2 << " och " << in4 << " blir rörda och ger honom deras fynd som visar sig vara värda " << in10 << "kr. ";
	
	return 0;
}
