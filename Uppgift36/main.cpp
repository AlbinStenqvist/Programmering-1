#include <iostream>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

string ABBA(string out, string i1, string i2){
	
out = i1 + i2 + i2 + i1;
	
return out;
	
}

int main (int argc, char** argv){

	string in1;
	string in2;
	string abba;
	
	cout << "Ange två ord: ";
	cin >> in1;
	cin >> in2;

	cout << ABBA(abba,in1,in2);
	
	return 0;
}
