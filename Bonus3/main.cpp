#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	float t1, m1, s1, t2, m2, s2, t3, m3, s3;
	
	cout << "Ange tiden för lopp 1 (TT MM SS): ";
	cin >> t1;
	cin >> m1;
	cin >> s1;
	
	cout << "Ange tiden för lopp 2 (TT MM SS): ";
	cin >> t2;
	cin >> m2;
	cin >> s2;
	
	t3 = t1 + t2;
	m3 = m1 + m2;
	s3 = s1 + s2;
	
	if (s3 >= 60) {
		
		m3 = m3 + 1;
		s3 = s3 - 60;
	}
	
	if (m3 >= 60) {
		
		t3 = t3 + 1;
		m3 = m3 - 60;
	}
	
	
	
	cout << t3 << " timmar " << m3 << " minuter " << s3 << " sekunder ";
	
}
