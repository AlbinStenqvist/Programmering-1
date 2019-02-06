#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	float a, b, c;
	
	cout << "A: ";
	cin >> a;
	cout << "B: ";
	cin >> b;
	
	c = a;
	a = b;
	b = c;
	
	cout << "A: " << a << endl;
	cout << "B: " << b;
}
