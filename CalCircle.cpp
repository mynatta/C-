#include<iostream>
using namespace std ;
void calcircle (float);
float Radius ;
int main()
	
{
	cout << "Input Radius : " ;
	cin >> Radius ;
	calcircle(Radius) ;
	
	
	return (0) ;
}
void calcircle(float Radius)
{
	float  Area, Circumference ;
	//cout << "Input Radius : " ;
	//cin >> Radius ;
	Area = 3.14f*Radius*Radius ;
	Circumference = 2*3.14f*Radius ;
	cout << endl ;
	cout << "Area of circle : " << Area << endl ;
	cout << "Circumference of circle : " << Circumference << endl ;
	cout << "Diameter of circle : " << (2*Radius) << endl ;

}
