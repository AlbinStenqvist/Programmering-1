#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int add (int t1, int t2){

return t1 + t2;
	
	
}

int main(int argc, char** argv) {

	int tal1, tal2;
	
	cout << "Ange ett tal: ";
	cin >> tal1;
	cout << "Ange ett till tal: ";
	cin >> tal2;	
	
	cout << add(tal1, tal2);
	
	return 0;
}
