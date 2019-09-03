#include <iostream>
using namespace std;
int main()
{
	int a[10] = {99,19,1,23,0,15,10,23,-26,-9};
	//int max = a[0] ;
	int temp  ;
	//a[0] = a[9] ;
	//a[9] = temp ;
	for(int i=0 ; i<9 ; i++) 
	{
		if(a[i] > a[i+1])
		{
			temp = a[i+1];
			a[i+1] = a[i];
			a[i] = temp;
		}
	//if(a[i] > max)
	//max = a[i];
	}
	for(int i=0 ; i<9 ; i++)
	{
		cout << a[i] << " " ;
	}
	//cout << temp <<"\t" << a[9]<< endl ;
	cout << endl ;
	//cout << a[0] <<" "<< a[1] << " " << a[2] << " "<< a[3] << " " << a[4] << " " << a[5] << " " << a[6] << " " << a[7] << " " << a[8] << " " << a[9] << " " << endl ;
	cout <<"Maximum value is " << a[9] << endl  ;
	return 0;
}