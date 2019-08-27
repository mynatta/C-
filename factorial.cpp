#include<iostream>
using namespace std ;

int Factorial(int n)
{
	int f;
	if ( n == 1 )
		f = 1;
	else
		f = n + Factorial(n - 1);
	cout << n << "! = " << f << endl ;
	return (f);
}
void main ()
{
	int x;
	x = Factorial(4);
	cout << x << endl ;
}