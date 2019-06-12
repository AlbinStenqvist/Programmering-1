#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	char bokstav;
	string namn; 
	
	cout <<"Ange ett namn: "<<endl;
	cin >> bokstav;
	cin >> namn;

	bokstav = 'Z';

	cout << bokstav << namn;
	
	return 0;
}
