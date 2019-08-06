#include <iostream>
#include <string>
#include <iomanip>
using namespace std ;
void main () {
	/* char ch ;
	string str ;
	cout << "Enter Character : " ;
	cin  >> ch ;
	if(isdigit(ch)){
	cout << "This is Numeric " << endl ;
	}
	else {
	cout << "This is Alphabet " << endl ;
	cout << (char)toupper(ch) << endl;
	}
	cout << "Enter string number : " ;
	cin >> str ;
	//double num = atof(str.c_str());
	cout << str+str ;
	//cout << atof(str.c_str()) + atof(str.c_str()) << endl ; 
	
	int num = 0 ;
	srand(time(NULL));

	for (int i=1;i<=100;i++)
	{
	num = (500+rand()%501) ;
	cout << num << "  " ;

		if ( i%5==0 ) 
		{
			cout << endl ;
		}
	} 

	char str1[30], str2[30], str3[60]  ;
	cout << " Enter String 1 : " ;
	cin  >> str1 ;
	cout << " Enter String 2 : " ;
	cin  >> str2 ;
	//cout << strcat(str1, str2) << endl ;
	strcpy(str3, strcat(str1, str2)) ;
	cout << "" << str3 << endl ;
	for ( int i = strlen(str3)-1 ; i >= 0; i--)
	{	if(isdigit(str3[i]))
			{
			cout << (str3[i]) <<" <-- here is numeric " << endl ;
			}
		else {
			cout << (str3[i]) << " <-- here is character " << endl;
			 }
	}
	cout << endl ; */


	//cout << "A" << setfill('*') << setw(20) << "B" << endl ;

	setfill(' ') ;
	float t = 3.451, c = 1.25647 ;

	//cout << t << "\t" << c << endl ;
	cout << fixed << setprecision(2) << t << setw(30) << "\t" << setprecision(3) << c << endl ;


	
}