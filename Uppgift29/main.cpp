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
	cout << "Ange ett f�rem�l i plural: ";
	cin >> in5;
	cout << "Ange ett namn p� en by: ";
	cin >> in6;
	cout << "Ange ett typ av djur: ";
	cin >> in7;
	cout << "Ange en kroppsdel i plural: ";
	cin >> in8;
	cout << "Ange en matr�tt: ";
	cin >> in9;
	cout << "Ange ett tal: ";	
	cin >> in10;
	
	cout << "Det var en g�ng en " << in1 << " som hette " << in2 << " och en " << in3 << " vid namn " << in4 << ". Ute p� en promenad fann de tv� " << in5 << 
	" av guld, de best�mmer sig f�r att forts�tta in till byn f�r att byta in dem. N�r de kommer fram till byn " << in6 << " tr�ffar de en " << in7 << " utan " << in8 << 
	" som tigger " << in9 << ". " << in2 << " och " << in4 << " blir r�rda och ger honom deras fynd som visar sig vara v�rda " << in10 << "kr. ";
	
	return 0;
}
