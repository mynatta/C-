#include<iostream>
using namespace std ;
int add(int &n, int &m); // (Reference)ระบุทั้งชนิดและชื่อ
int sub(int, int);
int mul(int, int);
int main () 
{
	int x, y,resultadd, resultsub, resultmul ;
	for(int i =1 ; i<=1 ; i++)
	{
	cout << "Input X : " ;
	cin >> x ;
	cout << "Input Y : " ;
	cin >> y ;

	cout<<x<<"   "<<y<<endl ;
	resultadd = add(x,y) ;
	cout << x << "+" << y << "="<< resultadd << "\n" ;
	cout<<x<<"   "<<y<<endl ;
	
	
	resultsub = sub(x,y) ;
	cout << x << "-" << y << "="<< resultsub << "\n" ;
	
	resultmul = mul(x,y) ;
	cout << x << "*" << y << "="<< resultmul << "\n" ;
	}
	
	return(0);

}
int add(int &n, int &m)
{
	n++ ;
	m++ ;
	return(n+m);
}
int sub(int n, int m)
{
	return(n-m);
}
int mul(int n, int m)
{
	return(n*m);
}

