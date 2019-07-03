#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	/*cout << "***** Program Calculate Area Rectangle ***** " << endl ;
	int Length ;
	int Widht ;
	cout << "Enter Length : " ;
	cin >> Length ;
	cout << "Enter Widht : " ;
	cin >> Widht ;
	cout << endl ;
	cout << "Area of Rectangle = " << Length*Widht << endl ;

	cout << endl ;
	cout << "***** Program Calculate Area Circle ***** " << endl ;
	float Radius ;
	cout << "Enter Circle radius : " ;
	cin >> Radius ;
	cout << endl ;
	cout << "Area of circle with radius " << Radius << " is " << 3.1415*Radius*Radius << endl ;
	cout << "Circumference is " << 2*3.1415*Radius << endl ; */

	float X;
	
	cout << "Input value of X : " ;
	cin >> X ;
	float Result (0) ;
	Result = pow( 2 , 2*X+1 ) + 12*pow( 2 , X ) + 16  ;
	cout << "Result of This Problem is = "  ;
	cout << Result << endl ;
	return (0);





}