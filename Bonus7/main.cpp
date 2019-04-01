#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
   
    int rader, stjarnor, q, input;
   
	cout << "Ange mängden rader: ";
	cin >> rader;
	
	cout << "Ange mängden stjänor: ";
	cin >> stjarnor;
   
    cout << "Ange ett tal: ";
    cin >> input;
   
    for (int i; i <= rader; i++) {
       
        if (input > stjarnor) {
           
            input = 1;
           
        }
       
        for (int counter = q; counter < stjarnor; counter++) {
           
            if (input - 1  == counter){
               
                cout << "_";
               
            }
           
            else {
           
            cout << "*";   
               
            }
           
           
        }
        cout << " " << endl;
        q = 0;
        input++;
    }
   
    return 0;
}
