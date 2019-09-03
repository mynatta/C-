#include <iostream>
using namespace std;
int main()
{
	int x,a[5];
	for (x=0; x<5; x++)
	{	
	cout<<"Enter value for a["<<x<< "]:" ;
	cin>>a[x];
	}
	cout<<"Show all values\n";
	for (x=0; x<5; x++)
	{ 
		cout<< "a[" <<x<< "] ="<<a[x];
	}
}