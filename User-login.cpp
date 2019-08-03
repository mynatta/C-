#include<iostream>
#include<string>
using namespace std ;
void main () {
cout << "-------------- Menu --------------" << endl ;
	
	char a ;
	string registerusername, registerpassword, loginusername, loginpassword;
	
	do {
	cout << "1. Register" << endl ;
	cout << "2. Login " << endl ;
	cout << "Q. Exit " << endl ;
	cout << "----------------------------------" << endl ;
	cout << "Enter Menu : " ;
	cin >> a ;
	if (a =='1'){
		cout << "-------------- Register ----------" << endl ;
		cout << "Input Username : " ;
		cin >> registerusername ;
		cout << "Input Password : " ;
		cin >> registerpassword ;
		cout << endl ;}
	else if (a =='2'){
		cout << "-------------- Login -------------" << endl ;
		cout << "Input Username : " ;
		cin >> loginusername ;
		cout << "Input Password : " ;
		cin >> loginpassword ;
		cout << endl ;
		if( loginusername == registerusername && loginpassword == registerpassword ) {
			cout << " Username and Password correct ^___^ " << endl ;}
		else {
			do {
			cout << " !!!! Username or Password incorrect  Please try again !!!! " << endl ;
			cout << "Input Username : " ;
			cin >> loginusername ;
			cout << "Input Password : " ;
			cin >> loginpassword ;
				}
				while ( loginusername != registerusername ,loginpassword != registerpassword );
					cout << " Username and Password correct ^___^ " << endl ;
				}
		}
	}while (a != 'Q');
		cout << "Exit Program... " << endl ;
}