#include <iostream>
#include <cstdlib>
#include <ctime>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {

	string tarning;
	string in;	
	int a,b,c,d,e;	

	int tiden = time(0);

	srand(tiden);

	a = rand()%6 + 1;
	b = rand()%6 + 1;
	c = rand()%6 + 1;
	d = rand()%6 + 1;
	e = rand()%6 + 1;
	
	
	cout << a << " " << b << " " << c << " " << d << " " << e << endl;	

	cout << "Vill du slå om en tärning? ja/nej: ";
	cin >> in;


	if(in == "ja"){
		
		cout<<"Vilken? 1-5: ";
		cin >> tarning;	
	
	} 
	
	if(in == "nej"){
	
		return 0;	
	
	}

	for (int i = 0; i < 5; i++){

		if(tarning[i] == '1'){

			a  = rand()%6 + 1; 	
	
		}

		if(tarning[i] == '2'){
	
			b = rand()%6 + 1;	
	
		}

		if(tarning[i] == '3'){

			c = rand()%6 + 1;	
	
		}

		if(tarning[i] == '4'){

			d = rand()%6 + 1;
	
		}

		if(tarning[i] == '5'){
	
			e = rand()%6 + 1;	
		
		}
	}

	cout << a << " " << b << " " << c << " " << d << " " << e;

	return 0;
}
