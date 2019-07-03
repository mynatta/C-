#include <iostream>
using namespace std ;
int main() {
	int C ;
	cout << "Enter Celcius Temperature : " ;
	cin >> C ;
	cout << C << " Celcius " << " = " << ( C*1.8 ) + 32  << " Fahrenheit " << endl ;
	cout << "Now weather in Thailand is " << ((( C*1.8 ) + 32 > 70 )? " HOT! ":" COOL! " )<< endl ;
}