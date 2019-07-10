#include <iostream>
using namespace std ;
int main (){
	int n ;
	cout << " Enter Score   : " ;
	cin >> n ;
	
	if ( n >=90 && n<=100 ) {
		cout <<" Your Grade is : A " << endl ;
	}
	else if ( n >=80 && n<=89 ) {
		cout <<" Your Grade is : B " << endl ;
	}
	else if ( n >=70 && n<=79 ) {
		cout <<" Your Grade is : C " << endl ;
	}
	else if ( n >=60 && n<=69 ) {
		cout <<" Your Grade is : D " << endl ;
	}
	else if ( n >=0 && n<=59 ) {
		cout <<" Your Grade is : F " << endl ;
	}
	else {
		cout << " ERROR  " << endl ;
	}

}