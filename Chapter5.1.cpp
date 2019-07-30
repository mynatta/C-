#include <iostream>
#include <string>
using namespace std ;
int main () {
	/*int  x , y , sum = 0;
	cout << " Input first number  : " ;
	cin >> x ;
	cout << " Input second number : " ;
	cin >> y ;
	for ( int  i = y  ; i >=1 ; i-- )
		

		{cout <<" "<< x << " * " << i << " = "<< x*i << endl ;
	     sum +=x*i ;}
		cout << endl ;
		cout << " Total = " << sum << endl ;*/
	/*int n ;
	char c = '@' ;
	cout << " Input number : " ;
	cin >> n ;
	for ( int  i = n ;  i >=1 ; i-- ){
	for ( int j = i ; j >=1 ; j-- ){
	

	cout << " " << c  ;
	}
	cout << endl ;
	}
	*/

	int n , m  , sum  , average =0;
	cout << " Please enter number of student : " ;
	cin >> n ;

	
	for( int i=1 ; i<=n ; i++ ){
			cout << " Please enter score : " ;
	cin >> m ;
	
	if (m >=80 ) {
		cout << " The student grade is 4.00 " << endl ;
		sum = 4 ;
	}
	else if (m >=75 ) {
		cout << " The student grade is 3.50 " << endl ;
		sum = 3.5 ;
	}
	else if (m >= 70) {
		cout << " The student grade is 3.00 " << endl ;
		sum = 3 ;
	}
	else if (m >= 65) {
		cout << " The student grade is 2.50 " << endl ;
		sum = 2.5 ;
	}
	else if(m >= 60 ){
		cout << " The student grade is 2.00 " << endl ;
		sum = 2 ;
	}
	else if(m >= 55 ){
		cout << " The student grade is 1.50 " << endl ;
		sum = 1.5 ;
	}
	else if(m >= 50 ){
		cout << " The student grade is 1.00 " << endl ;
		sum = 1 ;
	}
	else if(m >= 0 ){
		cout << " The student grade is 0.00 " << endl ;
		sum = 0 ;
	}
	else {
		cout << " Error " << endl ;
	}
	average = average+sum ;
	}
	cout << " Class average : " << average/n << endl ;
	

	

	 
        
}