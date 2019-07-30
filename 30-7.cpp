#include <iostream>
#include <string>
using namespace std;
void main() 
{/*
	cout << " Display square of number 1 to 10 " << endl ;
	cout << " ******************************** " << endl ;
	cout << " \t X\tX^2" << endl ;
	cout << " ******************************** " << endl ;
	int x = 1 , sum = 0;
		while ( x <= 10 ) {
			sum+= (x*x) ;
			cout << " \t " << x << " \t " << x*x << endl ;
			x++;
			}
		cout << endl ;
		cout << " Sum = " << sum << endl ;
	
	
	int x = 1 , sum = 0, r, n;
	cout << " Input Round : " ;
	cin >> r ;
	cout << " Input Start Number : " ;
	cin >> n ;
	
		while ( x <= r ) {
			sum+= (n*n) ;
			cout << " \t " <<  n << " \t " << n*n << endl ;
			x++ ;
			n++ ;
			}
		cout << endl ;
		cout << " Sum = " << sum << endl ;

	
	int x = 0 ;
	char c = '*' ;
	cout << " Input line : " ;
	cin >> x ;
	int i = 1 ;
	while ( i <= x ){
		int j = 1 ;
		while ( j <= i ) {
			cout << " " << ( "*" )  ;
			j++ ;
		}
			i++ ;
	
			cout << endl  ;
		}


	char ch ;
	int Count = 0 ;
	string Str ;
	cout << " Enter String : " ;
	while ( cin >> ch ) {
		if(ch == '.')break;
		Count++ ;
		Str += ch ;
	}
	cout << "\n Length of String(" << Str <<" )is " ;
	cout << Count << endl ;


	char ch ;
	int Count = 0 , lower = 0, upper = 0, number = 0, special = 0;
	string Str ;
	cout << " Input String : " ;
	while ( cin >> ch ) {
		if(ch == '.')break;
		Count++ ;
		Str += ch ;
		if(ch >= 'a' && ch <= 'z')
		lower++ ;
		else if(ch >= 'A' && ch <= 'Z')
		upper++ ;
		else if (ch >= '0' && ch <= '9')
		number++ ;
		else 
		special++ ;
		}
		
	cout << " Your message have " << lower << " lowers character . " <<  endl ;
		cout << " Your message have " << upper << " upper character . " <<  endl ;
		cout << " Your message have " << number << " numeric character . " <<  endl ;
		cout << " Your message have " << special << " special character . " <<  endl ; */

	/*int n = 0;
	string Str ;
	cout << " Enter String (10 char): " ;
	getline (cin,Str) ;
	cout << endl ;
	cout << " Enter your string : " << Str << endl ;
	cout << " Length of string = " << Str.length() << endl ;
	if( Str.length()>10 ) {
	/*cout << " Position " << n << " = " << Str.at(n) << endl ;
	cout << " Your string is more than 10 char " /*<< n << " = " << Str.at(n) << endl ;
		 
	}
	else {
		for (int n= 0 ; n < Str.length() ; n++ ){
			cout << " Position " << n << " = " << Str.at(n) << endl ;
		}
	}
	*/

	char ch ;
	cout << " PROGRAM CALCULATE AREA " << endl ;
	cout << " 1. Circle " << endl ;
	cout << " 2. Square " << endl ;
	cout << " 3. Exit " << endl ;
	int r = 0 ,d = 0;
	do{
	cout << " Enter your choose number : " ;
	cin >> ch ;
	if(ch=='1'){
		cout << " Enter radius : " ;
		cin >> r;
		cout << " Area of circle is " << 3.14*r*r << endl ;
	}
	if(ch=='2'){
		cout << " Enter side : " ;
		cin >> d ;
		cout << " Area of Square is " << d*d << endl ;
	}
	}while(ch!='3');
}



	
	
	

	
	

	

