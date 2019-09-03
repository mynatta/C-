#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	string name[4];
	for(int i=0;i<4;i++)

{
	int num[4];
	float Total = 0 ;
	for(int i=0;i<4;i++)
	
	
	{
	cout<<"Enter name ["<< i <<"]: ";
	cin>> name[i] ;
	
	cout<<"Enter num ["<< i <<"]: ";
	cin>> num[i] ;
	Total += num[i] ;
	}
	cout <<"-------------------------------"<< endl ;
	cout <<"Name" "\t" "Score" << endl ;
	cout <<"-------------------------------"<< endl ;

	//float Average = 0, Total = 0 ;
	for(int i=0;i<4;i++)
		name[i] = name[i];
		num[i] = num[i];
		Total = Total / 4 ;

	for(int i=0;i<4;i++)
	cout << name[i] << "\t" << num[i] << "\n" ;
	cout <<"-------------------------------"<< endl ;
	

	cout << "Average score = "<< fixed << setprecision(2) << Total << endl ; 
	return 0 ;

}
}