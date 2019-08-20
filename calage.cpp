#include <iostream>
using namespace std ;
int Calage (int year) ;
int main () 
{
	int year, age;
	for ( int i=1 ; i <=3 ; i++ )
	{
	cout << "Enter Year " << i << ": " ;
	cin >> year ;
	age = Calage(year) ;
	cout << "Age " << i << ": " << age << endl ;
	}

	return (0) ;
}
int Calage(int year) 
{
	return (2562-year) ;
}