#include<iostream>
#include<string>
#include<iomanip>
using namespace std ;

void DisplayMenu();
float Area(const float Radius);
float Area(const float Length, const float Width);
double Area(const double Base , const double Height);
int main ()
{
	char choice ;
	bool Flag = true;
	do 
	{
		DisplayMenu();
		cin >> choice ;
		if (choice == '1' )
		{
			float Radius ;
			cout << "\n Enter Radius : " ;
			cin >> Radius ;
			cout << " Area of Circle = " << fixed ;
			cout << setprecision(2) << Area(Radius) << endl;

		}
		else if (choice == '2')
		{
			float length, widht;
			cout << " Enter Length and Width : " ;
			cin >> length >> widht ;
			cout << " Area of Rectangle = " << fixed ;
			cout << setprecision(2) << Area(length,widht);
			cout << endl ;
		}
		else if (choice == '3' )
		{
			double base, height ;
			cout << " Enter Base and Height : " ;
			cin >> base >> height ;
			cout << " Area of Triangle = " << fixed ;
			cout << setprecision(2) << Area(base,height);
			cout << endl ;
		}
		else if (choice == '4' ) Flag = false ;
		else
		{
			cout << "\nYou choose out of range is ";
			cout << "not process.\n";
		}
	}while (Flag);
	cout << "\n. . . Exit Program . . .\n" ;
return (0);
}
float Area(const float Radius)
{
	return (3.14159F * Radius * Radius );
}

float Area(const float Length, const float Widht)
{
	return(Length * Widht) ;
}
double Area(const double Base, const double Height)
{
	return(0.5 * Base * Height ) ;
}
void DisplayMenu()
{
	cout << endl ;
	cout << " Program Calculate Area " << endl ;
	cout << " 1. Circle" << endl ;
	cout << " 2. Rectangle" << endl ;
	cout << " 3. Triangle " << endl ;
	cout << " 4. Exit " << endl ;
	cout << " Enter your choose number : " ;
}