#include<iostream>
using namespace std ;
float calAm(float amount, int year );
int main ()
{
	
	float amount, Total = 0   ;
	int year ;
	
	for ( int i =1 ; i < 4 ; i++ )
	{
		cout << "Input Amount " << i << " : "  ;
		cin >> amount ;
		cout << "Input Years " << i << " : " ;
		cin >> year ;
		
		;
		cout << "Total your money " << i << " : " << calAm(amount,year) << endl ;
		cout << "---------------------"<< endl ;
		Total = Total + calAm(amount,year) ;
	}
	cout << "Toatl 3 People = " << Total << endl ;
	
	return 0 ;
}
float calAm(float amount,int year)
{
	return ( (amount*0.03)*year)+amount ;
}