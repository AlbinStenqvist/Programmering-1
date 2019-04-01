#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {


// for (int counter; counter < 10; counter++) {
//       
//        for (int i = 0; i <= 9; i++) {
//           
//           cout << i << " ";
//           
//        }
//        
//        cout << endl;
//       
//    }
//   
//    return 0;
//}

//for (int counter; counter < 10; counter++) {
//       
//        for (int i = 0; i <= counter; i++) {
//           
//           cout << i << " ";
//           
//        }
//        
//        cout << endl;
//       
//    }
//   
//    return 0;
//}

int mellanslag = 1;

for (int counter = 9; counter >= 0; counter--) {
       
       
       
        for (int i = 0; i <= counter; i++) {
           
           cout << i << " ";
           
        }
        
    	cout << endl;
    	
    	for (int m = 0; m < mellanslag; m++) {
    		
    		cout << " ";
    		
		}
		
		mellanslag++;
    }
   
    return 0;
}
