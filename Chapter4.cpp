#include <iostream>
using namespace std ;
int main () {
	float w , h ;
	cout << " Enter weight : " ;
	cin >> w ;
	cout << " Enter height : " ;
	cin >> h ;
	h = h/100 ;
	float BMI ;
	BMI = w/(h*h) ;
	cout << " Your BMI is " << BMI << endl ;
	if (BMI>=30) {
		cout << " Heavy weight Level 3 " << endl ;
	}
	else if (BMI>=25) {
		cout << " Heavy weight Level 2 " << endl ;
	}
	else if (BMI>=23) {
		cout << " Heavy weight Level 1 " << endl ;
	}
	else if (BMI>=18.50) {
		cout << " Normally " << endl ;
	}
	else {
		cout << " Under weight " << endl ;
	}

	

	
}
