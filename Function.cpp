#include<iostream>
#include<math.h>
using namespace std ;
int power2(int, int);
int main () 
{
	/*
	Function Header  --> data-type Function Name (type var1,typevar2,...)
	Function body    --> variable declaration ; (ประกาศตัวแปร)
						  statement ;          
						  return (value) ; 
	*/
	int x = 1, result, y=1 ;
	while (x <= 10) 
	{
		//cout << power2(x) << "\n" ; /*(วิธีที่ 1) */
		
		result = power2(x,y) ; /* (วิธีที่ 2 ) */
		cout << result << "\n" ;
		x = x + 1 ;
		y = y + 2 ;
	}
	return(0) ;
}
int power2(int n, int m)
{
	return(pow(n*1.0,m*1.0));
}